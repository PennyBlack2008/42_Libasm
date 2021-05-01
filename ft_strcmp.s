; int strcmp(const char *rdi, const char *rsi);
; ANSI C의 strcmp 기준으로 만든 코드, 컴파일 시 GCC builtin 함수 해제해야함
; gcc -fno-builtin

section .text
	global _ft_strcmp

_ft_strcmp:
		mov		rax, 0		;	different에서 사용하기에 초기화
		mov		rbx, 0		;	different에서 사용하기에 초기화
		mov		rcx, 0
		jmp		compare

compare:
		mov		al, byte[rdi + rcx]
		mov		bl, byte[rsi + rcx]
		cmp		al, 0		;	null은 두 문자열 중 하나만 검사해도되니깐
		je		different
		cmp		al, bl
		jne		different
		inc		rcx
		jmp		compare

different:
		sub		rax, rbx
		ret
