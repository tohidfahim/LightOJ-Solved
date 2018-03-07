#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int t, a[1000];
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        //printf("\n");
        int n;
        long long int sum = 0;
        scanf("%d", &n);

        for(int j=1; j<=n; j++)
        {
            scanf("%d", &a[i]);
            if(a[i]>=0) sum = sum + a[i];
        }
        printf("Case %d: %lld\n", i, sum);
    }
    return 0;
}
