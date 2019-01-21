#include <iostream>

using namespace std;

int main()
{
   int no;

   cout<<"enter the no : " << endl;
   cin>> no;

   if((no%2)==0)
   {
       cout<<"This is even no." << endl;
   }
   else
   {
       cout<< "This is Odd no." << endl;
   }

   return 0;
}