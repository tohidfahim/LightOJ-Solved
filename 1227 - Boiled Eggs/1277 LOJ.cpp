#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[30], k=0, t, n, p, q, i, j;
    cin >> t;

    for(j=1; j<=t; j++)
    {
        cin >> n >> p >> q;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(i=0; i<=n && i<=p; i++)
    {
        q=q-a[i];
        k++;
        if(q<0) break;
    }

    cout << "Case "<< j << ":" << " " << k-1 << endl;
    k=0;
    }
}
