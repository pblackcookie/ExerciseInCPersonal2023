#include<stdio.h>
void primes(float cnt);

int main(){
	float total_cnt;
	printf("Now enter the number of total primes: ");
	scanf("%f",&total_cnt);
	primes(total_cnt);
	return 0;
}

void primes(float cnt){
	int n = 0;	
	int i;
	float prime_cnt=0;
	float end3_cnt=0;
	while(prime_cnt<cnt){
		n++;
		if(n==2){
			prime_cnt++;
		}
		if(n>2){
			for(i=2;i<n;i++){
				if(n%i==0){
					break;			
				}
				if(i == n-1){
					prime_cnt++;
					if(n%10==3){
						printf("%d \n",n);
						end3_cnt++;
					}
				}	
			}	
		}
	}
	printf("The number of end 3 prime is: %.0f and the number of total primes is: %.0f,so the compare is: %.3f %%.",end3_cnt,cnt,100*(end3_cnt/cnt));
}
