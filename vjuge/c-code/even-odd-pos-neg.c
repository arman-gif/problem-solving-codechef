#include<stdio.h>
int main()
{
    int n;
    int x;
    int evn = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(x % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even: %d\n", evn);
    printf("Odd: %d\n", odd);

    return 0;
}


