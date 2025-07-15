#include<stdio.h>
int main(){
   
    int odd=0,even=0;

    for(int i=1;i<=20;i++){
        if(i%2==1){
            odd=odd+i;
        }
        else if(i%2==0){
            even=even+i;
        }
        else
        {
            printf("invalid");
        }
        
        

    }
    printf("sum of is odd %d",odd);
    printf("sum of is even %d",even);

    

    return 0;
}