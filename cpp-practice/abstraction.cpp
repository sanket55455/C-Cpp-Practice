#include <iostream>
using namespace std;

class Abstraction {

private: int a , b;

public : 


void set(int x,int y){
    cin>>x>>y;
     a = x;
     b = y;
}

void display(){

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

}
};

int main(){
        Abstraction absObj;
        absObj.set(x,y);
        absObj.display();
return 0;


}