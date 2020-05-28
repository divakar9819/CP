#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    int id;
    string name;
    
    void insert(int i , string n){
        id = i;
        name = n;
    }
    
    void Display(){
        cout<<id<<":-"<<name<<endl;
    }
    
};

int main()
{
    Student s1;
    Student s2;
    //s1.id = 101;
    //s1.name = "Divakar Verma";
    //cout<<s1.id<<" "<<s1.name<<endl;
    s1.insert(101,"Divakar Verma");
    s2.insert(102,"Nikhil");
    s1.Display();
    s2.Display();
    return 0;
}