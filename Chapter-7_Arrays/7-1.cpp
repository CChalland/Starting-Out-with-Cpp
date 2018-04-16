// This program asks for the number of hours worked
// by six employees. It stores the value in an array.
#include <iostream>
using namespace std;
int main()
{
  const int NUM_EMPLOYEES = 6;
  int hours[NUM_EMPLOYEES];
  // Get the hours worked by each employee.
  cout << "Enter the hours worked by "
       << NUM_EMPLOYEES << " employees: ";
  cin >> hours[0];
  cin >> hours[1];
  cin >> hours[2];
  cin >> hours[3];
  cin >> hours[4];
  cin >> hours[5];
  // Display the values in the array.
  cout << "The hours you entered are:";
  for (int count = 0; count < NUM_EMPLOYEES; count++)
  {
    cout << " " << hours[count];
  }
  cout << endl;
  return 0;
}


// This program asks for the number of hours worked
// by six employees. It stores the value in an array.
#include <iostream>
using namespace std;
int main()
{
  const int NUM_EMPLOYEES = 6;      // Number of employees
  int hours[NUM_EMPLOYEES];         // Each employee's hours
  int count;                        // Loop counter
  // Input the hours worked.
  for (count = 0; count < NUM_EMPLOYEES; count++)
  {
    cout << "Enter the hours worked by employee "
         << (count + 1) << ": ";
    cin >> hours[count];
  }
  // Display the contents of the array.
  cout << "The hours you entered are: ";
  for (count = 0; count < NUM_EMPLOYEES; count++)
    cout << " " << hours[count];
  cout << endl;
  return 0;
}


// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  const int ARRAY_SIZE = 10;      // Array size
  int numbers[ARRAY_SIZE];        // Array with 10 elements
  int count = 0;                  // Loop counter variable
  ifstream inputFile;             // Input file stream object
  // Open the file.
  inputFile.open("TenNumbers.txt");
  // Read the number from the file into the array.
  while (count < ARRAY_SIZE && inputFile >> numbers[count])
    count++;
  // Close the file.
  inputFile.close();
  // Display the number read:
  cout << "The numbers are: ";
  for (count = 0; count < ARRAY_SIZE; count++)
    cout << numbers[count] << " ";
  cout << endl;
  return 0;
}


// This program writes the contents of an array to a file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  const int ARRAY_SIZE = 10;        // Array size
  int numbers[ARRAY_SIZE];          // Array with 10 elements
  int count;                        // Loop counter variable
  ofstream outputFile;              // Output file stream object
  // Store values in the array.
  for (count = 0; count < ARRAY_SIZE; count++)
    numbers[count] = count;
  // Open a file for output.
  outputFile.open("SavedNumbers.txt");
  // Write the array contents to the file.
  for (count = 0; count < ARRAY_SIZE; count++)
    outputFile << numbers[count] << endl;
  // Close the file.
  outputFile.close();
  // That's it!
  cout << "The numbers were saved to the file.\n";
  return 0;
}


// This program unsafely accesses an area of memory by writing
// values beyond an array's boundary.
// WARNING: If you compile and run this program, it could crash.
#include <iostream>
using namespace std;
int main()
{
  const int SIZE = 3;         // Constant for the array size
  int values[SIZE];           // An array of 3 integers
  int count;                  // Loop counter variable
  // Attempt to store five numbers in the three-element array.
  cout << "I will store 5 numbers in a 3-element array!\n";
  for (count = 0; count < 5; count++)
    values[count] = 100;
  // If the program is still running, display the numbers.
  cout << "If you see this message, it means the program:\n";
  for (count = 0; count < 5; count++)
    cout << values[count] << endl;
  return 0;
}


// This program displays the number of days in each month.
#include <iostream>
using namespace std;
int main()
{
  const int MONTHS = 12;
  int days[MONTHS] = { 31, 28, 31, 30,
                       31, 30, 31, 31,
                       30, 31, 30, 31};
  for (int count = 0; count < MONTHS; count++)
  {
    cout << "Month " << (count + 1) << " has ";
    cout << days[count] << " days.\n";
  }
  return 0;
}


