#include "libft.h"

int main()
{
	int i = 0;

        char **test;
        test = ft_split("222hello22tu222va2bien?2", '2');
        printf("hello ? %s\n", *(test));
        printf("tu ? %s\n", *(test + 1));
        printf("va ? %s\n", *(test + 2));
        printf("bien ? %s\n", *(test + 3));
        printf("bien? ? %li \n", 0x7f9f5c55cbf6 );


        while (test[i])
              free(test[i++]);
//    free(test[1]);
//    free(test[2]);

    /*    char test2;
        test2 = ft_split("abc", 'c');
        printf("abc ? %s\n", *test2);
    free(test2);
        char test3;
        test3 = ft_split("abababababa", 'a');
    free(test3);
        printf("0x0 ? %p\n", test3);
        char test4;
        test4 = ft_split("invalid pp token", ' ');
    free(test4);
        printf("0x0 ? %p\n", test4);
        char **test5;
        test5 = ft_split("ZkGzIhTFLzWQQPOuLj2CMHw3oLIP4dpH7US2LeR9j593n2", 'L');
        printf("ZkG ? %s\n", *(test5));
        printf("IhTF ? %s\n", *(test5 + 1));
        printf("W ? %s\n", *(test5 + 2));
        printf("PO ? %s\n", *(test5 + 3));
        printf("j2CMHw3oIP4dpH7US2eR9j593n2 ? %s\n", *(test5 + 4));
        printf("(null) ? %s\n", *(test5 + 5));


    free(test5); */

    return (0);


}
