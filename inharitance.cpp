#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
    
    protected:
    int width;
    int height;
};

class Rectangle : public Shape{
    public:
    int getArea(){
        return (width*height);
    }
};

int main()
{
    Rectangle Rect1;
    Rect1.setWidth(5);
    Rect1.setHeight(10);
    cout<<"Area of Rectangle "<<Rect1.getArea()<<endl;
    return 0;
}