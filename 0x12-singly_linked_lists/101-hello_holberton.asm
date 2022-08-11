extern printf

section .text
   global main

main:
          lea       rdi, [rel fmt]
          lea       rsi, [rel msg]

          mov       al, 0
          call      printf

          mov       rax, 0x3C
          xor       rdi, rdi
          syscall

section .data
   msg: db "Hello, Holberton",10, 0
   fmt: db "%s", 0
