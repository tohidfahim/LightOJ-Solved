#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, a, x, y;
    scanf("%d", &t);

    while(t--) {
        scanf("%d", &a);
        if(a > 10) x=10;
        else x=a;
        y=a-x;

        cout << x <<" "<< y <<endl;
    }
    return 0;
}
