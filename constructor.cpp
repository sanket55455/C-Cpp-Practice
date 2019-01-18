#include<iostream>

using namespace std;


class Bus
{
    public://access modifier

    Bus()//constructor.
    {
        cout<<"Government Public Transport"<<endl;
    }


    void driver()//other functions.
    {
        cout<<"Driving bus"<<endl;
    }

    void conductor()
    {
        cout<<"collecting Tickets"<<endl;
    }
~Bus;//destructor.
};


int main()
{
      Bus govt;//govt<- object
      govt.driver();
      govt.conductor();

      return 0;
}