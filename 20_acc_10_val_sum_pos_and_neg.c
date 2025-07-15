#include<stdio.h>

int main(){

    int val=0;
    int pos=0;
    int neg=0;
    

    for(int i=1;i<=10;i++){
        printf("enter number %d :",i);
        scanf("%d",&val);

        if(val>0){
            pos=pos+val;
        }
        else if(val<0){

            neg=neg+val;
        }
        else{
            printf("invalid..");
        }
    }
    printf("sum of positive numbers is %d\n",pos);
    printf("sum of negetive numbers is %d\n",neg);
    
    return 0;
}
