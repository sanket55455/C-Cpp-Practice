#include<iostream>

using namespace std;


class Bus
{
    public://access modifier

    Bus()//constructor.
    {
        cout<<"Government Public Transport"<<endl;
    }


    int driver()//other functions.
    {
        cout<<"Driving bus"<<endl;
    }

    void conductor()
    {
        cout<<"collecting Tickets"<<endl;
    }
// ~Bus;//destructor.
};

class Car : public Bus {
public:
Car(){
    cout<<"car classs"<<endl;
}

};

int main()
{
      Car govt;//govt<- object
      govt.driver();
    //   govt.conductor();

      return 0;
}