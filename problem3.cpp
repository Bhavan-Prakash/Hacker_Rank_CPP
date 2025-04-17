#include<iostream>

using namespace std;

class Box{
    private: int l,b,h;

    public: Box(){
        l = 0;
        b = 0;
        h = 0;
    }

    public: Box(int length, int breadth, int height){
        l = length;
        b = breadth;
        h = height;
    }

    public: int getLength(){
        cout<<l<<"\n";
        return 0;
    }

    public: int getBreadth(){
        cout<<b<<"\n";
        return 0;

    }

    public: int getheight(){
        cout<<h<<"\n";
        return 0;

    }

    public: int CalculateVolume(){
        int v = l*b*h;
        cout<<v<<"\n";
        return 0;

    }
};

int main(){
    Box b1;
    Box b2(2, 3, 4);
    b2.getLength();
    b2.getBreadth();
    b2.getheight();
    b2.CalculateVolume();

}