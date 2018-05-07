#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
        int t, i, j;
        cin >> t;

        for(i = 1; i<=t ; i++)
        {
                int n, flag = 0, ct=0;
                cin >> n;

                for(j = 5; ; j+=5)
                {
                       int p=j;
                        while(p>0)
                        {
                               p=p/5;
                               ct++;
                        }
                        ct--;
                        if(ct>n) break;
                        else if(ct==n) {flag =1; break;}
                }

                if(flag == 1) printf("Case %d: %d\n", i, j);
                else printf("Case %d: impossible\n", i);
        }
        return 0;
}
