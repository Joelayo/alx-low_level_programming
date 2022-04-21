; Filename: 101-hello_holberton.asm
; Author: Joel Oduyemi

global main

section .text

main:
	mov rax, 0x1
	mov rdi, 0x1
	mov rsi, message
	mov rdx, msglen
	syscall

	mov rax, 0x3c
	mov rdi, 0x2
	syscall

section .data
	message db "Hello, Holberton", 13,10,0xA
	msglen equ $-message
