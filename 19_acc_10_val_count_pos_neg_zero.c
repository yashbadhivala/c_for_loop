#include<stdio.h>

int main(){

    int val=0;
    int pos=0;
    int neg=0;
    int zero=0;

    for(int i=1;i<=10;i++){
        printf("enter number %d :",i);
        scanf("%d",&val);

        if(val==0){
            zero++;
        }
        else if(val>0){
            pos++;
        }
        else{
            neg++;
        }
    }
    printf("positive numbers are %d\n",pos);
    printf("negetive numbers are %d\n",neg);
    printf("zero numbers are %d\n",zero);
    return 0;
}
