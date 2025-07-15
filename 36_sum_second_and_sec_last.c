#include<stdio.h>
int main(){

    int val=0;
    printf("enter number :");
    scanf("%d",&val);

    int sec=0,sec_l=0;
    sec_l=(val/10)%10;

    while(val>10){
        sec=val%10;
        val=val/10;
    }

    printf("second digit is %d\n",sec);
    printf("second last digit is %d\n",sec_l);
    printf("sum of second second last digit is %d\n",sec+sec_l);


    return 0;
}