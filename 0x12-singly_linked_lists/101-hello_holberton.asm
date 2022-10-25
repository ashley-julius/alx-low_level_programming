
;101-hello_holberton.asm
;
;Author : Julius Kamara
;
;Date: 25th October 2022


section.text:
	
	extern printf
	global main

main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret

section.data:

	msg: db "Hello, Holberton",0
	fmt: db"%s",10,0
