#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    freopen("1043.txt", "r", stdin);
    int t;
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        double a, b, c, s, r, ade, bced, abc, ad;
        cin >> a >> b >> c >> r;
        s = .5 * (a+b+c);
        abc = sqrt(s * (s-a) * (s-b) * (s-c));
        ade = (abc * r) / (1+r);

        ad = sqrt((a*a)*(ade/abc));

        printf("Case %d: %lf\n", i, ad);

    }
}
