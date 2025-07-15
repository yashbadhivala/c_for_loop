#include<stdio.h>
int main(){

    // 1234= 2 + 4 = 6
    
    int val=0;

    printf("enter number :");
    scanf("%d",&val);

    int last=0,s_last=0;
    last=val%10;
    val=val/10;

    while(val>10){

        s_last=val%10;
        val=val/10;

    }

    printf("second digit is %d\n",s_last);
    printf("last digit is %d\n",last);
    printf("sum of digit is %d",s_last+last);

    return 0;
}