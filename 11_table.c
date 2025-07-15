#include<stdio.h>
int main(){
    int val=0;

    printf("enter number : ");
    scanf("%d",&val);

    for(int i=1;i<10;i++){

        printf("%d * %d = %d\n",val,i,val*i);

    }


    return 0;
}