// This program initializes a string array.
#include <iostream>
#include <string>
using namespace std;
int main()
{
  const int SIZE = 9;
  string planets[SIZE] = { "Mercury", "Venus", "Earth", "Mars",
                           "Jupiter", "Saturn", "Uranus",
                           "Neptune", "Pluto (a dwarf planet)" };
  cout << "Here are the planets:\n";
  for (int count = 0; count < SIZE; count++)
    cout << planets[count] << endl;
  return 0;
}


// This program uses an array of ten characters to store the
// first ten letters of the alphabet. The ASCII codes of the
// characters are displayed.
#include <iostream>
using namespace std;
int main()
{
  const int NUM_LETTERS = 10;
  char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E',
                               'F', 'G', 'H', 'I', 'J'};
  cout << "Character" << "\t" << "ASCII Code\n";
  cout << "---------" << "\t" << "----------\n";
  for (int count = 0; count < NUM_LETTERS; count++)
  {
    cout << letters[count] << "\t\t";
    cout << static_cast<int>(letters[count]) << endl;
  }
  return 0;
}


// This program has a partially initialized array.
#include <iostream>
using namespace std;
int main()
{
  const int SIZE = 7;
  int numbers[SIZE] = {1, 2, 4, 8};
  cout << "Here are the contents of the array:\n";
  for (int index = 0; index < SIZE; index++)
    cout << numbers[index] << " ";
  cout << endl;
  return 0;
}


// This program demonstrates the range-based for loop.
#include <iostream>
using namespace std;
int main()
{
  // Define an array of integers.
  int numbers[] = { 10, 20, 30, 40, 50 };
  // Display the value in the array.
  for (int val : numbers)
    cout << val << endl;
  return 0;
}


// This program demonstrates the range-based for loop.
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string planets[] = { "Mercury", "Venus", "Earth", "Mars",
                       "Jupiter", "Saturn", "Uranus",
                       "Neptune", "Pluto (a dwarf planet)" };
  cout << "Here are the planets:\n";
  // Display the values in the array.
  for (string val : planets)
    cout << val << endl;
  return 0;
}


// This program use a range-based for loop to
// modify the contents of an array.
#include <iostream>
using namespace std;
int main()
{
  const int SIZE = 5;
  int numbers[5];
  // Get the values for the array.
  for (int &val : numbers)
  {
    cout << "Enter an integer value: ";
    cin >> val;
  }
  // Display the values in the array.
  cout << "Here are the values you entered:\n";
  for (int val : numbers)
    cout << val << endl;
  return 0;
}


// This program stores, in an array, the hours worked by
// employees who all make the same hourly wage.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const int NUM_EMPLOYEES = 5;      // Number of employees
  int hours[NUM_EMPLOYEES];         // Array to hold hours
  double payrate;                   // Hourly pay rate
  double grossPay;                  // To hold the gross pay
  // Input the hours worked.
  cout << "Enter the hours worked by ";
  cout << NUM_EMPLOYEES << " employees who all\n";
  cout << "earn the same hourly rate.\n";
  for (int index = 0; index < NUM_EMPLOYEES; index++)
  {
    cout << "Employee #" << (index + 1) << ": ";
    cin >> hours[index];
  }
  // Input the hourly rate for all employees.
  cout << "Enter the hourly pay rate for all the employees: ";
  cin >> payrate;
  // Display each employee's gross pay.
  cout << "Here is the gross pay for each employee:\n";
  cout << fixed << showpoint << setprecision(2);
  for (int index = 0; index < NUM_EMPLOYEES; index++)
  {
    grossPay = hours[index] * payrate;
    cout << "Employee #" << (index + 1);
    cout << ": $" << grossPay << endl;
  }
  return 0;
}


// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  const int ARRAY_SIZE = 100;       // Array size
  int numbers[ARRAY_SIZE];          // Array with 100 elements
  int count = 0;                    // Loop counter variable
  ifstream inputFile;               // Input file stream object
  inputFile.open("numbers.txt");    // Open the file
  // Read the numbers from the file into the array.
  // After this loop executes, the count variable will hold
  // the number of values that were stored in the array.
  while (count < ARRAY_SIZE && inputFile >> numbers[count])
    count++;
  // Close the file.
  inputFile.close();
  // Display the numbers read.
  cout << "The numbers are: ";
  for (int index = 0; index < count; index++)
    cout << numbers[index] << " ";
  cout << endl;
  return 0;
}


// This program uses two parallel arrays: one for hours
// worked and one for pay rate
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const int NUM_EMPLOYEES = 5;        // Number of employees
  int hours[NUM_EMPLOYEES];           // Holds hours worked
  double payRate[NUM_EMPLOYEES];      // Holds pay rates
  // Input the hours worked and the hourly pay rate.
  cout << "Enter the hours worked by " << NUM_EMPLOYEES
       << " employees and their\n"
       << "hourly pay rates.\n";
  for (int index = 0; index < NUM_EMPLOYEES; index++)
  {
    cout << "Hours worked by employee #" << (index + 1) << ": ";
    cin >> hours[index];
    cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
    cin >> payRate[index];
  }
  // Display each employee's gross pay.
  cout << "Here is the gross pay each employee:\n";
  cout << fixed << showpoint << setprecision(2);
  for (int index = 0; index < NUM_EMPLOYEES; index++)
  {
    double grossPay = hours[index] * payRate[index];
    cout << "Employee #" << (index + 1);
    cout << ": $" << grossPay << endl;
  }
  return 0;
}


// This program demonstrates that an array element is passed
// to a function like any other variable.
#include <iostream>
using namespace std;
void showValue(int);            // Function prototype

int main()
{
  const int SIZE = 8;
  int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
  for (int index = 0; index < SIZE; index++)
    showValue(numbers[index]);
  cout << endl;
  return 0;
}
void showValue(int num)
{
  cout << num << " ";
}


// This program demonstrates an array being passed to a function.
#include <iostream>
using namespace std;
void showValue(int [], int);            // Function prototype

int main()
{
  const int ARRAY_SIZE = 8;
  int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
  showValue(numbers, ARRAY_SIZE);
  return 0;
}
void showValue(int nums[], int size)
{
  for (int index = 0; index < size; index++)
    cout << nums[index] << " ";
  cout << endl;
}


// This program demonstrates the showValues function being
// used to display the contents of two arrays.
#include <iostream>
using namespace std;
void showValues(int [], int);           // Function prototype

int main()
{
  const int SIZE1 = 8;          // Size of set1 array
  const int SIZE2 = 5;          // Size of set2 array
  int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
  int set2[SIZE2] = {2, 4, 6, 8, 10};
  // Pass set1 to showValues.
  showValues(set1, SIZE1);
  // Pass set2 to showValues.
  showValues(set2, SIZE2);
  return 0;
}
void showValues(int nums[], int size)
{
  for (int index = 0; index < size; index++)
    cout << nums[index] << " ";
  cout << endl;
}


// This program uses a function to double the value of
// each element of an array.
#include <iostream>
using namespace std;
// Function prototype
void doubleArray(int [], int);
void showValues(int [], int);

int main()
{
  const int ARRAY_SIZE = 7;
  int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};
  // Display the initial values.
  cout << "The array's values are:\n";
  showValues(set, ARRAY_SIZE);
  // Double the values in the array.
  doubleArray(set, ARRAY_SIZE);
  // Display the resulting values.
  cout << "After calling doubleArray the values are:\n";
  showValues(set, ARRAY_SIZE);
  return 0;
}
void doubleArray(int nums[], int size)
{
  for (int index = 0; index < size; index++)
    nums[index] *= 2;
}
void showValues(int nums[], int size)
{
  for (int index = 0; index < size; index++)
    cout << nums[index] << " ";
  cout << endl;
}


