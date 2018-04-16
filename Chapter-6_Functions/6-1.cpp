// // This program has two functions: main and displayMessage
// #include <iostream>
// using namespace std;

// void displayMessage()
// {
//   cout << "Hello from the function displayMessage.\n";
// }

// int main()
// {
//   cout << "Hello from main.\n";
//   displayMessage();
//   cout << "Back in function main again.\n";
//   return 0;
// }
// // The function displayMessage is repeatedly called from a loop.
// #include <iostream>
// using namespace std;

// void displayMessage()
// {
//   cout << "Hello from the function displayMessage.\n";
// }

// int main()
// {
//   cout << "Hello from main.\n";
//   for (int count = 0; count < 5; count++)
//     displayMessage();       // Call displayMessage
//   cout << "Back in function main again.\n";
//   return 0;
// }
// // This program has three function: main, first, and second.
// #include <iostream>
// using namespace std;

// void first()
// {
//   cout << "I am now inside the function first.\n";
// }

// void second()
// {
//   cout << "I am now inside the function second.\n";
// }

// int main()
// {
//   cout << "I am starting in function main.\n";
//   first();        // Call function first
//   second();       // Call function second
//   cout << "Back in function main again. \n";
//   return 0;
// }
// // This program has three functions: main, deep, and deeper
// #include <iostream>
// using namespace std;

// void deeper()
// {
//   cout << "I am now inside the function deeper.\n";
// }

// void deep()
// {
//   cout << "I am now inside the function deep.\n";
//   deeper();         // Call function deeper
//   cout << "Now I am back in deep.\n";
// }

// int main()
// {
//   cout << "I am starting in function main.\n";
//   deep();            // Call function deep
//   cout << "Back in function main again.\n";
//   return 0;
// }
// // This program has three functions: main, first, and second.
// #include <iostream>
// using namespace std;
// // Function Prototypes
// void first();
// void second();

// int main()
// {
//   cout << "I am starting in function main.\n";
//   first();        // Call function first
//   second();       // Call function second
//   cout << "Back in function main.\n";
//   return 0;
// }

// void first()
// {
//   cout << "I am now inside the function first.\n";
// }

// void second()
// {
//   cout << "I am now inside the function second.\n";
// }
// // This program demonstrates a function with a parameter.
// #include <iostream>
// using namespace std;
// // Function Prototype
// void displayValue(int);

// int main()
// {
//   cout << "I am passing 5 to displayValue.\n";
//   displayValue(5);    // Call displayValue with argument 5
//   cout << "Now I am back in main.\n";
//   return 0;
// }

// void displayValue(int num)
// {
//   cout << "The value is " << num << endl;
// }
// // This program demonstrates a function with a parameter.
// #include <iostream>
// using namespace std;
// // Function Prototype
// void displayValue(int);

// int main()
// {
//   cout << "I am passing serveral values to displayValue.\n";
//   displayValue(5);        // Call displayValue with argument 5
//   displayValue(10);       // Call displayValue with argument 10
//   displayValue(2);        // Call displayValue with argument 2
//   displayValue(16);       // Call displayValue with argument 16
//   cout << "Now I am back in main.\n";
//   return 0;
// }

// void displayValue(int num)
// {
//   cout << "The value is " << num << endl;
// }
// // This program demonstrates a function with three parameters.
// #include <iostream>
// using namespace std;
// // Function Prototype
// void showSum(int, int, int);

// int main()
// {
//   int value1, value2, value3;
//   // Get three integers.
//   cout << "Enter three integers and I will display ";
//   cout << "their sum: ";
//   cin >> value1 >> value2 >> value3;
//   // Call showSum passing three arguments.
//   showSum(value1, value2, value3);
//   return 0;
// }

// void showSum( int num1, int num2, int num3)
// {
//   cout << (num1 + num2 + num3) << endl;
// }
// // This program demonstrates that changes to a function parameter
// // have no effect on the original argument.
// #include <iostream>
// using namespace std;
// // Function Prototype
// void changeMe(int);

// int main()
// {
//   int number = 12;
//   // Display the value in number.
//   cout << "number is " << number << endl;
//   // Call changeMe, passinf the value in number as an argument
//   changeMe(number);
//   // Display the value in number agian.
//   cout << "Now back in main again, the value of ";
//   cout << "number is " << number << endl;
//   return 0;
// }

