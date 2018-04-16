// // // This program asks the user to enter the length and width of
// // // a rectangle. It calculates the rectangle's area and displays
// // // the value on the screen.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int length, width, area;

//   cout << "This program calculates the area of a ";
//   cout << "rectangle.\n";
//   cout << "What is the length of the rectangle? ";
//   cin >> length;
//   cout << "What is the width of the rectangle? ";
//   cin >> width;
//   area = length * width;
//   cout << "The area of the rectangle is " << area << ".\n";
//   return 0;
// }
// // This program asks the user to enter the length and width of
// // a rectangle. It calculates the rectangle's area and displays
// // the value on the screan.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int length, width, area;

//   cout << "This program calculates the area of a ";
//   cout << "rectangle.\n";
//   cout << "Enter the length and width of the rectangle ";
//   cout << "separated by a space.\n";
//   cin >> length >> width;
//   area = length * width;
//   cout << "The area of the rectangle is " << area << endl;
//   return 0;
// }
// // This program demonstrates how cin read cin can read mulitple values
// // of different data types.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int whole;
//   double fractional;
//   char letter;

//   cout << "Enter an integer, a double, and a character: ";
//   cin >> whole >> fractional >> letter;
//   cout << "Whole: " << whole << endl;
//   cout << "Fractional: " << fractional << endl;
//   cout << "Letter: " << letter << endl;
//   return 0;
// }
// This program asks the user to enter the numerator
// and denominator of a fraction ans it displays the
// decimal value.
// #include <iostream>
// using namespace std;
// int main()
// {
//   double numerator, denominator;

//   cout << "This program shows the decimal value of ";
//   cout << "a fraction.\n";
//   cout << "Enter the numerator: ";
//   cin >> numerator;
//   cout << "Enter the denominator: ";
//   cin >> denominator;
//   cout << "The decimal value is ";
//   cout << (numerator / denominator) << endl;
//   return 0;
// }
// // This program calculates the area of a circle.
// // The formula for the area of a circle is Pi times
// // the radius squared. Pi is 3.14159.
// #include <iostream>
// #include <cmath>    // needed for pow function
// using namespace std;
// int main()
// {
//   const double PI = 3.14159;
//   double area, radius;

//   cout << "This progran calculates the area of a circle.\n";
//   cout << "What is the radius of the circle? ";
//   cin >> radius;
//   area = PI * pow(radius, 2.0);
//   cout << "The area is " << area << endl;
//   return 0;
// }
// // This program calculates the average
// //
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//   double test1, test2, test3;
//   double average;

//   // Get the threee test scores.
//   cout << "Enter the first test score: ";
//   cin >> test1;
//   cout << "Enter the second test score: ";
//   cin >> test2;
//   cout << "Enter the third test score: ";
//   cin >> test3;

//   // Calculate the average of the scores.
//   average = (test1 + test2 + test3) / 3.0;

//   // Display the average.
//   cout << "The average score is: " << average << endl;
//   return 0;
// }
// // This program demonstrates integer overflow and underflow.
// #include <iostream>
// using namespace std;
// int main()
// {
//   // testVar is initialize with the maximum value for a short.
//   short testVar = 32767;
//   // Display testVar.
//   cout << testVar << endl;
//   // Add 1 to testVar to make it overflow.
//   testVar = testVar + 1;
//   cout << testVar << endl;
//   // Subtract 1 from testVar to underflow.
//   testVar = testVar - 1;
//   cout << testVar << endl;
//   return 0;
// }
// // This program can be used to see how your system handles
// // floating point overflow and underflow.
// #include <iostream>
// using namespace std;
// int main()
// {
//   float test;

//   test = 2.0e38 * 1000;     // Should overflow test.
//   cout << test << endl;
//   test = 2.0e-38 / 2.0e38;  // Should underflow test.
//   cout <<  test << endl;
//   return 0;
// }
// // This program uses a type cast  to avoid integer division.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int books;          // Number of books to read
//   int months;         // Number of months spent reading
//   double perMonth;    // Average number of books per month