// This program gets a series of test scores and
// calculates the average of the scores with the
// lowest score dropped.
#include <iostream>
#include <iomanip>
using namespace std;
// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
  const int SIZE = 4;           // Array size
  double testScores[SIZE],      // Array of test scores
         total,                 // Total of the scores
         lowestScore,           // Lowest test score
         average;               // Average test score
  // Set up numeric output formatting.
  cout << fixed << showpoint << setprecision(1);
  // Get the test scores from the user.
  getTestScores(testScores, SIZE);
  // Get the total of the test scores.
  total = getTotal(testScores, SIZE);
  // Get the lowest test score.
  lowestScore = getLowest(testScores, SIZE);
  // Subtract the lowest score from the total.
  total -= lowestScore;
  // Calculate the average. Divide by 3 because
  // the lowest test score was dropped.
  average = total / (SIZE - 1);
  // Display the average.
  cout << "The average with the lowest score "
       << "dropped is " << average << ".\n";
  return 0;
}
void getTestScores(double scores[], int size)
{
  // Loop counter
  int index;
  // Get each test score.
  for (index = 0; index < size; index++)
  {
    cout << "Enter test score number "
         << (index + 1) << ": ";
    cin >> scores[index];
  }
}
double getTotal(const double numbers[], int size)
{
  double total = 0;         // Accumulator
  // Add each element total.
  for (int count = 0; count < size; count++)
    total += numbers[count];
  // Return the total.
  return total;
}
double getLowest(const double numbers[], int size)
{
  double lowest;            // To hold the lowest value
  // Get the first array's first element
  lowest = numbers[0];
  // Step through the rest of the array. When a
  // value less than lowest is found, assign it
  // to lowest.
  for (int count = 1; count < size; count++)
  {
    if (numbers[count] < lowest)
      lowest = numbers[count];
  }
  // Return the lowest value.
  return lowest;
}


// This program demonstrates a two-dimensional array.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const int NUM_DIVS = 3;             // Number of divisions
  const int NUM_QTRS = 4;             // Number of quarters
  double sales[NUM_DIVS][NUM_QTRS];    // Array with 3 rows and 4 columns.
  double totalSales = 0;              // To hold the total sales.
  int div, qtr;                       // Loop counters.
  cout << "This program will calculate the total sales of\n";
  cout << "all the company's divisions.\n";
  cout << "Enter the following sales information:\n\n";
  // Nested loops to fill the array with quarterly
  // sales fiqures for each division.
  for (div = 0; div < NUM_DIVS; div++)
  {
    for (qtr = 0; qtr < NUM_QTRS; qtr++)
    {
      cout << "Division " << (div + 1);
      cout << ", Quarter " << (qtr + 1) << ": $";
      cin >> sales[div][qtr];
    }
    cout << endl;
  }
  // Nested loops used to add all the elements.
  for (div = 0; div < NUM_DIVS; div++)
  {
    for (qtr = 0; qtr < NUM_QTRS; qtr++)
      totalSales += sales[div][qtr];
  }
  cout << fixed << showpoint << setprecision(2);
  cout << "The total sales for the company are: $";
  cout << totalSales << endl;
  return 0;
}


// This program demonstrates accepting a 2D array argument.
#include <iostream>
#include <iomanip>
using namespace std;
// Global constants
const int COLS = 4;             // Number of columns in each array
const int TBL1_ROWS = 3;        // Number of rows in table1
const int TBL2_ROWS = 4;        // Number of rows in table2
void showArray(const int [][COLS], int);

