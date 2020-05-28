#include<bits/stdc++.h>
using namespace std;

// Swap two number using third variable
void swap_third(int a , int b)
{
    int c;
    c = a+b;
    a = b;
    b = c-a;
    cout<<"after swap of the value of a and b is "<<a<<" "<<b<<endl;
}
 void swap(int a , int b)
 {
     a = a+b;
     b = a-b;
     a = a-b;
     cout<<"After swap the value of a and b is :"<<a<<" "<<b<<endl;
 }
int main()
{
    int a , b;
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second number "<<endl;
    cin>>b;
    
    
    cout<<"The value of a and b is :"<<a<<" "<<b<<endl;
    swap_third(a,b);
    swap(a,b);
    return 0;
}