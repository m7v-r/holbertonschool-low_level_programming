section .data
	msg db "Hello, World", 10
	msg_len equ $ - msg

section .text
	global main

main:
	/* syscall: write(1, msg, msg_len) */
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msg_len
	syscall

	/* syscall: exit(0) */
	mov rax, 60
	xor rdi, rdi
	syscall