int main()
{
  int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},
                                 {5, 6, 7, 8},
                                 {9, 10, 11, 12}};
  int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40},
                                 {50, 60, 70, 80},
                                 {90, 100, 110, 120},
                                 {130, 140, 150, 160}};
  cout << "The contents of table1 are:\n";
  showArray(table1, TBL1_ROWS);
  cout << "The contents of table2 are:\n";
  showArray(table2, TBL2_ROWS);
  return 0;
}
void showArray(const int numbers[][COLS], int rows)
{
  for (int x = 0; x < rows; x++)
  {
    for (int y = 0; y < COLS; y++)
    {
      cout << setw(4) << numbers[x][y] << " ";
    }
    cout << endl;
  }
}


// This program is drive that test a function comparing the 
// the contents of twp int arrays.
#include <iostream>
using namespace std;
// Function prototype
bool testPIN(const int [], const int [], int);
int main()
{
  const int NUM_DIGITS = 7;       // Number of digits in a PIN
  int pin1[NUM_DIGITS] = {2, 4, 1, 8, 7, 9, 0};     // Base set of values.
  int pin2[NUM_DIGITS] = {2, 4, 6, 8, 7, 9, 0};     // Only 1 element is diiferent from pin1.
  int pin3[NUM_DIGITS] = {1, 2, 3, 4, 5, 6, 7};     // All elements are different from pin1.
  if (testPIN(pin1, pin2, NUM_DIGITS))
    cout << "ERROR: pin1 and pin2 report to be the same.\n";
  else
    cout << "SUCCESS: pin1 and pin2 report to be different.\n";
  if (testPIN(pin1, pin3, NUM_DIGITS))
    cout << "ERROR: pin1 and pin3 report to be the same.\n";
  else
    cout << "SUCCESS: pin1 and pin3 report to be different.\n";
  if (testPIN(pin1, pin1, NUM_DIGITS))
    cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
  else 
    cout << "ERROR: pin1 and pin1 report to be different.\n";
  return 0;
}
bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
  for (int index = 0; index < size; index++)
  {
    if (custPIN[index] != databasePIN[index])
      return false;             // We've found two different values.
  }
  return true;                  // If make it this far, the values are the same.
}


// This program stores, in two vectors, the hours worked by 5
// employees, and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>                           // Needed to define vectors
using namespace std;
int main()
{
  const int NUM_EMPLOYEES = 5;              // Number of employees
  vector<int> hours(NUM_EMPLOYEES);         // A vector of integers
  vector<double> payRate(NUM_EMPLOYEES);     // A vector of doubles
  int index;                                // Loop counter
  // Input the data.
  cout << "Enter the hours worked by " << NUM_EMPLOYEES;
  cout << " employees and the hourly rates.\n";
  for (index = 0; index < NUM_EMPLOYEES; index++)
  {
    cout << "Hours worked ny employee #" << (index + 1);
    cout << ": ";
    cin >> hours[index];
    cout << "Hourly pay rate for employee #";
    cout << (index + 1) << ": ";
    cin >> payRate[index];
  }
  // Display each employee's gross pay.
  cout << "\nHere is the gross pay for each employee:\n";
  cout << fixed << showpoint << setprecision(2);
  for (index = 0; index < NUM_EMPLOYEES; index++)
  {
    double grossPay = hours[index] * payRate[index];
    cout << "Employess #" << (index + 1);
    cout << ": $" << grossPay << endl;
  }
  return 0;
}


// This program demonstrates the range-based for loop with a vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // Define and initialized a vector.
  vector<int> numbers { 10, 20, 30, 40, 50 };
  // Display the vector elements.
  for (int val : numbers)
    cout << val << endl;
  return 0;
}
// This program demonstrates the range-based for loop with a vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // Define and initialize a vector.
  vector<int> numbers(5);
  // Get values for the vector elements.
  for (int &val : numbers)
  {
    cout << "Enter an integer value: ";
    cin >> val;
  }
  // Display the vector elements.
  cout << "Here are the values you entered:\n";
  for (int val : numbers)
    cout << val << endl;
  return 0;
}


