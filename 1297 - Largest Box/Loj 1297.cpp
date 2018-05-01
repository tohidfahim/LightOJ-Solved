#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    freopen("1297.txt", "r", stdin);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        double a, b, c, x;
        cin >> a >> b;
        double p = 12.0;     /// max pele c = (a-2*x) * (x) * (b-2*x) diff korte hoy and = 0, ax2+bx+c or px2+qx+r equation theke x
        ///http://mathcentral.uregina.ca/QQ/database/QQ.02.06/elizabeth1.html
        double q = - 4.0 * (a+b);
        double r = (a*b);

        x = (- q - sqrt(q*q - 4.0*p*r))/(2.0*p);
        c = (a-2*x) * (x) * (b-2*x);

        printf("Case %d: %lf\n", i, c);
    }
}
