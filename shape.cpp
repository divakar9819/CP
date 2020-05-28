#include<bits/stdc++.h>
using namespace std;

// print rectangle
/*
void printRectangle(int r,int c)
{
    int i , j;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

//print tringle
/*
void printTringle(int r , int c)
{
    int i,j,s=1;
    for(i=0;i<r;i++){
        for(j=0;j<=i;j++){
            //cout<<"*";
            //cout<<i+1;
            cout<<s<<" ";
            s++;
            
        }
        cout<<endl;
    }
}
*/

//piramid shape

void printPiramid(int r , int c)
{
    int i,j,k,s=1;
    for(i=1;i<=r;i++){
        for(j=1;j<=c-i;j++){
            //cout<<"*";
            //cout<<i+1;
            cout<<" ";
            
            
        }
        for(k=1;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}



//box shape
/*
void box(int r , int col)
{
    int a,b,c,d,e,f;
    for(a=1;a<=col;a++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    for(b=1;b<r-1;b++){
        for(c=1;c<=1;c++){
            cout<<"*"<<" ";
        }
        
        for(d = 1;d<=col-2;d++){
            cout<<" "<<" ";
        }
        for(e = 1;e<=1;e++){
            cout<<"*";
        }
        cout<<endl;
        
        
    }
    for(f=1;f<=col;f++){
            cout<<"*"<<" ";
            
        }
}
*/


int main()
{
    int r =12 , c=12;
    //cout<<"Enter row ";
    //cin>>r;
    //cout<<"Enter column";
    //cin>>c;
    //printRectangle(r,c);
    printPiramid(r,c);
    //box(r,c);
    return 0;
    
}

