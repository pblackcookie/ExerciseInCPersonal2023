#include<stdio.h>
#define C 20
int main(void){
    int n;
    int i;
    printf("Please enter a integer number:");
    if(scanf("%i",&n)==1){
        for(i=0;i<C;i++){
	    if(n%2==0){
	        n = n/2;
		printf("%i\n",n);
	    }else{
	        n = 3*n+1;
		printf("%i\n",n);
	    }
        }
    }else{
	printf("Enter error.");
        return -1;
    }
    return 0;
}
