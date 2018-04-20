// This program demonstrates a destructor.
#include <iostream>
using namespace std;

class Demo
{
public:
  Demo();       // Constructor
  ~Demo();      // Destructor
};

Demo::Demo()
{
  cout << "Welcome to the constructor!\n";
}
Demo::~Demo()
{
  cout << "The destructor os now running.\n";
}

int main()
{
  Demo demoObject;      // Define a demo object
  cout << "This program demonstrates an pbject with a constructor and destructor.\n";
  return 0;
}
