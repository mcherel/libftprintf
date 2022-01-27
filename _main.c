


#include <stdio.h>
#include "includes/ft_printf.h"

int main (void)
{
    //TEST CHAR
    
    ft_printf("(CHAR)Hello world %c, %c, %c\n", 'A', 'B','C');
    printf("(CHAR)Hello world %c, %c, %c\n", 'A', 'B','C');

    printf("LEN %d \n",(ft_printf("%c \n", '0')));
    printf("LEN %d \n",(printf("%c \n", '0')));
    // printf("%c\n", '0');

	ft_printf("2 %c \n", '0');
    printf("2 %c \n", '0');
	
    ft_printf("3 %c\n", '0' - 256);
    printf("3 %c\n", '0' - 256);
	
    ft_printf("4 %c \n", '0' + 256);
	printf("4 %c \n", '0' + 256);
	
    ft_printf("5 %c %c %c \n", '0', 0, '1');
	printf("5 %c %c %c \n", '0', 0, '1');

	ft_printf("6 %c %c %c \n", ' ', ' ', ' ');
	printf("6 %c %c %c \n", ' ', ' ', ' ');

	ft_printf("7 %c %c %c \n", '1', '2', '3');
	printf("7 %c %c %c \n", '1', '2', '3');

	ft_printf("8 %c %c %c \n", '2', '1', 0);
	printf("8 %c %c %c \n", '2', '1', 0);

	printf("LEN %d \n",(ft_printf("9 %c %c %c \n", 0, '1', '2')));
	printf("LEN %d \n",(printf("9 %c %c %c \n", 0, '1', '2')));
    
//TEST STRING
    char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
    printf("TEST STRINGw\n");
    printf("1 LEN %d\n", ft_printf("%s\n", ""));
    printf("1 LEN %d\n", printf("%s\n", ""));
	printf("2, LEN %d\n", ft_printf(" %s\n", ""));
	printf("2, LEN %d\n", printf(" %s\n", ""));
	printf("3, LEN %d\n", ft_printf("%s \n", ""));
	printf("3, LEN %d\n", printf("%s \n", ""));
	printf("4, LEN %d\n", ft_printf(" %s \n", ""));
	printf("4, LEN %d\n", printf(" %s \n", ""));
	printf("5, LEN %d\n", ft_printf(" %s \n", "-"));
	printf("5, LEN %d\n", printf(" %s \n", "-"));
	printf("6, LEN %d\n", ft_printf(" %s %s \n", "", "-"));
	printf("6, LEN %d\n", printf(" %s %s \n", "", "-"));
	printf("7, LEN %d\n", ft_printf(" %s %s \n", " - ", ""));
	printf("7, LEN %d\n", printf(" %s %s \n", " - ", ""));
	printf("8, LEN %d\n", ft_printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2));
	printf("8, LEN %d\n", printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2));
	printf("9., LEN %d\n", ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
	printf("9., LEN %d\n", printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));
    printf("10, LEN %d\n", ft_printf(" NULL %p NULL ", NULL));
	//printf("10, LEN %d\n", printf(" NULL %s NULL ", NULL));
    
    return (0);
}