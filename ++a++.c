#include<stdio.h>
int main(void)
{
    int a,b=0;
    int c=0;
    a = ++b + ++c;
    printf("%i %i %i\n",a,b,c);
    // i think is 2 1 1
    a = b++ + c++;
    printf("%i %i %i\n",a,b,c);
    // 2 2 2
    a = ++b +c++;
    //5 3 3 (5=2+3)
    printf("%i %i %i\n",a,b,c);
    a = b-- + --c;
    //5? 3+2  5 3 2 no it should be 5 2 2
    printf("%i %i %i\n",a,b,c);
    return 0;
}
