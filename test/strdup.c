#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

int main()
{
	printf("\n----- FT_STRDUP -----\n");
    printf("%s\n", strdup("TIL"));
    printf("%s\n", ft_strdup("TIL"));
    printf("%s\n", strdup(""));
    printf("%s\n", ft_strdup(""));
    printf("%s\n", strdup("Lorem ipsum dolor sit amet"));
    printf("%s\n", ft_strdup("Lorem ipsum dolor sit amet"));
	system("leaks a.out");
}