// This program uses a pointer to display the contents of an integer array.
#include <iostream>
using namespace std;

int main()
{
  int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};
  int *nums = set;          // Make nums point to set

  // Display the numbers in the array.
  cout << "The numbers in set are:\n";
  cout << *nums << " ";     // Display first element

  while (nums < &set[7])
  {
    // Advance nums to point to the next element.
    nums++;
    // Display the vale point to by nums.
    cout << *nums << " ";
  }

  // Display the numbers in reverse order.
  cout << "\nThe numbers in set backwards are:\n";
  cout << *nums << " ";       // Display first element
  while (nums > set)
  {
    // Move backwards to the previous element.
    nums--;
    // Display the values pointed to by nums.
    cout << *nums << " ";
  }
  cout << endl;
  return 0;
}
