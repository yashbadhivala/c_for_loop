#include<stdio.h>

int main(){

    int val=0;
    int digit=0;

    printf("enter number :");
    scanf("%d",&val);

    int first=0,s_last=0;
    s_last=(val/10)%10;

    while(val>0){
        first=val%10;
       
        val=val/10;
    }

    printf("first digit is : %d\n",first);
    printf("second last digit is : %d\n",s_last);
    printf("sum of first and second last digit is : %d",first+s_last);

    return 0;
}