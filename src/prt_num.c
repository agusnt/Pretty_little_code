#include <stdio.h>

/*
* Print numbers from 0 to 9 without loops or ifs
*
* @Build: gcc prt_num.c -o prt_num
* @Exec: ./prt_num
*
* @Author: Navarro Torres, Agustin
* @Date: 19/01/2024
*/

#define MAX (10)

int main()
{
    void *label[2] = {&&lexit, &&lloop};
    int i = 0, jump = 0;

lloop:  
    printf("%d\n", i++);
    jump = MAX - i;
    jump && (jump = 1);
    goto *label[jump];
lexit:
    printf("Bye!\n");
}
