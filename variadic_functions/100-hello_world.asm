section .text
	global main

main:
	mov rax, 1          ; syscall: write
	mov rdi, 1          ; file descriptor: stdout
	mov rsi, msg        ; pointer to string
	mov rdx, 13         ; length of string
	syscall

	mov rax, 60         ; syscall: exit
	xor rdi, rdi        ; status: 0
	syscall

section .data
	msg db "Hello, World", 10
