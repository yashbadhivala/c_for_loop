//1234 => 1 +2 = 3
#include<stdio.h>
int main(){

    int val=0;
    printf("enter value :");
    scanf("%d",&val);

    int f_d=0,s_d=0;
    s_d=(val/100)%10;

    while(val>0){
        f_d=val%10;
        val=val/10;
    }

    printf("first digit is %d\n",f_d);
    printf("second last digit is %d\n",s_d);
    printf("sum of first and second last digit is %d",f_d+s_d);

    return 0;
}
