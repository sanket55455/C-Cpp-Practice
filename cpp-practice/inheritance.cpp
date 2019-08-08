#include<iostream>

using namespace std;

class Farm
{
    public://access modifier.

     Farm()//constructor.
    {
        cout<<"collection of food"<<endl;
     }

     void vegitable()//function.
     {
         cout<<"There is a potato"<<endl;
    }
};


class Farmer : public Farm
{
      public:

    Farmer()
    {
        cout<<"food maker"<<endl;
    }

    void tractor()
    {
        cout<<"tractor is using for farming"<<endl;
    }
};

class PetAnimal : public Farmer
{
    public:

    PetAnimal()
    {
        cout<<"cows are pet animal"<<endl;
    }

    void dog()
    {
        cout<<"The dog is pet animal"<<endl;
    }

};

int main()  //main function.
{

   PetAnimal dog;  //object.
   dog.tractor();//function call.



    return 0;
}
