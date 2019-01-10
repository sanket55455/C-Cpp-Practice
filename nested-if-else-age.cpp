#include <iostream>
 
 using namespace std;

 int main()
 {   int age;
    cout<<"Enter your age :" << endl;
    cin>> age;

   if (age>10 && age<50)
   {
       if(age>10 &&  age<=18)
       {
       cout<<"you are teenager";
       }

       else
       {
           cout<<"you are not teenager";
       }
   }
   else 
   {
       if(age<10)
       {
           cout<<"you are children";
       }
       else
       {
           cout<<"you are old";
       }
   }

return 0;

 }