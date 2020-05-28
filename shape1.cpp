#include<bits/stdc++.h>
using namespace std;

/*
void piramid(int row , int col)
{
    int a,b,c,d,e,s=1;
    for(a=0;a<row;a++){
        for(b=1;b<=col-a;b++){
            cout<<" "<<" ";
        }
        for(c=1;c<=s;c++){
            //cout<<"*"<<" ";
            cout<<c<<" ";
        }
        cout<<endl;
        s+=2;
    }
}
*/
/*
      1
    2 3 4
  5 6 7 8 9    
*/
void piramid(int row , int col)
{
    int a,b,c,d,e,s=1,m=1;
    for(a=0;a<row;a++){
        for(b=1;b<=col-a;b++){
            cout<<" "<<" ";
        }
        for(c=1;c<=s;c++){
            //cout<<"*"<<" ";
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
        s+=2;
    }
}

/*

void piramid2d(int row , int col)
{
    int i,j,k,a,b,c,d,e,f,s=1,m=1;
    
    for(i=0;i<1;i++){
        for(j=1;j<=col-i;j++){
            cout<<"  ";
        }
        for(k=1;k<=1;k++){
            cout<<"*"<<" ";
            //cout<<k<<" ";
        }
        cout<<endl;
    }
    
    for(a=1;a<row;a++){
        for(b=1;b<=col-a;b++){
            cout<<" "<<" ";
        }
        for(c=1;c<=1;c++){
            cout<<"*"<<" ";
        }
        
        
           for(d=1;d<=s;d++){
                cout<<"  ";
            }
            for(e=1;e<=1;e++){
                cout<<"*"<<" ";
            }
        
        cout<<endl;
        s+=2;
        
    }
    for(f=1;f<=col*2+1;f++){
            cout<<"*"<<" ";
        }
}
*/

int main()
{
    int r=6 , c=6;
    cout<<"Note:- Row number and column number shuld be same"<<endl;
    piramid(r,c);
    return 0;
}