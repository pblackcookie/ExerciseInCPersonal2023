#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i;
    float median = RAND_MAX/2;
    float minus_cnt=0;
    float plus_cnt=0;
    float tmp;
    float difference = 0;
    for(i=0;i<500;i++){
	tmp=rand();
	//printf("tmp:%f,median:%f.\n",tmp,median);
	if(tmp<median){
	   minus_cnt++;
	}
	else{
	    plus_cnt++;
	}
	//printf("minus_cnt:%f,plus_cnt:%f.\n",minus_cnt,plus_cnt);
	difference =plus_cnt-minus_cnt;
	printf("This is the %i times loop and the difference now is %f.\n",i+1,difference);
    }
}
