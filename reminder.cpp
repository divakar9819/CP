//WAP to find last digit of a given number
#include<bits/stdc++.h>
using namespace std;

void lastDigit(int num)
{
    int last_digit;
    last_digit = num%10;
    cout<<"The last digit of a given number is :"<<last_digit<<endl;
}
int main()
{
  int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    lastDigit(n);
    return 0;
}