#include<stdio.h>
int main(void){
    int num,i;
    float tmp = 0;
    printf("How many numbers do you want to enter? ");
    scanf("%i",&num);
    float list[num];
    printf("\nEnter %i real numbers:",num);
    for(i=0;i<num;i++){
	scanf("%f",&list[i]);
	if(tmp<list[i]){
	    tmp =list[i];
	}
    }
    printf("\nMaximum value:%.2f.\n",tmp);


}