// void changeMe(int myValue)
// {
//   // Change the value of myValue to 0.
//   myValue = 0;
//   // Display the value in myValue.
//   cout << "Now the value is " << myValue << endl;
// }
// // This is a menu-driven program that makes a function call
// // for each selection the user makes.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// // Function prototypes
// void showMenu();
// void showFees(double, int);

// int main()
// {
//   int choice;       // To hold a menu choice
//   int months;       // To hold a number of months
//   // Constants for the menu choices
//   const int ADULT_CHOICE = 1,
//             CHILD_CHOICE = 2,
//             SENIOR_CHOICE = 3,
//             QUIT_CHOICE = 4;
//   // Constants for membership rates
//   const double ADULT = 40.0,
//                CHILD = 20.0,
//                SENIOR = 30.0;
//   // Set up numeric output formatting
//   cout << fixed << showpoint << setprecision(2);
//   do
//   {
//     // Display the menu and get the user's choice.
//     showMenu();
//     cin >> choice;
//     // Validate the menu selection.
//     while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
//     {
//       cout << "Please enter a valid menu choice: ";
//       cin >> choice;
//     }
//     // If the user does not want to quit, proceed.
//     if (choice != QUIT_CHOICE)
//     {
//       // Get the number of months.
//       cout << "For how many months? ";
//       cin >> months;
//       // Display the membership fees.
//       switch (choice)
//       {
//         case ADULT_CHOICE:
//             showFees(ADULT, months);
//             break;
//         case CHILD_CHOICE:
//             showFees(CHILD, months);
//             break;
//         case SENIOR_CHOICE:
//             showFees(SENIOR, months);
//             break;
//       }
//     }
//   } while (choice != QUIT_CHOICE);
//   return 0;
// }

// void showMenu()
// {
//   cout << "\n\t\tHealth Club Membership Menu\n\n"
//        << "1. Standard Adult Membership\n"
//        << "2. Child Membership\n"
//        << "3. Senior Citizen Membership\n"
//        << "4. Quit the Program\n\n"
//        << "Enter your choice: ";
// }
// void showFees(double memberRate, int months)
// {
//   cout << "The total charges are $"
//        << (memberRate * months) << endl;
// }
// // This program uses a function to perform division. If division
// // by zero is detected, the function returns.
// #include <iostream>
// using namespace std;
// // Function prototype.
// void divide(double, double);
// int main()
// {
//   double num1, num2;
//   cout << "Enter two number and I will divide the first\n";
//   cout << "number by the second number: ";
//   cin >> num1 >> num2;
//   divide(num1, num2);
//   return 0;
// }

// void divide(double arg1, double arg2)
// {
//   if (arg2 == 0.0)
//   {
//     cout << "Sorry, I cannot divide by zero.\n";
//     return;
//   }
//   cout << "The quotient is " << (arg1 / arg2) << endl;
// }
// // This program uses a function that returns a value.
// #include <iostream>
// using namespace std;
// // Function prototype
// int sum(int, int);
// int main()
// {
//   int value1 = 20,     // The first value
//       value2 = 40,    // The second value
//       total;          // To hold the total
//   // Call the sum function, passing the contantes of
//   // value1 and value2 as arguments. Assign the return
//   // value to the total variable.
//   total = sum(value1, value2);
//   // Display the sum of the values.
//   cout << "The sum of " << value1 << " and "
//        << value2 << " is " << total << endl;
//   return 0;
// }

// int sum(int num1, int num2)
// {
//   return num1 + num2;
// }
// // Tihs program demonstrates two value-returning functions.
// // The square function is called in a mathematical statement.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// //Function prototype
// double getRadius();
// double square(double);
// int main()
// {
//   const double PI = 3.14159;    // Comstant for pi
//   double radius;                // To hold the circle's radius
//   double area;                  // To hold the circle's area
//   // Set the numeric output formatting.
//   cout << fixed << showpoint << setprecision(2);
//   // Get the radius of the circle.
//   cout << "This program calculates the area of ";
//   cout << "a circle.\n";
//   radius = getRadius();
//   // Calculate the area of the circle.
//   area = PI * square(radius);
//   // Display the area.
//   cout << "The area is " << area << endl;
//   return 0; 
// }

