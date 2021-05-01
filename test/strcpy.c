#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

int main()
{
	char    dest1[10];
    char    dest2[10];

	printf("-------FT_STRCPY-----------\n");
    printf("result of strcpy : %s\n", strcpy(dest1, "abcd"));
    printf("result of ft_strcpy : %s\n", ft_strcpy(dest2, "abcd"));

	return (0);
}