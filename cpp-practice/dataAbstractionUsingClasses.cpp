#include <iostream>
using namespace std;

class Sum {
    private :
    int x,y,z;

    public:
    void add(){
        cout<<"enter two numbers"<<endl;
        cin>>x>>y;
        z=x+y;
        cout<<"sum of two no is "<<z<<endl;
    }
};
int main(){
    Sum sm;
    sm.add();
    return 0;
}