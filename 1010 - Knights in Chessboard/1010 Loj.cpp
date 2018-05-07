#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int r, c, ans, x;
        scanf("%d %d", &r, &c);

        if(r==1 || c==1)
            ans = r*c;

        else if(r==2 || c==2)
        {
            if(r==2) x = c;
            else     x = r;

            if(x%4 == 0) ans = x;
            else if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;

        }

        else ans = ceil((double)(r*c)/2);

        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
