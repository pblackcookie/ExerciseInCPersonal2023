#include<stdio.h>
#include<stdlib.h>
int main(void){
    int random;
    int cnt = 0;
    int guess_num = 0;
    random = rand()%1001;
    do{
        printf("\nPlease enter a number you guess:");
        scanf("%i",&guess_num);
        if(guess_num>random){
            printf("\nGreater.");
            cnt++;
            printf("\ncnt:%d",cnt);
        }else{
            if(guess_num<random){
                printf("\nLess than the correct one.");
                cnt++;
                printf("\ncnt:%d",cnt);
            }else{
                printf("\nYou win!");
                return 0;
            }
        }
    }while(cnt < 10);
    if(cnt=10){
        printf("\nYou lose.");
    }
}