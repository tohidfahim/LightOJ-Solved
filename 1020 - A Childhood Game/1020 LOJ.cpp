#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i=1; i<=t; i++)
    {
        int n;
        string s;
        cin >> n >> s;

        n = n%3;

        if (s=="Alice" && (n==0 || n==2)) printf("Case %d: Alice\n", i);
        else if (s=="Alice" && n==1)printf("Case %d: Bob\n", i);
        if(s=="Bob" && (n==1 || n==2)) printf ("Case %d: Bob\n", i);
        else if (s=="Bob" && n==0) printf ("Case %d: Alice\n", i);
    }
}
