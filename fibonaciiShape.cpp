#include<bits/stdc++.h>
using namespace std;
/*
1
1 1
1 1 2
1 1 2 3
1 1 2 3 5
*/

int main()
{
    int n,i,j,c,a,b;
    cout<<"Enter the range of fibonacii Series ";
    cin>>n;
    for(i=1;i<=n;i++){
        a = 0;
        b = 1;
        cout<<b<<" ";
        for(j=1;j<i;j++){
            c=a+b;
            cout<<c<<" ";
            a = b;
            b = c;
        }
        cout<<endl;
    }
    return 0;
}