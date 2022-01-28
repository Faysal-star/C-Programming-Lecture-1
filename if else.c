#include<stdio.h>
int main(){
    int a , b , max , min ;
    scanf("%d %d", &a , &b);

    // MAX

    if(a > b){
        max = a ;
    }
    else{
        max = b ;
    }

    if(a < b){
        min = a ;
    }
    else {
        min = b ;
    }

    printf("Max = %d Min = %d",max,min);

}
