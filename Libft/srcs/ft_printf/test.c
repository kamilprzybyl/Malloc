#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>

int main()
{
	int     i;
    char    *test;

    i = 33;
    test = "I am test";





    printf("\n-------------------> p, P <-------------------\n\n");

	ft_printf("width 10:			[%10p]\n", &i);
	printf("width 10:			[%10p]\n", &i);
	ft_printf("minus width 10:	    	        [%-30p]\n", &i);
	printf("minus width 10:		        [%-30p]\n", &i);
	ft_printf("normal:				[%p]\n", &test);
	printf("normal:				[%p]\n", &test);
	ft_printf("width 25:		        [%25p]\n", &test);
	printf("width 25:		        [%25p]\n", &test);
	

    printf("\n-------------------> s, S <-------------------\n\n");


	printf("width 10:			[%10s]\n", "Hello");
	ft_printf("width 10:			[%10s]\n", "Hello");
	printf("minus width 10:		        [%-10s]\n", "Hello");
	ft_printf("minus width 10:		        [%-10s]\n", "Hello");
	printf("prec 1:			        [%.1s]\n", "Hello");
	ft_printf("prec 1:			        [%.1s]\n", "Hello");
	printf("width 10 prec 1:		[%10.1s]\n", "Hello");
	ft_printf("width 10 prec 1:		[%10.1s]\n", "Hello");
	printf("width 10 prec 6:		[%10.6s]\n", "Hello");
	ft_printf("width 10 prec 6:		[%10.6s]\n", "Hello");
	printf("prec 8:			        [%.8s]\n", "Hello");
	ft_printf("prec 8:			        [%.8s]\n", "Hello");
	printf("width 10 prec 20:		[%10.20s]\n", "Hello");
	ft_printf("width 10 prec 20:		[%10.20s]\n", "Hello");
	printf("width 5 prec 5:		        [%5.5s]\n", "Hello");
	ft_printf("width 5 prec 5:		        [%5.5s]\n", "Hello");
	printf("empty:				[%s]\n", "");
	ft_printf("empty:				[%s]\n", "");
	printf("prec 0:			        [%.0s]\n", "Hello");
	ft_printf("prec 0:			        [%.0s]\n", "Hello");    
	printf("minus width 10 prec 5:          [%-10.5s]\n", "Hello");
	ft_printf("minus width 10 prec 5:          [%-10.5s]\n", "Hello");    
	printf("minus width 10 prec 12:         [%-10.12s]\n", "Hello");
	ft_printf("minus width 10 prec 12:         [%-10.12s]\n", "Hello");
	printf("prec 3:			        [%.0s]\n", "Test");
	ft_printf("prec 3:			        [%.0s]\n", "Test");    
	// printf("l:                       [%ls]\n", "Test");
	// ft_printf("l:                       [%ls]\n", "Test");    
	printf("minus width 10 prec 12:         [%-10.12s]\n", "Test");
	ft_printf("minus width 10 prec 12:         [%-10.12s]\n", "Test");
	printf("prec 8:			        [%.8s]\n", "ye");
	ft_printf("prec 8:			        [%.8s]\n", "ye");
	printf("width 10 prec 20:		[%10.20s]\n", "ye");
	ft_printf("width 10 prec 20:		[%10.20s]\n", "ye");
	printf("width 5 prec 5:		        [%5.5s]\n", "ye");
	ft_printf("width 5 prec 5:		        [%5.5s]\n", "ye");
	printf("empty:				[%s]\n", "");
	ft_printf("empty:				[%s]\n", "");
	printf("prec 0:			        [%.0s]\n", "ye");
	ft_printf("prec 0:			        [%.0s]\n", "ye");    
	printf("minus width 10 prec 5:          [%-10.5s]\n", "ye");
	ft_printf("minus width 10 prec 5:          [%-10.5s]\n", "ye");    
	printf("minus width 10 prec 12:         [%-10.12s]\n", "ye");
	ft_printf("minus width 10 prec 12:         [%-10.12s]\n", "ye");
	// printf("null:				[%s]\n", NULL);
	// ft_printf("null:				[%s]\n", NULL);
	// printf("NULL:				[%S]\n", NULL);
	// ft_printf("NULL:				[%S]\n", NULL);
	

    printf("\n-------------------> c, C <-------------------\n\n");
	

    printf("width 10:			[%10c]\n", 'H');
	ft_printf("width 10:			[%10c]\n", 'H');
    printf("normal: 			[%c]\n", '2');
	ft_printf("normal:  			[%c]\n", '2');
	printf("minus and width 10:		[%-10c]\n", 'H');
	ft_printf("minus and width 10:		[%-10c]\n", 'H');
	printf("width 1:                        [%1c]\n", 'j');
	ft_printf("width 1:                        [%1c]\n", 'j');
	printf("width 20:	        	[%20c]\n", 'a');
	ft_printf("width 20:		        [%20c]\n", 'a');
	// printf("l:				[%lc]\n", 'H');
	// ft_printf("l:				[%lc]\n", 'H');
	// printf("C:				[%C]\n", 'A');
	// ft_printf("C:				[%C]\n", 'A');
	printf("width 3:			[%3c]\n", 0);
	ft_printf("width 3:			[%3c]\n", 0);
	

    printf("\n-------------------> d, D <-------------------\n\n");
	

	ft_printf("plus:				[%d]\n", 299999);
    printf("plus:				[%d]\n", 299999);
	ft_printf("plus minus width:		[%+-10d]\n", 299999);
    printf("plus minus width:		[%+-10d]\n", 299999);
	ft_printf("width 10:			[%10d]\n", -42);
	printf("width 10:			[%10d]\n", -42);
	ft_printf("zero:				[%0d]\n", 12);
	printf("zero:				[%0d]\n", 12);
	ft_printf("width 10:			[%10i]\n", 12);
	printf("width 10:			[%10i]\n", 12);
	ft_printf("minus width 10:  		[%-10i]\n", 12);
	printf("minus width 10: 		[%-10i]\n", 12);
	ft_printf("prec 1:  			[%.1i]\n", 12);
	printf("prec 1: 			[%.1i]\n", 12);
	ft_printf("width 10 prec 1:		[%10.1i]\n", 12);
	printf("width 10 prec 1:		[%10.1i]\n", 12);
	ft_printf("width 10 prec 6:		[%10.6i]\n", 55);
	printf("width 10 prec 6:		[%10.6i]\n", 55);
	ft_printf("- width 10 prec 6:		[%-10.6i]\n", 72);
	printf("- width 10 prec 6:		[%-10.6i]\n", 72);
	ft_printf("0 width 3 prec 2:		[%03.2d]\n", 2);
	printf("0 width 3 prec 2:		[%03.2d]\n", 2);
	ft_printf("prec 0:				[%.0d]\n", -1);
	printf("prec 0:				[%.0d]\n", -1);
	ft_printf("- width 5:			[%-5d]\n", -42);
	printf("- width 5:			[%-5d]\n", -42);
	ft_printf("plus:				[%+d]\n", 0);
	printf("plus:				[%+d]\n", 0);
	ft_printf("width 10:			[%10d]\n", 0);
	printf("width 10:			[%10d]\n", 0);
	ft_printf("prec 5:				[%.5d]\n", 0);
	printf("prec 5:				[%.5d]\n", 0);
	ft_printf("' ' prec 5:			[%.5d]\n", 4);
	printf("' ' prec 5:			[%.5d]\n", 4);
	ft_printf("' ' prec 5:			[%.5d]\n", 0);
	printf("' ' prec 5:			[%.5d]\n", 0);
	ft_printf("width 5 prec .:			[%5.d]\n", 100000);
	printf("width 5 prec .:			[%5.d]\n", 100000);
	ft_printf("42:				[%d]\n", 42);
	printf("42:				[%d]\n", 42);
	ft_printf("width 4 prec.:			[%4.d]\n", 5);
	printf("width 4 prec.:			[%4.d]\n", 5);
	ft_printf("width 3 prec 2:			[%3.2d]\n", 6634);
	printf("width 3 prec 2:			[%3.2d]\n", 6634);
	ft_printf("width 3 prec 2:			[%3.2d]\n", 6655534);
	printf("width 3 prec 2:			[%3.2d]\n", 6655534);
	ft_printf("0 width 3 prec 2:	        [%03.2d]\n", 1234);
	printf("0 width 3 prec 2:		[%03.2d]\n", 1234);
    ft_printf("h:				[%hd]\n", (short)6754);
	printf("h:				[%hd]\n", (short)6754);
	ft_printf("ll:				[%lld]\n", (long long)521232312213132312);
	printf("ll:				[%lld]\n", (long long)521232312213132312);
	ft_printf("l:				[%ld]\n", 121232312213132312);
	printf("l:				[%ld]\n", 121232312213132312);
	ft_printf("z:				[%zd]\n", 121232312213132312);
	printf("z:				[%zd]\n", 121232312213132312);
	ft_printf("j:				[%jd]\n", 121232312213132312);
	printf("j:				[%jd]\n", 121232312213132312);
    ft_printf("0 width 5:			[%05d]\n", 42);
	printf("0 width 5:			[%05d]\n", 42);
	ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
	printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
	// ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	// printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	// ft_printf("0+ width 5:			[%0+5d]\n", -1);
	// printf("0+ width 5:			[%0+5d]\n", -1);
	// ft_printf("++ width 10:			[%+++++++10d]\n", -42);
	// printf("++ width 10:			[%++++++10d]\n", -42);
	// ft_printf("0 width 4 prec 3:		[%04.3d]\n", -1);
	// printf("0 width 4 prec 3:		[%04.3d]\n", -1);
	ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
	printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
	// ft_printf("width 10 prec 5:		[%+10.5d]\n", -25);
	// printf("width 10 prec 5:		[%+10.5d]\n", -25);
	// ft_printf("0 width 3 prec 2 he:		[%03.2d]\n", -1);
	// printf("0 width 3 prec 2 he:		[%03.2d]\n", -1);
	// ft_printf("prec 10:			[%.10d]\n", -12);
	// printf("prec 10:			[%.10d]\n", -12);
	// ft_printf("+0 width 10:			[%+010d]\n", +42);
	// printf("+0 width 10:			[%+010d]\n", +42);
	// ft_printf("+0 width 4:			[%04d]\n", 42);
	// printf("+0 width 4:			[%04d]\n", 42);
    // printf("-+10.5:				[%-+10.5d]\n", -12);
	// ft_printf("-+10.5:				[%-+10.5d]\n", -12);
	// ft_printf("m: 0 width 3:			[%04d]\n", 1);
	// printf("t: 0 width 3:			[%04d]\n", 1);
    ft_printf("int:                            [%d]\n", 12);
    printf("int:                            [%d]\n", 12);
    ft_printf("oct:                            [%d]\n", 012);
    printf("oct:                            [%d]\n", 012);
    ft_printf("hex:                            [%d]\n", 0x12);
    printf("hex:                            [%d]\n", 0x12);
	

	printf("\n-------------------> o, O <-------------------\n\n");


	ft_printf("- width 10 prec 5:		[%-10.5o]\n", 25);
	printf("- width 10 prec 5:		[%-10.5o]\n", 25);
	ft_printf("- width 5 prec 10:		[%-5.10o]\n", 25);
	printf("- width 5 prec 10:		[%-5.10o]\n", 25);
	ft_printf("o:				[%o]\n", 1234);
	printf("o:				[%o]\n", 1234);
	ft_printf("o:				[%o]\n", 0);
	printf("o:				[%o]\n", 0);
	// ft_printf("# prec .:			[%#.o]\n", 0);
	// printf("# prec .:			[%#.o]\n", 0);
	// ft_printf("# prec 0:			[%#.0o]\n", 0);
	// printf("# prec 0:			[%#.0o]\n", 0);
	// ft_printf("prec .:				[%.o]\n", 0);
	// printf("prec .:				[%.o]\n", 0);
	// ft_printf("prec 0:				[%.0o]\n", 0);
	// printf("prec 0:				[%.0o]\n", 0);
	ft_printf("z:				[%zo]\n", (size_t)0);
	printf("z:				[%zo]\n", (size_t)0);
	// ft_printf("hh:				[%O]\n", 0);
	// printf("hh:				[%O]\n", 0);
	// ft_printf("hh:				[%O]\n", 65535);
	// printf("hh:				[%O]\n\n", 65535);
	ft_printf("#:                              [%#o]\n", 53);
    printf("#:                              [%#o]\n", 53);
	ft_printf("# width 10:                     [%#10o]\n", 53);
    printf("# width 10:                     [%#10o]\n", 53);
	// ft_printf("# width 10 prec 5:              [%#10.5o]\n", 53);
    // printf("# width 10 prec 5:              [%#10.5o]\n", 53);

		   
    printf("\n-------------------> u, U <-------------------\n\n");


	// ft_printf("hU:				[%hU]\n", (unsigned short)45345);
	// printf("hU:				[%hU]\n", (unsigned short)45345);
	// ft_printf("zu:				[%zu]\n", 18446744073709);
	// printf("zu:				[%zu]\n", 18446744073709);
	// ft_printf("zu:				[%zu]\n", 18446744073709);
	// printf("zu:				[%zu]\n", 18446744073709);
	ft_printf("normal:			        [%u]\n", 0);
	printf("normal:			        [%u]\n", 0);
	ft_printf("literal:			[%u]\n", 'X');
	printf("literal:			[%u]\n", 'X');
	ft_printf("minus:			        [%-u]\n", 'Y');
	printf("minus:			        [%-u]\n", 'Y');
	ft_printf("width 10:		        [%10u]\n", 'X');
	printf("width 10:		        [%10u]\n", 'X');
	ft_printf("width 10 prec 5:	        [%10.5u]\n", 'X');
	printf("width 10 prec 5:	        [%10.5u]\n", 'X');
	ft_printf("minus width 10:		        [%-10u]\n", 'X');
	printf("minus width 10:		        [%-10u]\n", 'X');
	ft_printf("minus width 10 prec 5:          [%-10.5u]\n", 'X');
	printf("minus width 10 prec 5:          [%-10.5u]\n", 'X');
	// ft_printf("lu:				[%lu]\n", (unsigned long)-42);
	// printf("lu:				[%lu]\n", (unsigned long)-42);
	// ft_printf("zu:				[%zu]\n", (unsigned long)-125);
	// printf("zu:				[%zu]\n", (unsigned long)-125);
	// ft_printf("zu:				[%zu]\n", 44073709551491);
	// printf("zu:				[%zu]\n", 44073709551491);
	// ft_printf("U:				[%U]\n", (unsigned int)184467440737095);
	// printf("U:				[%U]\n", (unsigned int)184467440737095);

	
    printf("\n-------------------> x, X <-------------------\n\n");


	printf("normal:			        [%x]\n", 1244);
	ft_printf("normal:			        [%x]\n", 1244);
	printf("zero:				[%0x]\n", 1244);
	ft_printf("zero:				[%0x]\n", 1244);
	printf("width 10:			[%10x]\n", 1244);
	ft_printf("width 10:			[%10x]\n", 1244);
	printf("minus width 10:		        [%-10x]\n", 555);
	ft_printf("minus width 10:  		[%-10x]\n", 555);
	// printf("hash:				[%#x]\n", 0);
	// ft_printf("hash:				[%#x]\n", 0);
	printf("prec 1:			        [%.1x]\n", 1244);
	ft_printf("prec 1:	    		        [%.1x]\n", 1244);
	printf("width 10 prec 6:		[%010.6x]\n", 3425675);
	ft_printf("width 10 prec 6:		[%010.6x]\n", 3425675);
	printf("# width 10 prec 6:		[%#010.6x]\n", 1244);
	ft_printf("# width 10 prec 6:		[%#010.6x]\n", 1244);
	printf("minus width 10 prec 6: 	        [%-10.6x]\n", 1244);
	ft_printf("minus width 10 prec 6:	        [%-10.6x]\n", 1244);
	printf("hhx:				[%hhx]\n", (unsigned char)12);
	ft_printf("hhx:				[%hhx]\n", (unsigned char)12);
	printf("hx:				[%hx]\n", (short)1244);
	ft_printf("hx:				[%hx]\n", (short)1244);
	printf("llx:				[%llx]\n", (long long int)12444455667788999);
	ft_printf("llx:				[%llx]\n", (long long int)12444455667788999);
	printf("lx:				[%lx]\n", (long)12444455667788999);
	ft_printf("lx:				[%lx]\n", (long)12444455667788999);
	printf("zx:				[%zx]\n", (size_t)1244);
	ft_printf("zx:				[%zx]\n", (size_t)1244);
	printf("jx:				[%jx]\n", (uintmax_t)3294967296);
	ft_printf("jx:				[%jx]\n", (uintmax_t)3294967296);
	printf("prec .:				[%.x]\n", 0);
	ft_printf("prec .:				[%.x]\n", 0);
	printf("lx:				[%lx]\n", 4294967296);
	ft_printf("lx:				[%lx]\n", 4294967296);
	// printf("x:				[%x]\n", 0);
	// ft_printf("x:				[%x]\n", 0);
	// printf("X:				[%X]\n", 0);
	// ft_printf("X:				[%X]\n", 0);
	printf("x:				[%llx]\n", (unsigned long long)4294967296);
	ft_printf("x:				[%llx]\n", (unsigned long long)4294967296);
	// printf("X:				[%X]\n", (unsigned int)4294967296);
	// ft_printf("X:				[%X]\n", (unsigned int)4294967296);
	// printf("#x:				[%#x]\n", 0);
	// ft_printf("#x:				[%#x]\n", 0);
	// printf("#0 width 8:			[%#08x]\n", 42);
	// ft_printf("#0 width 8:			[%#08x]\n", 42);
	// printf("# prec .:			[%#.x]\n", 0);
	// ft_printf("# prec .:			[%#.x]\n", 0);
	printf("width 5 prec .:			[%5.x]\n", 0);
	ft_printf("width 5 prec .:			[%5.x]\n", 0);
	printf("width 5 prec 0:			[%5.0x]\n", 0);
	ft_printf("width 5 prec 0:			[%5.0x]\n", 0);
	printf("j:				[%ju]\n", (uintmax_t)1844);
	ft_printf("j:				[%ju]\n", (uintmax_t)1844);
    ft_printf("#:                              [%#X]\n", 53);
    printf("#:                              [%#X]\n", 53);
	ft_printf("# width 10:                     [%#10X]\n", 53);
    printf("# width 10:                     [%#10X]\n", 53);
	ft_printf("# width 10 prec 5:              [%#10.5X]\n", 53);
    printf("# width 10 prec 5:              [%#10.5X]\n\n", 53);
	
    return (0);
}