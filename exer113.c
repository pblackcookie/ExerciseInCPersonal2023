#include<stdio.h>
#define C 200
int main(void){
    int i;
    int num=0;
    for(i=0;i<C;i++){
	num = i*(i+1)/2;
	printf("In this time, T is equal to %i, and sum is equal to %i\n",i,num);
    }
}
