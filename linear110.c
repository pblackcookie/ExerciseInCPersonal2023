#include<stdio.h>
int A = 7;
int C = 5;
int M = 11;
int LOOPS = 6;
int main(){
    int i;
    int seed = 0;
    for(i=0;i<LOOPS;i++){
        seed = ( A * seed + C ) % M;
        printf("%i\n",seed);
    }
    return 0; 
}