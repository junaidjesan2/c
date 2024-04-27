#include <stdio.h>

int main()
{  
    int N;
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    
    int div_by_two=0;
    int div_by_three=0;

    for (int i = 0; i <N ; i++)
    {
        if (A[i] % 2==0 && A[i] % 3==0)
        {
            div_by_two++;
        }
        else if (A[i]%3==0)
        {
            div_by_three++;
        }
        else if (A[i]%2==0)
        {
            div_by_two++;
        }
        
        
    }

    printf("%d ",div_by_two);
    printf("%d",div_by_three);
    
    
    return 0;
}