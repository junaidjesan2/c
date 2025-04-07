#include<stdio.h>

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a % 2 == 0 && b % 2 == 0){
        printf("Both are even\n");
    }
}