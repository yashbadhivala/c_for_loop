#include<stdio.h>

int main(){

    int val=0;
    int odd=0;
    int even=0;

    for(int i=1;i<=10;i++){
        printf("enter number %d :",i);
        scanf("%d",&val);

        if(val%2==1){
            odd=odd+val;
        }
        else if(val%2==0){
            even=even+val;
        }
        else{
            printf("invalid..");
        }
    }
    printf("odd numbers are %d\n",odd);
    printf("even numbers are %d",even);

    return 0;
}