// double getRadius()
// {
//   double rad;
//   cout << "Enter the radius of the circle: ";
//   cin >> rad;
//   return rad;
// }
// double square(double number)
// {
//   return number * number;
// }
// // This program converts cups to fluid ounces.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// // Function prototypes
// void showIntro();
// double getCups();
// double cupsToOunces(double);

// int main()
// {
//   // Variable for the cups and ounces.
//   double cups, ounces;
//   // Set up numeric output formatting
//   cout << fixed << showpoint << setprecision(1);
//   // Dis an intro screen.
//   showIntro();
//   // Get the number of cups.
//   cups = getCups();
//   // Convert cups to fluid ounces.
//   ounces = cupsToOunces(cups);
//   // Display the number of ounces.
//   cout << cups << " cups equals "
//        << ounces << " ounces.\n";
//   return 0;
// }
// void showIntro()
// {
//   cout << "This program converts measurements\n"
//        << "in cups to fuild ounces. For your\n"
//        << "reference the formula is:\n"
//        << " 1 cup = 8 fluid ounces\n\n";
// }
// double getCups()
// {
//   double numCups;
//   cout << "Enter the number of cups: ";
//   cin >> numCups;
//   return numCups;
// }
// double cupsToOunces(double numCups)
// {
//   return numCups * 8.0;
// }
// // This program uses a function that returns true or false.
// #include <iostream>
// using namespace std;
// // Function prototype
// bool isEven(int);

// int main()
// {
//   int val;
//   // Get a number from the user.
//   cout << "Enter an integer and I will tell you ";
//   cout << "if it is even or odd: ";
//   cin >> val;
//   // Indicate whether it is even or odd.
//   if (isEven(val))
//     cout << val << " is even.\n";
//   else
//     cout << val << " is odd.\n";
//   return 0;
// }
// bool isEven(int number)
// {
//   bool status;
//   if (number % 2 == 0)
//     status = true;        // The number is even if there is no remainder
//   else
//     status = false;       // Otherwise, the number is odd.
//   return status;
// }
// // This program shows that variables defined in a function
// // are hidden from other functions.
// #include <iostream>
// using namespace std;
// void anotherFunction();     // Function prototype

// int main()
// {
//   int num = 1;            // Local variable
//   cout << "In main, num is " << num << endl;
//   anotherFunction();
//   cout << "Back in main, num is " << num << endl;
//   return 0;
// }
// void anotherFunction()
// {
//   int num = 20;           // Local variable
//   cout << "In anotherFunction, num is " << num << endl;
// }
// // This program shows that a global variable is visible
// // to all the functions that appear in a program after
// // the variable's declaration.
// #include <iostream>
// using namespace std;
// void anotherFunction();       // Function prototype
// int num = 2;                  // Global variable

// int main()
// {
//   cout << "In main, num is " << num << endl;
//   anotherFunction();
//   cout << "Back in main, num is " << num << endl;
//   return 0;
// }
// void anotherFunction()
// {
//   cout << "In anotherFunction, num is " << num << endl;
//   num = 50;
//   cout << "But =, it is now changed to " << num << endl;
// }
// // This program has an uninitialized global variable.
// #include <iostream>
// using namespace std;
// int globalNum;     // Global variable, automatically set to zero

// int main()
// {
//   cout << "globalNum is " << globalNum << endl;
//   return 0;
// }
// // This program calculates gross pay.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// // Global constants
// const double PAY_RATE = 22.55;        // Hourly pay rate 
// const double BASE_HOURS = 40.0;       // Max non-overtime hours
// const double OT_MULTIPLIER = 1.5;        // Overtime multiplier
// // Function prototypes
// double getBasePay(double);
// double getOvertimePay(double);

