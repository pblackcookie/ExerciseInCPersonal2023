#include<stdio.h>
int main(void){
    int num,i;
    int tmp = 0;
    printf("How many numbers do you want to enter? ");
    scanf("%i",&num);
    int list[num];
    printf("\nEnter %i integer numbers:",num);
    for(i=0;i<num;i++){
	    scanf("%i",&list[i]);
	    if(tmp<list[i]&&list[i]%2!=0){
	        tmp =list[i];
	    }
    }
    printf("\nMaximum oddness value:%i.\nCaues I hate even integers,sorry.:(",tmp);
    return 0;
}