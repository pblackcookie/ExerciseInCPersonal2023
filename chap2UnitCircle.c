#include<stdio.h>
#include<math.h>
// unit circle
int main(void){
	printf("Please enter one real number: ");
	double x;
	double output;
	scanf("%lf",&x);
	output = sin(x)*sin(x) + cos(x)*cos(x);
	printf("%lf",output);
}