// int main()
// {
//   double hours,           // Hours worked
//          basePay,         // Base pay
//          overtime = 0.0,  //Overtime pay
//          totalPay;        // Total pay
//   // Get the number of hours worked.
//   cout << "How many hours did you worked? ";
//   cin >> hours;
//   // Get the amount of base pay.
//   basePay = getBasePay(hours);
//   // Get overtime pay, if any.
//   if (hours > BASE_HOURS)
//     overtime = getOvertimePay(hours);
//   // Calculate the total pay.
//   totalPay = basePay + overtime;
//   // Set up numeric output formatting.
//   cout << setprecision(2) << fixed << showpoint;
//   // Display the pay.
//   cout << "Base pay: $" << basePay << endl
//        << "Overtime pay $" << overtime << endl
//        << "Total pay $" << totalPay << endl;
//   return 0;
// }
// double getBasePay(double hoursWorked)
// {
//   double basePay;       // To hold base pay
//   // Determine base pay.
//   if (hoursWorked > BASE_HOURS)
//     basePay = BASE_HOURS * PAY_RATE;
//   else
//     basePay = hoursWorked * PAY_RATE;
//   return basePay;
// }
// double getOvertimePay(double hoursWorked)
// {
//   double overtimePay;         // To hold overtime pay
//   // Determine overtime pay.
//   if (hoursWorked > BASE_HOURS)
//     overtimePay = (hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER; 
//   else
//     overtimePay = 0.0;
//   return overtimePay;
// }
// // This program demonstrates how a local variable
// // can shadow the name of a global constant.
// #include <iostream>
// using namespace std;
// // Global constant.
// const int BIRDS = 500;
// // Function prototype
// void california();

// int main()
// {
//   cout << "In main there are " << BIRDS << " birds.\n";
//   california();
//   return 0;
// }
// void california()
// {
//   const int BIRDS = 10000;
//   cout << "In california there are " << BIRDS << " birds.\n";
// }
// // This program shows that local variables do not retain
// // their values between function calls.
// #include <iostream>
// using namespace std;
// // Function prototype
// void showLocal();

// int main()
// {
//   showLocal();
//   showLocal();
//   return 0;
// }
// void showLocal()
// {
//   int localNum = 5;         // Local variables
//   cout << "localNum is " << localNum << endl;
//   localNum = 99;
// }
// // This program uses a static local variable.
// #include <iostream>
// using namespace std;
// void showStatic();        // Function prototype

// int main()
// {
//   // Call the showStatic function five times.
//   for (int count = 0; count < 5; count++)
//     showStatic();
//   return 0;
// }
// void showStatic()
// {
//   static int statNum;
//   cout << "statNum is " << statNum << endl;
//   statNum++;
// }
// // This program shows that a static local variable is only
// // initialized once.
// #include <iostream>
// using namespace std;
// void showStatic();        // Function prototype

// int main()
// {
//   // Call the showStatic function five times.
//   for (int count = 0; count < 5; count++)
//     showStatic();
//   return 0;
// }
// void showStatic()
// {
//   static int statNum = 5;
//   cout << "statNum is " << statNum << endl;
//   statNum++;
// }
// // This program demonstrates default function arguments.
// #include <iostream>
// using namespace std;
// // Function prototypes with default arguments
// void displayStars(int = 10, int = 1);

// int main()
// {
//   displayStars();       // Use default values for cols and rows.
//   cout << endl;
//   displayStars(5);      // Use default value for rows.
//   cout << endl;
//   displayStars(7, 3);   // Use 7 for cols and 3 for rows.
//   return 0;
// }
// void displayStars(int cols, int rows)
// {
//   // Nested loop. The outer loop controls the rows
//   // and the inner loop controls the columns.
//   for (int down = 0; down < rows; down++)
//   {
//     for (int across = 0; across < cols; across++)
//       cout << "*";
//     cout << endl;
//   }
// }
// // This program uses a reference variable as a function
// // parameter.
// #include <iostream>
// using namespace std;
// // Function prototype. The parameter is a reference variable.
// void doubleNum(int &);

// int main()
// {
//   int value = 4;
//   cout << "In main, value is " << value << endl;
//   cout << "Now calling doubleNum..." << endl;
//   doubleNum(value);
//   cout << "Now back in main, value is " << value << endl;
//   return 0;
// }
// void doubleNum(int &refVar)
// {
//   refVar *= 2;
// }
// // This program uses reference variables as function parameters.
// #include <iostream>
// using namespace std;
// // Function prototypes. Both functions use reference variables
// // as parameters.
// void doubleNum(int &);
// void getNum(int &);

