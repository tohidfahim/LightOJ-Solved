#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, a[3], i;

    cin >> t;

    for(i=1; i<=t; i++)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if(a[2]*a[2] == a[0]*a[0]+a[1]*a[1]) printf("Case %d: yes\n", i);
        else printf("Case %d: no\n", i);
    }
}
