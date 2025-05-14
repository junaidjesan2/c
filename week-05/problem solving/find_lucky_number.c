#include <stdio.h>

int print_single_number(int t)
{
    int res = 0;
    if (t < 10)
    {
        if (t == 4 && t == 7)
        {
            res += 1;
        }
    }
    else
    {
        print_single_number(t / 10);
        if (t % 10 == 4 && t % 10 == 7)
        {
            res += 1;
        }
    }
    return res;
}
int main()
{
    int t;
    scanf("%d", &t);
    int res = print_single_number(t);
    if (res == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}