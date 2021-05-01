#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void compare(int fd, int size)
{
	char buffer[100] = {0, };
	int ft; int real;

	errno = 0;
	ft = ft_read(fd, buffer, size);
	printf("%s\n", buffer);
	printf("ft : %d\n", ft);
	printf("errno : %d\n", errno);
	printf("----------------------\n");
	memset(buffer, 0, 100);

	errno = 0;			// errno 은 0으로 초기화하지 않으면 변화지 않는다.
	real = read(fd, buffer, size);
	printf("%s\n", buffer);
	printf("real : %d\n", real);
	printf("errno : %d\n", errno);
	printf("=============================\n");
	return ;
}
/* 위의 값이 107이 정상, 아래는 0이 정상 */
void compare_noprintf(int fd, int size)
{
	char buffer[1000] = {0, };
	int ft; int real;

	errno = 0;
	ft = ft_read(fd, buffer, size);
	// printf("%s\n", buffer);
	printf("ft : %d\n", ft);
	printf("errno : %d\n", errno);
	printf("----------------------\n");
	memset(buffer, 0, 100);

	errno = 0;
	real = read(fd, buffer, size);
	// printf("%s\n", buffer);
	printf("real : %d\n", real);
	printf("errno : %d\n", errno);
	printf("=============================\n");
	return ;
}

int main()
{
	int fd;

	fd = open("./test", O_RDONLY);
	printf("Case 1\n");			// 123 456
	compare(fd, 3);
	close(fd);
	printf("Case 2\n");			// 잘못된 파일의 경우
	compare(fd, 3);

	printf("Exception 1\n"); // 읽은 글자수 확인, read 위치 서로 바꿔가면서 봐야함
	fd = open("./test", O_RDONLY);
	compare_noprintf(fd, 1000);
	close(fd);

	printf("Exception 2\n");		// fd 값 -1일 때
	char buffer[100] = {0, };
	int ft; int real; int size;
	size = 16;
	errno = 0;
	ft = ft_read(-1, buffer, size);
	printf("%s\n", buffer);
	printf("ft : %d\n", ft);
	printf("errno : %d\n", errno);
	printf("----------------------\n");
	memset(buffer, 0, 100);

	errno = 0;
	real = read(-1, buffer, size);
	printf("%s\n", buffer);
	printf("real : %d\n", real);
	printf("errno : %d\n", errno);
	printf("=============================\n");

	printf("Case 3\n");				// fd 0일 때,
	fd = open("./test", O_RDONLY);
	compare(fd, 0);
	close(fd);
	return (1);
}