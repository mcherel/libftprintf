#include "includes/ft_printf.h"
#include <stdio.h>

int main (void)
{
printf("LEN MAIN %d\n", ft_printf("1Hello world1\n"));
printf("*LEN MAIN %d\n", printf("2Hello world2\n"));

printf("LEN MAIN %d\n", ft_printf("3Hello world%%\n"));
printf("*LEN MAIN %d\n", printf("4Hello world%%\n"));

printf("LEN MAIN %d\n", ft_printf("5Hello world%c\n", 'A'));
printf("*LEN MAIN %d\n", printf("6Hello world%c\n", 'A'));

printf("LEN MAIN: %d\n",ft_printf("7Hello world%s\n", "Tralala"));
printf("*LEN MAIN: %d\n",printf("8Hello world%s\n", "Tralala"));

printf("LEN MAIN %d\n", ft_printf("9 Hello world%d\n", -42));
printf("*LEN MAIN %d\n", printf("10Hello world%d\n", -42));

printf("LEN MAIN %d\n", ft_printf("11Hello %c world %c %c\n", 'A', 'B', 'C'));
printf("*LEN MAIN %d\n", printf("12Hello %c world %c %c\n", 'A', 'B', 'C'));

printf("LEN MAIN %d\n", ft_printf("13Hello world%u\n", (unsigned int)4294967295));
printf("*LEN MAIN %d\n", printf("14Hello world%u\n", (unsigned int)4294967295));

int a = 42;
printf("LEN MAIN %d\n", ft_printf("15Hello world%x\n", a));
printf("*LEN MAIN %d\n", printf("16Hello world%x\n", a));

printf("LEN MAIN %d\n", ft_printf("17Hello world%X\n", a));
printf("*LEN MAIN %d\n", printf("18Hello world%X\n", a));
//ft_printf("17Hello world%u\n", (unsigned int)4294967295);
////printf("18bisHello world%X\n\n", (unsigned int)"FFFFFFFF");
//printf("18bisHello world%X\n\n", (unsigned int)"ffffffff");
int b;
int *ptr;
b = 100;
ptr = &b;
printf("LEN MAIN %d\n", ft_printf("19Hello world%p\n", b));
printf("*LEN MAIN %d\n", printf("20Hello world%p\n", b));
}