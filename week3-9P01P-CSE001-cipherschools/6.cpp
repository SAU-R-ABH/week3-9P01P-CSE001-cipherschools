#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){

    struct Rectangle r1 = {200,3006};
    

    cout<<" Area = "<<r1.length*r1.breadth<<endl;


    
    return 0;
}