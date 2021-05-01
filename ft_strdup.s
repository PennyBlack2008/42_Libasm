; char *ft_strdup(const char *s1) rdi

section .text
		global _ft_strdup
		extern _ft_strlen
		extern _ft_strcpy
		extern _malloc

_ft_strdup:
		push	rdi
		call	_ft_strlen
		inc		rax
		mov		rdi, rax		; dest + 1 길이 값을 malloc(dest + 1 의 길이)
		call	_malloc
		cmp		rax, 0
		je		err
		mov		rdi, rax
		pop		rsi
		call	_ft_strcpy		; rdi, rsi
		mov		rax, rdi
		ret

err:
		leave
		ret