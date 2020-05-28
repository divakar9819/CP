//WAP to find GCD using recursion
#include<bits/stdc++.h>
using namespace std;
//Method - 1
/*
int gcd(int a , int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b , b);
    else
        return gcd(a , b-a);
        
}
*/
//Method -2
int gcd(int a , int b){
    if(a==0)
        return b;
    else if(b==0)
        return a;
    
    else
        return gcd(b,a % b);
}

int main()
{
    int a , b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;
    return 0;
    
}


// Method - 2
