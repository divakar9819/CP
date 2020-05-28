// WAP to print n prime number
#include<bits/stdc++.h>

#define maxsize 1000
using namespace std;
int main()
{
    int arr[maxsize];
    int i , num , j;
    cout<<"Enter the range you want to print the prime number "<<endl;
    cin>>num;
    for(i=0;i<num;i++){
        arr[i] = i ;
    }
    arr[1] = 0;
    for(i=2;i<=num;i++){
        arr[i]=1;
    }
    for(i=2;i<=sqrt(num);i++){
        if(arr[i]==1){
            for(j=i*i;j<=num;j=i+j){
                arr[j] = 0;
            }
        }
    }
    cout<<"The N Prime number is : ";
    for(i=2;i<=num;i++){
        if(arr[i]==1){
            cout<<i<<" ";
        }
    }
    return 0;
}