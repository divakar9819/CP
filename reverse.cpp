//WAP to reverse the given number
#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int num){
    int rev = 0 , rem ,original = num;
    while(num!=0){
        rem = num % 10 ;
        rev = rev * 10 + rem;
        num = num/10;
    }
    cout<<"The original number is :"<<original<<endl;
    cout<<"The reverse number is :"<<rev<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    reverseNumber(n);
    return 0;
    
}

