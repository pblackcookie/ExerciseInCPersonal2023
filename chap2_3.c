#include<stdio.h>
#include<stdlib.h>
// approximate the pi

double approximatePi(int r);

int main(){
	int r;
	char term;
	printf("Please enter the length of the square(Positive Integer):");
	if(scanf("%i%c",&r,&term)!=2 || term !='\n'||r<=0){
		printf("Please enter an positive integer!");
		return -1;
	}
	printf("PI is approximate to the value : %lf.",approximatePi(r));
	return 0;
}

double approximatePi(int r){
	double cnt_square=0;
	double cnt_circle=0;
	float pos_x;
	float pos_y;
	double pi;
	for(int i=0;i<500;i++){
		pos_x = rand() % r;
		pos_y = rand() % r;
		if(pos_x*pos_x +pos_y*pos_y < r*r){
			cnt_circle++;		
		}
		cnt_square++;
	}
	pi = 4*cnt_circle/cnt_square;
	return pi;
}

