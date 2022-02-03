


#include <stdio.h>
#include "includes/ft_printf.h"

int main (void)
{
    //printf CHAR
    
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
    
//printf STRING
    char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
    printf("printf STRINGw\n");
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
	printf("9., LEN %d\n", ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 "));
	printf("9., LEN %d\n", printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 "));
    printf("10, LEN %d\n", ft_printf(" NULL %s NULL \n", NULL));
	//printf("10, LEN %d\n", printf(" NULL %s NULL ", NULL));

	printf("**************HEXADECIMALES***************");
	printf("1 LEN %d\n", printf(" %x ", 0));
	printf("1 LEN %d\n", ft_printf(" %x ", 0));
	printf("2 LEN %d\n", printf(" %x ", -1));
	printf("2 LEN %d\n", ft_printf(" %x ", -1));
	printf("3 LEN %d\n", printf(" %x ", 1));
	printf("3 LEN %d\n", ft_printf(" %x ", 1));
	printf("4 LEN %d\n", printf(" %x ", 9));
	printf("4 LEN %d\n", ft_printf(" %x ", 9));
	printf("5 LEN %d\n", printf(" %x ", 10));
	printf("5 LEN %d\n", ft_printf(" %x ", 10));
	printf("6 LEN %d\n", printf(" %x ", 11));
	printf("6 LEN %d\n", ft_printf(" %x ", 11));
	printf("7 LEN %d\n", printf(" %x ", 15));
	printf("7 LEN %d\n", ft_printf(" %x ", 15));
	printf("8 LEN %d\n", printf(" %x ", 16));
	printf("8 LEN %d\n", ft_printf(" %x ", 16));
	printf("9 LEN %d\n", printf(" %x ", 17));
	printf("9 LEN %d\n", ft_printf(" %x ", 17));
	printf("10 LEN %d\n", printf(" %x ", 99));
	printf("10 LEN %d\n", ft_printf(" %x ", 99));
	printf("11 LEN %d\n", printf(" %x ", 100));
	printf("11 LEN %d\n", ft_printf(" %x ", 100));
	printf("12 LEN %d\n", printf(" %x ", 101));
	printf("12 LEN %d\n", ft_printf(" %x ", 101));
	printf("13 LEN %d\n", printf(" %x ", -9));
	printf("13 LEN %d\n", ft_printf(" %x ", -9));
	printf("14 LEN %d\n", printf(" %x ", -10));
	printf("14 LEN %d\n", ft_printf(" %x ", -10));
	printf("15 LEN %d\n", printf(" %x ", -11));
	printf("15 LEN %d\n", ft_printf(" %x ", -11));
	printf("16 LEN %d\n", printf(" %x ", -14));
	printf("16 LEN %d\n", ft_printf(" %x ", -14));
	printf("17 LEN %d\n", printf(" %x ", -15));
	printf("17 LEN %d\n", ft_printf(" %x ", -15));
	printf("18 LEN %d\n", printf(" %x ", -16));
	printf("18 LEN %d\n", ft_printf(" %x ", -16));
	printf("19 LEN %d\n", printf(" %x ", -99));
	printf("19 LEN %d\n", ft_printf(" %x ", -99));
	printf("20 LEN %d\n", printf(" %x ", -100));
	printf("20 LEN %d\n", ft_printf(" %x ", -100));
	printf("21 LEN %d\n", printf(" %x ", -101));
	printf("21 LEN %d\n", ft_printf(" %x ", -101));
	printf("22 LEN %d\n", printf(" %x ", INT_MAX));
	printf("22 LEN %d\n", ft_printf(" %x ", INT_MAX));
	printf("23 LEN %d\n", printf(" %x ", (int)INT_MIN));
	printf("23 LEN %d\n", ft_printf(" %x ", (int)INT_MIN));
	printf("24 LEN %d\n", printf(" %lx ", (long)LONG_MAX));//ko
	printf("24 LEN %d\n", ft_printf(" %lx ", (long)LONG_MAX));//ko
	printf("25 LEN %d\n", printf(" %lx ", (long)LONG_MIN));//ko
	printf("25 LEN %d\n", ft_printf(" %lx ", (long)LONG_MIN));//ko
	printf("26 LEN %d\n", printf(" %x ", (unsigned int)UINT_MAX));
	printf("26 LEN %d\n", ft_printf(" %x ", (unsigned int)UINT_MAX));
	printf("27 LEN %d\n", printf(" %lx ", (unsigned long)ULONG_MAX));//ko
	printf("27 LEN %d\n", ft_printf(" %lx ", (unsigned long)ULONG_MAX));//ko
	printf("28 LEN %d\n", printf(" %llx ", 9223372036854775807LL));//ko
	printf("28 LEN %d\n", ft_printf(" %llx ", 9223372036854775807LL));//ko
	printf("29 LEN %d\n", printf(" %x %x %lx %lx %lx %x %x", INT_MAX, (int)INT_MIN, (long)LONG_MAX, (long)LONG_MIN, (unsigned long)ULONG_MAX, 0, -42));//ko
	printf("29 LEN %d\n", ft_printf(" %x %x %lx %lx %lx %x %x", INT_MAX, (int)INT_MIN, (long)LONG_MAX, (long)LONG_MIN, (unsigned long)ULONG_MAX, 0, -42));//ko
	printf("30 LEN %d\n", printf(" %x ", 42));
	printf("30 LEN %d\n", ft_printf(" %x ", 42));
	printf("31 LEN %d\n", printf(" %x ", -42));
	printf("31 LEN %d\n", ft_printf(" %x ", -42));

	

	printf("***********pointeurs***********");

	printf("1 LEN %d\n", ft_printf(" %p ", -1));
	printf("1 LEN %d\n", printf(" %p ", -1));
	printf("2 LEN %d\n", ft_printf(" %p ", 1));
	printf("2 LEN %d\n", printf(" %p ", 1));
	printf("3 LEN %d\n", ft_printf(" %p ", 15));
	printf("3 LEN %d\n", printf(" %p ", 15));
	printf("4 LEN %d\n", ft_printf(" %p ", 16));
	printf("4 LEN %d\n", printf(" %p ", 16));
	printf("5 LEN %d\n", ft_printf(" %p ", 17));
	printf("5 LEN %d\n", printf(" %p ", 17));
	printf("6 LEN %d\n", ft_printf(" %p %p ", (long)LONG_MIN, LONG_MAX));
	printf("6 LEN %d\n", printf(" %p %p ", (long)LONG_MIN, LONG_MAX));
	printf("7 LEN %d\n", ft_printf(" %p %p ", (int)INT_MIN, INT_MAX));
	printf("7 LEN %d\n", printf(" %p %p ", (int)INT_MIN, INT_MAX));
	printf("8 LEN %d\n", ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX + 1));//type long (doit etre void *)
	printf("8 LEN %d\n", printf(" %p %p ", ULONG_MAX, -ULONG_MAX + 1));//type long (doit etre void *)
	printf("9 LEN %d\n", ft_printf(" %p %p ", 0, 0));//type int (doit etre void *)
	printf("9 LEN %d\n", printf(" %p %p ", 0, 0));//type int (doit etre void *)


    
    return (0);
}