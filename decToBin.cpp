#include<bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    int arr[max],i,j,n;
    cout<<"Enter the decimal number"<<endl;
    cin>>n;
    for(i=0;n>0;i++){
        arr[i] = n%2;
        n = n/2;
    }
    cout<<"The Binary number is : ";
    for(i=i-1;i>=0;i--){
        cout<<arr[i]<<" ";

    }
    return 0;
}