// WAP to find that a given number is palindrome or not
#include<bits/stdc++.h>
using namespace std;
void palindrome(int num){
    int rem , rev = 0  , a = num ;
    while(num!=0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10 ;
    }
    if(a == rev){
        cout<<"The given number is palindrome"<<endl;
    }
    else {
        cout<<"The given number is not palindrome"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    palindrome(n);
    return 0;
}