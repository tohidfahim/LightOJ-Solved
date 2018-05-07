#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for(int i =1; i<=t; i++)
    {
        int n,arr[15], c=0;
        scanf("%d", &n);
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[0]>2 && j==0) {c = c + (arr[j]-2)/5 ;
                                 if((arr[j]-2)%5==4) c++;
                                 else if ((arr[j]-2)%5==3) c++;
                                 else if ((arr[j]-2)%5==2) c++;
                                 else if ((arr[j]-2)%5==1) c++;}

            if(arr[j]>arr[j-1]) {c = c + (arr[j]-arr[j-1])/5 ;
                               if((arr[j]-arr[j-1])%5==4) c++;
                               else if ((arr[j]-arr[j-1])%5==3) c++;
                               else if ((arr[j]-arr[j-1])%5==2) c++;
                               else if ((arr[j]-arr[j-1])%5==1) c++;}
        }
        printf("Case %d: %d\n", i, c);
    }
    return 0;
}
