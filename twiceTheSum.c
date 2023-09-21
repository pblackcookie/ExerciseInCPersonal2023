#include<stdio.h>

int main(void)
{
    int a,b,c;
    int tw_sum_of_int, final_res;
    printf("Input the three integers: ");
    scanf("%i %i %i",&a,&b,&c);
    tw_sum_of_int = 2*(a+b+c);
    final_res = c + tw_sum_of_int;
    printf("\nTwice the sum of integers plus %i is %i!\n",c,final_res);
    return 0;
}
