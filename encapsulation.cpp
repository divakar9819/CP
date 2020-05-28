#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void setSalary(int x){
        salary = x;
    }
    
    int getSalary(){
        return salary;
    }
};

int main()
{
    Employee emp1;
    emp1.setSalary(2300);
    cout<<emp1.getSalary()<<endl;
    return 0;
}