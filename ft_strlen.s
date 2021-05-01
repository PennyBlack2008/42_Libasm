; size_t ft_strlen(const char *rdi);

section .text
	global _ft_strlen

_ft_strlen:
		mov		rax, 0
		jmp		cal

cal:
		cmp		byte[rdi + rax], 0
		je		done
		inc		rax
		jmp		cal

done:
		ret
