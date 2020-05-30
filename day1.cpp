#include<bits/stdc++.h>
using namespace std;

//fined largest number amoung three number
/*
void largestNumber(int n1 ,int n2,int n3)
{
  if(n1>n2){
      if(n1>n3){
          cout<<"The largest number is "<<n1;
      }
      else {
          cout<<"The largest number is "<<n3;
      }
  }
      else{
          if(n2>n3){
              cout<<"The largest number is "<<n2;
          }
          else{
              cout<<"The largest number is "<<n3;
          }
      }
  }  
*/
// find largest and smalest number in the given array
/*
void largestNumber(int *arr , int n)
{
    sort(arr , arr+n);
    cout<<"The smalest number is "<<arr[0]<<"\n";
    cout<<"The largest number is "<<arr[n-1]<<"\n";
}
*/

/*
void quardicEquestion(int a,int b, int c)
{
    float d,x1,x2,t1,t2;
    d = b*b - 4*a*c;
    if(d>0){
        cout<<"Distinct root "<<endl;
        x1 = (-b + sqrt(d))/2*a;
        x2 = (-b - sqrt(d))/2*a;
        cout<<"first root "<<x1<<" and second root "<<x2;

    }
    else if (d==0){
        cout<<"Equal root"<<endl;
        x1 = x2 = -b/2*a;
        cout<<"Both root are "<<x1<<endl;
    }
    else {
        cout<<"Imaginary root"<<endl;
        t1 = (-b/(2*a)) ;
        t2 = (sqrt(abs(d))/(2*a));
        //x2 = (-b/2*a) - (sqrt(d)/2*a);
        cout<<"First root : "<<t1<<" + "<<t2<<"i"<<"  Second root :"<<t1<<" - "<<t2<<"i";
    }
    
    
}
*/

// Leap year

void leapYear(int year)
{
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"Leap year"<<endl;
            }
            else{
                cout<<"Not Leap Year"<<endl;
            }
            
        }
        else{
                cout<<"Leap Year"<<endl;
            }
    }
    else{
        cout<<"Not Leap Year"<<endl;
    }
}

int main()
{
    //int n1=5, n2=20,n3=6;
    //int arr[] = {3,1,5,9,19};
    //int n = sizeof(arr)/sizeof(arr[0]);
    //largestNumber(arr,n);
    /*
    int a , b,c;
    cout<<"Enter coeficiet of quardratic equation"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    
    quardicEquestion(a,b,c);
    */
    int year;
    cout<<"Enter year ";
    cin>>year;
    leapYear(year);
    return 0;
    
}



