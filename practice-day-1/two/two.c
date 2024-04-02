#include <stdio.h>

int main()
{int inputOne,inputTwo;
    scanf("%d %d",&inputOne,&inputTwo);

     float sum = (float)inputOne/inputTwo;


    printf("x + y = %d\n",inputOne+inputTwo);
    printf("x + y = %d\n",inputOne-inputTwo);
    printf("x + y = %d\n",inputOne*inputTwo);
    printf("x + y = %.2f\n", sum);
     return 0;
}