#include <iostream>

using namespace std;

int main()
{   int a,b;
    cout<<"Enter the value of A and B :"<<endl;
    cin>>a>>b;

    if(a>b)
    {
       cout<<"A is greater than B"<<endl;
    }

    else if (b>a)
    {
        cout<<"B is greater than A"<<endl;
    }

      else 
      {
          cout<<"Both are same"<<endl;
      }
    return 0;
}