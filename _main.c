


#include <stdio.h>
#include "includes/ft_printf.h"

int main (void)
{
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

	printf("LEN %d ",(ft_printf("9 %c %c %c \n", 0, '1', '2')));
	printf("LEN %d ",(printf("9 %c %c %c \n", 0, '1', '2')));
    
    return (0);
}