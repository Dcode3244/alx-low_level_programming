	global	main
	extern	printf

	section .text
main:
	lea	rdi, [rel fmts]
	lea	rsi, [rel message]

	mov	al, 0
	call	printf

	mov	rax, 0x3c
	xor	rdi, rdi
	syscall

message: db "Hello Holberton",10,0
fmts:	db "%s",0
