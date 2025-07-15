#include<stdio.h>
int main(){
    int val=0;
    for(int i=1;i<10;i++){

        printf("enter number ");
        scanf("%d",&val);

        if(val>0){
            printf("%d",val);
        }

    } 

    return 0;
}