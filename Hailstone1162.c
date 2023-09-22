
#include<stdio.h>
// show the largest number(display in sequence)
long Hailstone(long num);

int main(void){
    //long num;
    long i;
    //int max_cnt=0;
    long largest_num=0;
    for(i=1;i<=10000000;i++){
        if(Hailstone(i)>largest_num){
            largest_num = Hailstone(i);
        }
    }
    printf("The largest number is: %ld.",largest_num);
    return 0;
}
//wtite funtion to do the sequence of hailstone
long Hailstone(long num){
    int max_num = 0;
    do{
       	if(num%2 == 0){
            num = num/2;
	    if(num>max_num){
		max_num=num;
	    }
        }else{
            num = 3*num +1;
            if(num>max_num){ 
                max_num=num;
            }
        }
    }while(num!=1);
    return max_num;
}


