#include<bits/stdc++.h>
using namespace std;
/*
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x , string y , int z){
        brand = x;
        model = y;
        year = z;
    }
};
*/
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x,string y , int z);
    private:
    double price;
    //cout<<double<<endl;
    
};

Car :: Car(string x , string y , int z){
    brand = x;
    model = y;
    year = z;
    //double = p;
}
int main()
{
    Car carObj1("BMW","X7",1998);
    Car carObj2("Mercedese Bens","ty3",2010);
    cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
    cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<endl;
    //cout<<carObj1.price<<endl;
    
    return 0;
}