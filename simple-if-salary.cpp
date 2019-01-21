#include <iostream>

using namespace std;

int main()
{
  int salary,bonus;

  cout << "Enter your salary" << endl;

  cin >> salary;

  if(salary >= 10000)
  {
      bonus = salary * 10 / 100;

      cout << "bonus is :" << bonus << endl;

      salary = salary + bonus;
  }
     cout <<"salary is : " << salary << endl;




return 0;
}