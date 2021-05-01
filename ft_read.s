; ssize_t write(int rdi, const void *rsi, size_t rdx);

section .text
	global	_ft_read
	extern ___error			;		C library

_ft_read:
		mov		rax, 0x02000003 ; 		system call for read
		syscall					;		invoke operating system to do the read
		jc		error
		ret

error:
		mov		rdi, rax
		call	 ___error		;		int *error()   -> return 값이 errno의 주소값
		mov		[rax], rdi      ;		rax = &errno   *errno = rdi(errno number)
		mov		rax, -1
		ret
