#include<stdio.h>
int main(){
    //only contains £20
    int money;
    while(1){
        printf("How much money would you like?  ");
        scanf("%i",&money);
        if(money<=0){
            printf("\nError!Can't not to be a negative number!\n");
            return -1;
        }else{
            if(money%20 != 0&&money>20){
                printf("I can give you %i or %i,try again.\n",money/20*20,(money/20+1)*20);
                
            }else{
                if(money<20){
                    printf("Sorry,no small enough money in this machine.\n");
                    return -2;
                }else{
                    printf("OK,dispensing ...\n");
                    return 0;
                    }
                
            }
        }
    }
}