//   cout << "How books do you plan to read? ";
//   cin >> books;
//   cout << "How many months will it take you to read them? ";
//   cin >> months;
//   perMonth = static_cast<double>(books) / months;
//   cout << "That is " << perMonth << " books per month.\n";
//   return 0;
// }
// // This program uses a type cast expression to print a character
// // from a number
// #include <iostream>
// using namespace std;
// int main()
// {
//   int number = 65;
//   // Display the value of the number variable.
//   cout << number << endl;
//   // Display the value of number converted to
//   // the char data type.
//   cout << static_cast<char>(number) << endl;
//   return 0;
// }
// // This program tracks the inventory of three widets stores
// // that opened at the same time. Each store started with the
// // same number of widgets in inventory. By subtracting the
// // number of widgets each store has sold from its inventory,
// // the current inventory can be calculated.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int begInv,     // Beginning inventory for all stores
//     sold,           // Number of widgets sold
//     store1,         // Store 1's inventory
//     store2,         // Store 2's inventory
//     store3;         // Store 3's inventory
//   // Get the beginning inventory for all the store.
//     cout << "One week ago, 3 new widget stores opened\n";
//     cout << "at the same time with the same begiining\n";
//     cout << "inventory. What was the beginning inventory? ";
//     cin >> begInv;
//     // Set each store's inventory.
//     store1 = store2 = store3 = begInv;
//     // Get the number of widgets sold at store 1.
//     cout << "How many widgets has store 1 sold? ";
//     cin >> sold;
//     store1 -= sold;    // Adjust store 1's inventory.
//     // Get the number of widgets sold at store 2.
//     cout << "How many widgets has store 2 sold? ";
//     cin >> sold;
//     store2 -= sold;    // Adjust store 2's inventory.
//     // Get the number of widgets sold at store 3.
//     cout << "How many widgets has store 3 sold? ";
//     cin >> sold;
//     store3 -= sold;   // Adjust store 3's inventory.
//     // Display each store's current inventory.
//     cout << "\nThe current inventory of each store:\n";
//     cout << "Store 1: " << store1 << endl;
//     cout << "Store 2: " << store2 << endl;
//     cout << "Store 3: " << store3 << endl;
//     return 0;
// }
// // This program displays three rows of numbers.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int num1 = 2897, num2 = 5,    num3 = 837,
//       num4 = 34,   num5 = 7,    num6 = 1623,
//       num7 = 390,  num8 = 3456, num9 = 12;
//       // Display the first row of numbers
//       cout << num1 << " " << num2 << " " << num3 << endl;
//       // Display the second row of numbers
//       cout << num4 << " " << num5 << " " << num6 << endl;
//       // Display the third row of numbers
//       cout << num7 << " " << num8 << " " << num9 << endl;
//       return 0;
// }
// // This program demonstrates the setw manipulator being
// // used with values of data types.
// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;
// int main()
// {
//   int intValue = 3928;
//   double doubleValue = 91.5;
//   string stringValue = "John J. Smith";

//   cout << "(" << setw(5) << intValue << ")" << endl;
//   cout << "(" << setw(8) << doubleValue << ")" << endl;
//   cout << "(" << setw(16) << stringValue << ")" << endl;
//   return 0;
// }
// // This program demonstrates how setprecision rounds a
// // floating point value.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   double quotient, number1 = 132.364, number2 = 26.91;
//   quotient = number1 / number2;
//   cout << quotient << endl;
//   cout << setprecision(5) << quotient << endl;
//   cout << setprecision(4) << quotient << endl;
//   cout << setprecision(3) << quotient << endl;
//   cout << setprecision(2) << quotient << endl;
//   cout << setprecision(1) << quotient << endl;
//   return 0;
// }
// // This program asks for sales figure for 3 days. The total
// // sales are calculated and displayed in a table.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   double day1, day2, day3, total;
//   // Get the sales for each day.
//   cout << "Enter the sales for day 1: ";
//   cin >> day1;
//   cout << "Enter the sales for day 2: ";
//   cin >> day2;
//   cout << "Enter the sales for day 3: ";
//   cin >> day3;
//   // Calculate the total sales.
//   total = day1 + day2 + day3;
//   // Display the sales figures.
//   cout << "\nSales Figures\n";
//   cout << "-------------\n";
//   cout << setprecision(5);
//   cout << "Day 1: " << setw(8) << day1 << endl;
//   cout << "Day 2: " << setw(8) << day2 << endl;
//   cout << "Day 3: " << setw(8) << day3 << endl;
//   cout << "Total: " << setw(8) << total << endl;
//   return 0;
// }
// // This program asks for sales figures for 3 days. The total
// // sales are calculated and displayed in a table.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   double day1, day2, day3, total;
//   // Get the sales for each day.
//   cout << "Enter the sales for day 1: ";
//   cin >> day1;
//   cout << "Enter the sales for day 2: ";
//   cin >> day2;
//   cout << "Enter the sales for day 3: ";
//   cin >> day3;
//   // Calculate the total sales.
//   total = day1 + day2 + day3;
//   // Display the sales figures.
//   cout << "\nSales Figures\n";
//   cout << "-------------\n";
//   cout << setprecision(2) << fixed;
//   cout << "Day 1: " << setw(8) << day1 << endl;
//   cout << "Day 2: " << setw(8) << day2 << endl;
//   cout << "Day 3: " << setw(8) << day3 << endl;
//   cout << "Total: " << setw(8) << total << endl;
//   return 0;
// }
// // This program illustrates a program that can occur if
// // cin is used to read character data into a string object.
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//   string name;
//   string city;

//   cout << "Please enter your name: ";
//   cin >> name;
//   cout << "Enter the city you live in: ";
//   cin >> city;
//   cout << "Hello, " << name << endl;
//   cout << "You live in "<< city << endl;
//   return 0;
// }
// // This program demonstrates using the getline function
// // to read character data into a string object.
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//   string name;
//   string city;

