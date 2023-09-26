#include<stdio.h>

void prime(int n);

int main(void){
    int n;
    printf("Please enter the number that you want to count which is prime:");
    scanf("%i",&n);
    prime(n);
    return 0;
}

void prime(int cnt){
    int n=0;
    int i;
    int prime_cnt=0;
    while(prime_cnt<cnt){
        n++;
	if(n==2){
	    printf("%i\n",n);
	    prime_cnt++;
	}
	if(n>2){
	    for(i=2;i<n;i++){
		if(n%i==0){
		    break;
		}
		if(i == n-1){
		    printf("%i\n",n);
		    prime_cnt++;
		}
	    }
	}
    }
}
