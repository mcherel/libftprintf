#include "includes/ft_printf.h"
#include <stdio.h>

int main (void)
{
ft_printf("1Hello world1\n");
printf("2Hello world2\n\n");

ft_printf("3Hello world%%\n");
printf("4Hello world%%\n\n");

ft_printf("5Hello world%c\n", 'A');
printf("6Hello world%c\n\n", 'A');

printf("LEN: %d\n",ft_printf("7Hello world%s\n", "Tralala"));
printf("LEN: %d\n",printf("8Hello world%s\n\n", "Tralala"));

ft_printf("9Hello world%d\n", -42);
printf("10Hello world%d\n\n", -42);

ft_printf("11Hello %c world %c %c\n", 'A', 'B', 'C');
printf("12Hello %c world %c %c\n\n", 'A', 'B', 'C');

ft_printf("13Hello world%u\n", (unsigned int)4294967295);
printf("14Hello world%u\n\n", (unsigned int)4294967295);

int a = 42;
ft_printf("15Hello world%x\n", a);
printf("16Hello world%x\n\n", a);

ft_printf("17Hello world%X\n", a);
printf("18Hello world%X\n\n", a);
//ft_printf("17Hello world%u\n", (unsigned int)4294967295);
////printf("18bisHello world%X\n\n", (unsigned int)"FFFFFFFF");
//printf("18bisHello world%X\n\n", (unsigned int)"ffffffff");
int b;
int *ptr;
ptr = &b;
ft_printf("19Hello world%p\n", ptr);
printf("20Hello world%p\n\n", ptr);
}