// int main()
// {
//   int value;
//   // Get a number and store it in value.
//   getNum(value);
//   // Double the number stored in value.
//   doubleNum(value);
//   // Display the resulting number.
//   cout << "That value doubled is " << value << endl;
//   return 0;
// }
// void getNum(int &userNum)
// {
//   cout << "Enter a number: ";
//   cin >> userNum;
// }
// void doubleNum(int &refVar)
// {
//   refVar *= 2;
// }
// // This program uses overload functions.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// // Function prototype
// int square(int);
// double square(double);

// int main()
// {
//   int userInt;
//   double userFloat;
//   // Get an in and a double.
//   cout << fixed << showpoint << setprecision(2);
//   cout << "Enter an integer and a floating-point value: ";
//   cin >> userInt >> userFloat;
//   // Display their square.
//   cout << "Here are their squares: ";
//   cout << square(userInt) << " and " << square(userFloat) << endl;
//   return 0;
// }
// int square(int number)
// {
//   return number * number;
// }
// double square(double number)
// {
//   return number * number;
// }
// // This program demonstrates overloaded function to calculate
// // the gross weekly pay of hourly paid or salaried employees.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// // Function prototype
// void getChoice(char &);
// double calcWeeklyPay(int, double);
// double calcWeeklyPay(double);

// int main()
// {
//   char selection;         // Menu selection
//   int worked;             // Hours worked
//   double rate;            // Hourly pay rate
//   double yearly;          // Yearly salary
//   // Set numeric output formatting.
//   cout << fixed << showpoint << setprecision(2);
//   // Display the menu and get a selection.
//   cout << "Do you want to calculate the weekly pay of\n";
//   cout << "(H) an hourly paid employee, or \n";
//   cout << "(S) a salaried employee?\n";
//   getChoice(selection);
//   //Process the menu selection.
//   switch (selection)
//   {
//     // Hourly paid employee
//     case 'H':
//     case 'h': cout << "How many hours were worked? ";
//               cin >> worked;
//               cout << "What is the hourly pay rate? ";
//               cin >> rate;
//               cout << "The gross weekly pay is $";
//               cout << calcWeeklyPay(worked, rate) << endl;
//               break;
//     // Salaried employee
//     case 'S':
//     case 's': cout << "What is the annual salary? ";
//               cin >> yearly;
//               cout << "The gross weekly pay is $";
//               cout << calcWeeklyPay(yearly) << endl;
//               break;
//   }
//   return 0;
// }
// void getChoice(char & letter)
// {
//   // Get the user's selection.
//   cout << "Enter your choice (H or S): ";
//   cin >> letter;
//   // Validate the selection.
//   while (letter != 'H' && letter != 'h' && letter != 'S' && letter !='s')
//   {
//     cout << "Please enter H or S: ";
//     cin >> letter;
//   }
// }
// double calcWeeklyPay(int hours, double payRate)
// {
//   return hours * payRate;
// }
// double calcWeeklyPay(double annSalary)
// {
//   return annSalary / 52;
// }
// // This program shows how the exit function causes a program
// // to stop executing.
// #include <iostream>
// #include <cstdlib>      // Needed for the exit function
// using namespace std;
// void functn();        // Function prototype

// int main()
// {
//   functn();
//   return 0;
// }
// void functn()
// {
//   cout << "This program terminates with the exit function.\n";
//   cout << "Bye!\n";
//   exit(0);
//   cout << "This message will never be displayed\n";
//   cout << "because the program has already terminated.\n";
// }
// This program is a driver for testing the showFees function.
#include <iostream>
using namespace std;
// Prototypes
void showFees(double, int);
int main()
{
  // Constants for membership rates
  const double ADULT = 40.0,
               SENIOR = 30.0,
               CHILD = 20.0;
  // Perform a test for adult membership.
  cout << "Testing an adult membership...\n"
       << "Calling the showFees function with arguments "
       << ADULT << "and 10.\n";
  showFees(ADULT, 10);
  // Perform a test for senior citizen membership.
  cout << "\nTesting a senior citizen membership...\n"
       << "Calling the showFees function with arguments "
       << SENIOR << " and 10.\n";
  showFees(CHILD, 10);
  // Perform a test for child membership.
  cout << "\nTesting a child membership...\n"
       << "\nCalling the showFees function with arguments "
       << CHILD << " and 10.\n";
  showFees(CHILD, 10);
  return 0;
}
void showFees(double memberRate, int months)
{
  cout << "The total charges are $"
       << (memberRate * months) << endl;
}
