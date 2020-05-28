/*
 Write a program in C++ to check whether the primitive values crossing the limits or not. Go to the editor
Check whether the primitive values crossing the limits or not :
--------------------------------------------------------------------
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 12047235
Balance till : 995324987
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char G = 'F';
    bool t = true;
    int sons = 2 , year=2009 ,salary = 1500000 , drawn = 12047235 , balance = 995324987;
    float  height = 4.69 , GPA = 79.48;
    
    cout<<"The Gender is :"<<G<<endl;
    cout<<"Is she married?"<<t<<endl;
    cout<<"Number of son has :"<<sons<<endl;
    cout<<"Year of her appoinment:"<<year<<endl;
    cout<<"Salary for a year :"<<salary<<endl;
    return 0;

        
}