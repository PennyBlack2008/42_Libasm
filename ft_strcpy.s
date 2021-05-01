; char *strcpy(char *rdi, const char *rsi); 앞에 dest, 뒤에 src

section .text
	global _ft_strcpy

_ft_strcpy:
		mov		rcx, 0
		jmp		dup

dup:
		mov		al, byte[rsi + rcx]
		mov		byte[rdi + rcx], al
		inc		rcx
		cmp		al, 0
		je		done
		jne		dup

done:
		mov		rax, rdi
		ret