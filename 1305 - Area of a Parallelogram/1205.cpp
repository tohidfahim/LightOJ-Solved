#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    ///freopen("1205.txt", "r", stdin);
    int i, t;
    scanf("%d", &t);

    for(i=1; i<=t; i++){
    int a, b, c, d, e, f, p, q, r;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    p = e + (a-c);
    q = f + (b-d);
    r = .5 * ((a*d+c*f+e*q+p*b)-(b*c+d*e+f*p+q*a));
    r = abs(r);

    printf("Case %d: %d %d %d\n", i, p, q, r);
    }
    return 0;
}
