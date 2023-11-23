section .data
	hello db "Hello, Holberton", 0xa

section .text
	global main

	extern printf

main:
	push rbp
	mov rdi, hello
	call printf
	pop rbp

	mov eax, 0
	ret
