#include <stdio.h>

void print_single_number(int t)
{
    if (t < 10)
    {
        printf("%d", t);
    }
    else
    {
        print_single_number(t / 10);
        printf(" %d", t % 10);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int t;
        scanf("%d", &t);
        print_single_number(t);
        printf("\n");
    }

    return 0;
}