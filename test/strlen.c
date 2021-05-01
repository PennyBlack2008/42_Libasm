#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void compare(char *str)
{
	int ft; int real;
	errno = 0;
	ft = ft_strlen(str);
	printf("ft : %d\n", ft);
	printf("errno : %d\n", errno);
	printf("----------------------\n");
	errno = 0;
	real = strlen(str);
	printf("real : %d\n", real);
	printf("errno : %d\n", errno);
	printf("=============================\n");
	return ;
}

int main()
{
	compare("sldfksjdlf\n\0");
	compare("s0");
}