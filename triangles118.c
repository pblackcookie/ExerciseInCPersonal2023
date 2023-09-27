#include<stdio.h>

int main(){
	float a,b,c;
    printf("Please enter 3 side lengths of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
	if(a<=0||b<=0||c<=0){
		printf("Sides can not be the negative or zero!\n");
		return -1;
	}
	if(a>0&&b>0&&c>0){
		if((a+b>c)&&(a+c>b)&&(b+c>a)){
			if(a==b&&b==c&&a==c){
				printf("This is an equailateral traingle.");
			}
			if((a==b||b==c||a==c)&&((a==b&&b==c&&a==c)==0)){
				printf("This is an isosceles traingle.");
			}
			if(a!=b&&b!=c&&a!=c&&(c*c==a*a+b*b)){
				printf("This is a right angle traingle.");
			}
			if(a!=b&&b!=c&&a!=c&&(c*c!=a*a+b*b)){
				printf("This is a normal traingle.");							
			}
		}else{
			printf("These three length can not be a triangle.");
			return -2;
		}
	}
	return 0;
}