//   cout << "Please enter your name: ";
//   getline(cin, name);
//   cout << "Enter the city you live in: ";
//   getline(cin, city);
//   cout << "Hello, " << name << endl;
//   cout << "You live in " << city << endl;
//   return 0;
// }
// // This program reads a single character into a char variable.
// #include <iostream>
// using namespace std;
// int main()
// {
//   char ch;
//   cout << "Type a character and press Enter: ";
//   cin >> ch;
//   cout << "You entered " << ch << endl;
//   return 0;
// }
// // This program demonstrates three ways
// // to use cin.get() to pause a program.
// #include <iostream>
// using namespace std;
// int main()
// {
//   char ch;

//   cout << "This program has paused. Press Enter to continue.";
//   cin.get(ch);
//   cout << "It has paused a second time. Please press Enter agaian.";
//   ch = cin.get();
//   cout << "It has paused a third time. Please press Enter again.";
//   cin.get();
//   cout << "Thank you!";
//   return 0;
// }
// // This program demonstrates a program that occurs
// // when you mix cin >> with cin.get().
// #include <iostream>
// using namespace std;
// int main()
// {
//   char ch;
//   int number;
//   cout << "Enter a number: ";
//   cin >> number;
//   cout << "Enter a character: ";
//   ch = cin.get();
//   cout << "Thank You!\n";
//   return 0;
// }
// // This program successfully uses both
// // cin >> and cin.get() for keyboard input.
// #include <iostream>
// using namespace std;
// int main()
// {
//   char ch;
//   int number;

//   cout << "Enter a number: ";
//   cin >> number;
//   cin.ignore();             // Skip the newline character
//   cout << "Enter a character: ";
//   ch = cin.get();
//   cout << "Thank You!\n";
//   return 0;
// }
// // This program asks for the lenghts of the two sides of a
// // right triangle. The lwnght of the hypotenuse is then
// // calculated and displayed.
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main()
// {
//   double a, b, c;
//   cout << "Enter the length of side a: ";
//   cin >> a;
//   cout << "Enter the length of side b: ";
//   cin >> b;
//   c = sqrt(pow(a, 2.0) + pow(b, 2.0));
//   cout << "The length of the hypotenuse is: ";
//   cout << setprecision(2) << c << endl;
//   return 0;
// }
// // This program demonstrates random numbers.
// #include <iostream>
// #include <cstdlib>      // For rand and srand
// #include <ctime>        // For the time fuction
// using namespace std;
// int main()
// {
//     // Get the system time.
//   unsigned seed = time(0);
//   // Seed the random number generator.
//   srand(seed);
//   // Display three random numbers.
//   cout << rand() << endl;
//   cout << rand() << endl;
//   cout << rand() << endl;
//   return 0;
// }
//// Or limt the paramaters of the random function
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main()
// {
//   const int MIN_VALUE = 1;
//   const int MAX_VALUE = 100;

//   int y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
//   cout << "Random number: " << y << endl;
//   return 0;
// }
// // This program simulates rolling dice.
// #include <iostream>
// #include <cstdlib>       // For rand and srand
// #include <ctime>         // For the time function
// using namespace std;
// int main()
// {
//   // Constants
//   const int MIN_VALUE = 1;  // Minimun die value
//   const int MAX_VALUE = 6;  // Maximum die value

//   // Variables
//   int die1;               // To hold the value of die #1
//   int die2;               // To hold the value of die #2

//   // Get the system time.
//   unsigned seed = time(0);

//   // Seed the random number generator.
//   srand(seed);

//   cout << "Rolling the dice...\n";
//   die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
//   die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
//   cout << die1 << endl;
//   cout << die2 << endl;
//   return 0;
// }
// // This program asks fors three numbers, then
// // display the average of the numbers.
// #include <iostream>
// using namespace std;
// int main()
// {
//   double num1, num2, num3, avg;
//   cout << "Enter the first number: ";
//   cin >> num1;
//   cout << "Enter the second number: ";
//   cin >> num2;
//   cout << "Enter the third number: ";
//   cin >> num3;
//   avg = (num1 + num2 + num3) / 3;
//   cout << "The average is " << avg << endl;
//   return 0;
// }
// This program is to calculate the volume, cost, customer charge, and profit
// of a crate of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  // Constants for cost and amount charged
  const double COST_PER_CUBIC_FOOT = 0.23;
  const double CHARGE_PER_CUBIC_FOOT = 0.5;
  // Variables
  double length, width, heigth, volume, cost, charge, profit;
  // Set the desire output formatting for numbers.
  cout << setprecision(2) << fixed << showpoint;
  // Prompt the user for the crate's length, width, and heigth
  cout << "Enter the desired crates length: ";
  cin >> length;
  cout << "Enter the desired crates width: ";
  cin >> width;
  cout << "Enter the desired creates heigth: ";
  cin >> heigth;
  // Calculate the crate's volume, the cost to produce its,
  // the charge to the customer, and the profit.
  volume = length * width * heigth;
  cost = volume * COST_PER_CUBIC_FOOT;
  charge = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;
  // Display the calculated data.
  cout << "volume: " << volume << " cubic feet" << endl;
  cout << "COST: $" << cost << endl;
  cout << "CHARGE: $" << charge << endl;
  cout << "PROFIT: $" << profit << endl;
  return 0;
}