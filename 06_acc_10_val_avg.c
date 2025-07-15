#include<stdio.h>

int main(){
    int val=0;
    int sum=0;
    int avg=0;

    for(int i=1;i<=10;i++){

        printf("enter number %d :-",i);
        scanf("%d",&val);

        sum=sum+val;
    }

    avg=sum/10;
    printf("%d",avg);

    return 0;
}