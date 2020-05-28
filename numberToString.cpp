#include<bits/stdc++.h>
using namespace std;
/*
input : 234
output : two three four
*/

int main()
{
    int num,rem , sum =0;
    cout<<"Enter the number ";
    cin>>num;
    // first reverse the number
    while(num!=0){
        rem = num%10;
        sum = sum*10 + rem;
        num = num/10;
    }
    //first find remender then check case 
    while(sum!=0){
        rem = sum%10;
        switch(rem){
            case 1:
                cout<<"one ";
                break;
            case 2:
                cout<<"two ";
                break;
            case 3:
                cout<<"three ";
                break;
            case 4:
                cout<<"four ";
                break;
            case 5:
                cout<<"five ";
                break;
            case 6:
                cout<<"six ";
                break;
            case 7:
                cout<<"seven ";
                break;
            case 8:
                cout<<"eight ";
                break;
            case 9:
                cout<<"nine ";
                break;
            case 0:
                cout<<"zero ";
                break;
            default:
                cout<<"tttt";
                break;
        }
        sum = sum/10;
        
    }
    return 0;
}








