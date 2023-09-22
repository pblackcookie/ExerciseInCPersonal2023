#include<stdio.h>

long Hailstone(long num);

int main(void){
    //long num;
    long i;
    int max_cnt=0;
    long max_num=0;
    for(i=1;i<=10000000;i++){
	if(Hailstone(i)>max_cnt){
	    max_cnt = Hailstone(i);
	    max_num=i;
	}
    }
    printf("Longest hasiltone sequence is: %i, and the number is: %ld.",max_cnt,max_num);
    return 0;
}
//wtite funtion to do the sequence of hailstone
long Hailstone(long num){
    int cnt = 0;
    do{
	if(num%2 == 0){
	    num = num/2;
        }else{
	    num = 3*num +1;
	}
	cnt++;
    }while(num!=1);
    return cnt;
}
