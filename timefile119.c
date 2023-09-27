#include<stdio.h>

int main(){
	int Hour1,Hour2;
	int Minute1,Minute2;
	int differ_hour,differ_min;
	printf("Enter two times(24-hour clock):");
	scanf("%d:%d %d:%d",&Hour1,&Minute1,&Hour2,&Minute2);
	if(Hour2<Hour1){
		differ_hour = Hour2 + 24- Hour1;
		if(Minute2>=Minute1){
			differ_min = Minute2 - Minute1;	
		}else{
			differ_min = Minute2 + 60 - Minute1;
			differ_hour -=1;
		}
	}else{
		differ_hour = Hour2 - Hour1;
		if(Minute2>=Minute1){
			differ_min = Minute2 - Minute1;	
		}else{
			differ_min = Minute2 + 60 - Minute1;
			differ_hour -=1;
		}
	}
	printf("Difference is : %d:%d",differ_hour,differ_min);
	return 0;
}
