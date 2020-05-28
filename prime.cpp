//WAP to find that a given number is prime or not
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int num , temp =0,i;
     cout<<"Enter the number"<<endl;
     cin>>num;
     for(i=2;i<sqrt(num);i++){
         if(num % i==0)
             temp = 1;
             break;
     }
     if(temp==1)
         cout<<"Number is not Prime"<<endl;
     else
         cout<<"Number is Prime"<<endl;
     
     return 0;
 }