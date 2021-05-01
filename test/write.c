#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void compare(int fd, char *str, int size)
{
	int ft; int real;
	errno = 0;
	ft = ft_write(fd, str, size);
	printf("ft : %d\n", ft);
	printf("errno : %d\n", errno);
	printf("----------------------\n");
	errno = 0;
	real = write(fd, str, size);
	printf("real : %d\n", real);
	printf("errno : %d\n", errno);
	printf("=============================\n");
	return ;
}

int main()
{
	printf("Case 1\n");
	compare(1, "abcd\n", 5);

	printf("Case 2\n");
	compare(-31, "abcd\n", 5);

	printf("Case 3\n");
	compare(0, "abcd\n", 5);

	printf("Case 4\n");
	compare(1, "abcd\n", 10);

	printf("Case 5\n");
	compare(0, "abcd\n", 10);

	printf("Case 6\n");
	compare(3, "abcd\n", 10);
	return (1);
}