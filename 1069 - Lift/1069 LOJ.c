#include<stdio.h>
int main()
{
    int t, i, a, b;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &a, &b);

        if(a==b) (printf("Case %d: %d\n", i, 5+3+3+3+5+a*4));

        else printf("Case %d: %d\n", i, 19+abs(a-b)*4+a*4);
    }
}
