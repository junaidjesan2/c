#include <stdio.h>

int main()
{
    int n;
    char A[n];
    scanf("%d", &n); // read size of string
    scanf("%s", A); // read string from input
    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum += A[i] - '0'; // convert char to int and add to sum
    }
    printf("%d", sum); // print sum of digits

    return 0;
}