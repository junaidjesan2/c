#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int num=n/1000;
    if(num%2==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}