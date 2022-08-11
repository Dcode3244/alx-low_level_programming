extern printf

section .text
   global main

main:
   push rbp

   mov rdi,	fmts
   mov rsi,	message
   mov rax,	0
   call printf

   pop rbp

   mov rax,0
   ret


section .data
   message: db "Hello, Holberton",10, 0
   fmts: db "%s", 0
