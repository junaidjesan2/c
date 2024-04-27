#include <stdio.h>

int main()
{  
    int T;
    scanf("%d",&T);

    for (int i = 1; i <= T; i++)
    {
        int M1, D, M2;
        scanf("%d",&M1);
        scanf("%d",&M2);
        scanf("%d",&D);

        if (M1>=0 && M2>=0 && D>=0)
        {
            int da=D*M1;
            int add= M1+M2;
            int day = da/add ;
            int days_need=D-day;
            printf("%d\n",days_need);
        }
        
    }
    
    return 0;
}