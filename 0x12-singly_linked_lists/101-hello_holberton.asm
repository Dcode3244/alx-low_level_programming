extern	printf

section .text
	global main
main:
	lea	rdi, [rel fmts]
	lea	rsi, [rel message]

	mov	al, 0
	call	printf

	mov	rax, 0x3c
	xor	rdi, rdi
	syscall

	section .data
message: db "Hello Holberton",0
fmts:	db "%s",10, 0
