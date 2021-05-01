// please compile with gcc -fno-builtin
// ANSI C에 해당하는 코드로 짜야함
#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

int main()
{
	char s1[30] = "00aa7";
	char s2[30] = "00aa9";
	char *str1, *str2; str1 = strdup("00aa"); str2 = strdup("0aaa");
	int i;

	printf("-----real func-----\n");
	i = strcmp(s2,s1);
	printf("스트링 변수로 %d\n", i);

	printf("-----ft func-----\n");
	i = ft_strcmp(s2,s1);
	printf("스트링 변수로 %d\n", i);

	printf("---------------------------\n");
	printf("그냥 스트링 result of strcmp : %d\n", strcmp("00aa\0", "0aaa\0")); // -1
    printf("그냥 스트링 result of ft_strcmp : %d\n", ft_strcmp("00aa", "0aaa"));

	printf("---------------------------\n");
	printf("동적할당 result of strcmp : %d\n", strcmp(str2, str1)); // -1
    printf("동적할당 result of ft_strcmp : %d\n", ft_strcmp(str2, str1));

	printf("-------FT_STRCMP-----------\n");
    printf("result of strcmp : %d\n", strcmp("\0", "\200")); // -1
    printf("result of ft_strcmp : %d\n", ft_strcmp("\0", "\200"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("\200", "\0")); // 1
    printf("result of ft_strcmp : %d\n", ft_strcmp("\200", "\0"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("aa", "aa")); //0
    printf("result of ft_strcmp : %d\n", ft_strcmp("aa", "aa"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("j", "a")); // 1
    printf("result of ft_strcmp : %d\n", ft_strcmp("j", "a"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("a", "j"));
    printf("result of ft_strcmp : %d\n", ft_strcmp("a", "j"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("a\200\0", "abcd")); // 30
    printf("result of ft_strcmp : %d\n", ft_strcmp("a\200\0", "abcd"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("bon", "bon"));
    printf("result of ft_strcmp : %d\n", ft_strcmp("bon", "bon"));
    printf("---------------------------\n");
}