// This program stores, in two arrays, the hours worked by 5
// employees, and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>                 // Needed to define vectors
using namespace std;
int main()
{
  vector<int> hours;              // hours in an empty vector
  vector<double> payRate;        // payRate is an empty vector
  int numEmployees;               // The number of employees
  int index;                      // Loop counter
  // Get the number of employees.
  cout << "How many employees do you have? ";
  cin >> numEmployees;
  // Input the payroll data.
  cout << "Enter the hours worked by " << numEmployees;
  cout << " employees and their hourly rates.\n";
  for (index = 0; index < numEmployees; index++)
  {
    int tempHours;                 // To hold the number of hours entered
    double tempRate;               // To hold the pay rate entered
    cout << "Hours worked by employee #" << (index + 1);
    cout << ": ";
    cin >> tempHours;
    hours.push_back(tempHours);    // Add an element to hours
    cout << "Hourly pay rate for employee #";
    cout << (index + 1) << ": ";
    cin >> tempRate;
    payRate.push_back(tempRate);   // Add an element to payRate  
  }
  // Display each employee's gross pay.
  cout << "Here is the gross pay for each employee:\n";
  cout << fixed << showpoint << setprecision(2);
  for (index = 0; index < numEmployees; index++)
  {
    double grossPay = hours[index] * payRate[index];
    cout << "Employee #" << (index + 1);
    cout << ": $" << grossPay << endl;
  }
  return 0;
}


// This program demonstrates the vector size
// member function.
#include <iostream>
#include <vector>
using namespace std;
// Function prototype
void showValues(vector<int>);

int main()
{
  vector<int> values;
  // Put a series of numbers in the vector.
  for (int count = 0; count < 7; count++)
    values.push_back(count * 2);
  // Display the numbers.
  showValues(values);
  return 0;
}
void showValues(vector<int> vect)
{
  for (int count = 0; count < vect.size(); count++)
    cout << vect[count] << endl;
}


// This program demonstrates the vector pop_back member function.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> values;
  // Store values in the vector.
  values.push_back(1);
  values.push_back(2);
  values.push_back(3);
  cout << "The size of values is " << values.size() << endl;
  // Remove a value from the vector.
  cout << "Popping a value from the vector...\n";
  values.pop_back();
  cout << "The size of values is now " << values.size() << endl;
  // Now remove another value from the vector.
  cout << "Popping a value from the vector...\n";
  values.pop_back();
  cout << "The size of values is now " << values.size() << endl;
  // Remove the last values from the vector.
  cout << "Popping a value from the vector...\n";
  values.pop_back();
  cout << "The size of values is now " << values.size() << endl;
  return 0;
}


// This program demonstrates the vector clear member function.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> values(100);
  cout << "The values vector has "
       << values.size() << " elements.\n";
  cout << "I will call the clear member function...\n";
  values.clear();
  cout << "Now, the values vector has "
       << values.size() << " elements.\n";
  return 0;
}


// This program demonstrates the vector's empty member function.
#include <iostream>
#include <vector>
using namespace std;
// Function prototype
double avgVector(vector<int>);

int main()
{
  vector<int> values;               // A vector to hold values
  int numValues;                    // The number of values
  double average;                   // To hold the average
  // Get the number of values to average.
  cout << "How many values do you wish to average? ";
  cin >> numValues;
  // Get the values and store the min the vector.
  for (int count = 0; count < numValues; count++)
  {
    int tempValue;
    cout << "Enter a value: ";
    cin >> tempValue;
    values.push_back(tempValue);
  }
  // Get the average of the values and display it.
  average = avgVector(values);
  cout << "Average: " << average << endl;
  return 0;
}
double avgVector(vector<int> vect)
{
  double total = 0;                  // accumulator
  double avg;                     // average
  if (vect.empty())               // Determine if the vector is empty
  {
    cout << "No values to average.\n";
    avg = 0.0;
  }
  else
  {
    for (int count = 0; count < vect.size(); count++)
      total += vect[count];
    avg = total / vect.size();
  }
  return avg;
}
