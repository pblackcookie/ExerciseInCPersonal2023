#include<stdio.h>
//computes pi
#define CONSTANT 4

double formula(double n);

int main(){
	double pi = 0;
	pi = formula(CONSTANT);
	printf("The approximate what the pi is: %lf.",pi);
	return 0;
}

double formula(double n){
	double pi = 0;
	for(int i = 0; i < 10000000 ; i++){
		if(i%2==0){
			pi = pi + n/(1+2*i);
		}else{
			pi = pi -n/(1+2*i);
		}
	}
	return pi;
}
