// // This program displays the values of true and false states.
// #include <iostream>
// using namespace std;
// int main()
// {
//   bool trueValue, falseValue;
//   int x = 5, y = 10;

//   trueValue = x < y;
//   falseValue = y == x;

//   cout << "True is " << trueValue << endl;
//   cout << "False is " << falseValue << endl;
//   return 0;
// }
// // A program to calculate the area of a rectangle
// #include <iostream>
// using namespace std;
// int main()
// {
//   double length, width, area;
//   cout << "Enter the length of the rectangle: ";
//   cin >> length;
//   cout << "Enter thr width of the rectangle: ";
//   cin >> width;
//   area = length * width;
//   cout << "The area is: " << area << endl;
//   return 0;
// }
// // This program averages three test scores
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   const int HIGH_SCORE = 95;        // A high score is 95 or greater
//   int score1, score2, score3;       // To hold three test scores
//   double average;                   // To hold the average score
//   // Get the three scores.
//   cout << "Enter 3 test scores and I will average them: ";
//   cin >> score1 >> score2 >> score3;
//   // Calculate and display the average score.
//   average = (score1 + score2 + score3) / 3.0;
//   cout << fixed << showpoint << setprecision(1);
//   cout << "Your average is " << average << endl;
//   // If the average is a high score, congratulate the user.
//   if (average > HIGH_SCORE)
//     cout << "Congratulations! That's a high score!\n";
//   return 0;
// }
// // This program demonstrates how a misplaced semicolon
// // prematurely terminates an if statement.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int x = 15, y = 10;
//   cout << "x is " << x << " and y is " << y << endl;
//   if (x > y)
//    cout << "x is greater than y\n";
//   return 0;
// }
// // This program averages 3 test scores.
// // It demonstrates an if statement executing
// // a block of statements.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   const int HIGH_SCORE = 95;
//   int score1, score2, score3;
//   double average;

//   cout << "Enter 3 test scores and I will average them: ";
//   cin >> score1 >> score2 >> score3;
//   average = (score1 + score2 + score3) / 3;
//   cout << fixed << showpoint << setprecision(1);
//   cout << "Your average is " << average << endl;

//   if (average > HIGH_SCORE)
//   {
//     cout << "Congratulations!\n";
//     cout << "That's a high score.\n";
//     cout << "You deserve a pat on the back!\n";
//   }
// }
// // This program uses the modulus operator to determine
// // if a number is odd or even. If the number is evenly divisible
// // by 2, it is an even number. A remainder indicates it is odd.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int number;

//   cout << "Enter an integer and I will tell you if it\n";
//   cout << "is odd or even. ";
//   cin >> number;
//   if (number % 2 == 0)
//     cout << number << " is even.\n";
//   else
//     cout << number << " is odd.\n";
//   return 0;
// }
// // This program asks the user for two numbers, num1 and num2.
// // num1 is divided by num2 and the result is displayed.
// // Before the division operation, however, num2 is tested
// // for the value 0. If it contains 0, the division does not take place.
// #include <iostream>
// using namespace std;
// int main()
// {
//   double num1, num2, quotient;

//   cout << "Enter a number: ";
//   cin >> num1;
//   cout << "Enter another numer: ";
//   cin >> num2;
//   if (num2 == 0)
//   {
//     cout << "Division by zero is not possible.\n";
//     cout << "Please run the program again and enter\n";
//     cout << "a number other than zero.\n";
//   }
//   else
//   {
//     quotient = num1 / num2;
//     cout << "The qutient of " << num1 << " divided by ";
//     cout << num2 << " is " << quotient << ".\n";
//   }
//   return 0;
// }
// // This program demonstratesa the nested if statement.
// #include <iostream>
// using namespace std;
// int main()
// {
//   char employed, recentGrad;

//   cout << "Answer the following questions\n";
//   cout << "with either Y for Yes or ";
//   cout << "N for No.\n";
//   cout << "Are you employed? ";
//   cin >> employed;
//   cout << "Have you graduated from college ";
//   cout << "in the past two years? ";
//   cin >> recentGrad;

//   if (employed == 'Y')
//   {
//     if (recentGrad == 'Y')
//     {
//       cout << "You qualify for the special ";
//       cout << "interest rate.\n";
//     }
//   }
//   return 0;
// }
// // This program demonstrates the nested if statement.
// #include <iostream>
// using namespace std;
// int main()
// {
//   char employed,      // Currently employed, Y or N
//   recentGrad;         // Recent graduate, Y or N
//   // Is the user employed and a recent graduate?
//   cout << "Answer the following questions\n";
//   cout << "with either Y for Yes or ";
//   cout << "N for No.\n";
//   cout << "Are you employed? ";
//   cin >> employed;
//   cout << "Have you graduate from college ";
//   cout << "in the past two years? ";
//   cin >> recentGrad;
//   // Deter the user's laon qualifications.
//   if (employed == 'Y')
//   {
//     if (recentGrad == 'Y')    // Nest if
//     {
//       cout << "You qualify for the special ";
//       cout << "interest rate.\n";
//     }
//   }
//   return 0;
// }
// // This program uses an if/else if statement to assign a
// // letter grade (A, B, C, D, or F) to numeric test score.
// #include <iostream>
// using namespace std;
// int main()
// {
//   // Constants for grade thresholds
//   const int A_SCORE = 90,
//             B_SCORE = 80,
//             C_SCORE = 70,
//             D_SCORE = 60;
//   int testScore;    // To hold a numeric test score
//   // Get the numeric test score.
//   cout << "Enter your nemeric test score and I will\n"
//        << "tell you the letter grade you earned: ";
//   cin >> testScore;
//   // Determine the letter grade.
//   if (testScore >= A_SCORE)
//     cout << "Your grade is A.\n";
//   else if (testScore >= B_SCORE)
//     cout << "Your grade is B.\n";
//   else if (testScore >=C_SCORE)
//     cout << "Your grade is C.\n";
//   else if (testScore >=D_SCORE)
//     cout << "Your grade is D.\n";
//   else if (testScore >= 0)
//     cout << "Your grade is F.\n";
//   else
//     cout << "Invalid test score.\n";
//   return 0;
// }
// // This program displays a menu and ask the user to make a
// // selection. An if/else if statement determines which item
// // the user has chosen.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   int choice;         // To hold a menu choice
//   int months;         // To hold the number of months
//   double charges;     // To hold the monthly charges
//   // Constants for membership rates
//   const double ADULT = 40.0,
//                SENIOR = 30.0,
//                CHILD = 20.0;
//   // Constants for menu choices
//   const int ADULT_CHOICE = 1,
//             CHILD_CHOICE = 2,
//             SENIOR_CHOICE = 3,
//             QUIT_CHOICE = 4;
//   // Display the menu and get
//   cout << "\t\tHealth Club Membership Menu\n"
//        << "1. Standard Adult Membership\n"
//        << "2. Child Membership\n"
//        << "3. Senior Citizen Membership\n"
//        << "4. Quit the program\n\n"
//        << "Enter your choice: ";
//   cin >> choice;
//   // Set the numeric output formatting.
//   cout << fixed << showpoint << setprecision(2);
//   // Respond to the user's menu selection.
//   if (choice == ADULT_CHOICE)
//   {
//     cout << "For how many months? ";
//     cin >> months;
//     charges = months * ADULT;
//     cout << "The total charges are $" << charges << endl;
//   }
//   else if (choice == CHILD_CHOICE)
//   {
//     cout << "For how many months? ";
//     cin >> months;
//     charges = months * CHILD;
//     cout << "The total charges are $" << charges << endl;
//   }
//   else if (choice == SENIOR_CHOICE)
//   {
//     cout << "For how many monsths? ";
//     cin >> months;
//     charges = months * SENIOR;
//     cout << "The total charges are $" << charges << endl;
//   }
//   else if (choice == QUIT_CHOICE)
//   {
//     cout << "Program ending.\n";
//   }
//   else
//   {
//     cout << "The valid choices are 1 through 4. Run the\n"
//          << "program again and select one of those.\n";
//   }
//   return 0;
// }
// // This program demonstrates how characters can be
// // compared with the relational operators.
// #include <iostream>
// using namespace std;
// int main()
// {
//   char ch;
//   // Get a character from the user.
//   cout << "Enter a digit or a letter: ";
//   ch = cin.get();
//   // Determine what the user entered;
//   if (ch >= '0' && ch <='9')
//     cout << "You enter a digit.\n";
//   else if (ch >= 'A' && ch <= 'Z')
//     cout << "You enter an uppercase letter.\n";
//   else if (ch >= 'a' && ch <= 'z')
//     cout << "You enter an lowercase letter.\n";
//   else
//     cout << "That is not a digit or a letter.\n";
//   return 0;
// }
// // This program uses relational operators to compare a string
// // enter by the user with valid stereo part number.
// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;
// int main()
// {
//   const double PRICE_A = 249.0,
//                PRICE_B = 299.0;
//   string partNum;        // Holds a stereo part number
//   // Display available parts and get the user's selection
//   cout << "The stereo part numbers are:\n"
//        << "Boom Box: part number S-29A \n"
//        << "Shelf Model: part number S-29B \n"
//        << "Enter the part number of the stereo you\n"
//        << "wish to purchase: ";
//   cin >> partNum;
//   // Set the numeric output formatting
//   cout << fixed << showpoint << setprecision(2);
//   // Determine and display the correct price
//   if (partNum == "S-29A")
//     cout << "The price is $" << PRICE_A << endl;
//   else if (partNum == "S-29B")
//     cout << "The price is $" << PRICE_B << endl;
//   else
//     cout << partNum << " is not a valid part number.\n";
//   return 0;
// }
// // This program calculates a consultant's charges at $50
// // per hour, for a minimum of 5 hours. The ?: operator
// // adjusts hours to 5 if less than 5 hours were worked.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   const double PAY_RATE = 50.0;     // Hourly pay rate
//   const int MIN_HOURS = 5;          // Minimum billable hours
//   double hours,                     // Hours worked
//          charges;                   // Total charges
//   // Get the hours worked.
//   cout << "How many hours were worked? ";
//   cin >> hours;
//   // Determine the hours to charge for.
//   hours = hours < MIN_HOURS ? MIN_HOURS : hours;
//   // Calculate and display the charges.
//   charges = PAY_RATE * hours;
//   cout << fixed << showpoint << setprecision(2)
//        << "The charges are $" << charges << endl;
//   return 0; 
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//   int x, y = 5, z, temp, population, base = 10;
//   double hours, wages = 10, results;
//   cin >> x;
//   z = (x > y ? 1 : 20);
//   cout << z << endl;
//   cin >> temp;
//   population = (temp > 45 ? (base * 10) : (base * 2));
//   cout << population << endl;
//   cin >> hours;
//   cout << (hours > 40 ? wages *= 1.5 : wages *= 1)
//        << endl;
//   cin >> results;
//   cout << (results >= 0 ? "The result is positive" : "The result is negative")
//        << endl;
//   return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//   int k, j, x, y = 1, factor, count, total, sales = 10, num;
//   cin >> k;
//   if (k > 90)
//     j = 57;
//   else 
//     j = 12;
//   cout << j << endl;
//   cin >> x;
//   if (x >= 10)
//     factor = y * 22;
//   else
//     factor = y * 35;
//   cout << factor << endl;
//   cin >> count;
//   if (count == 1)
//     total += sales;
//   else
//     total += count * sales;
//   cout << total << endl;
//   cin >> num;
//   if ((num % 2) == 0)
//     cout << "Even\n";
//   else 
//     cout << "Odd\n";
//   return 0;
// }
// // The switch statement in this program tells the user something
// // he or she already knows: the data just entered!
// #include <iostream>
// using namespace std;
// int main()
// {
//   char choice;
//   cout << "Enter A, B, or C: ";
//   cin >> choice;
//   switch (choice)
//   {
//     case 'A': cout << "You enter A.\n";
//               break;
//     case 'B': cout << "You enter B.\n";
//               break;
//     case 'C': cout << "You enter C.\n";
//               break;
//     default: cout << "You did not enter A, B, or C!\n";
//   }
//   return 0;
// }
// // This program is carefully constructed to use the "fall through"
// // feature of the switch statement.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int modelNum;       // Model number
//   // Get a model number from the user.
//   cout << "Our TVs come in three models:\n";
//   cout << "The 100, 200, and 300. Which do you want? ";
//   cin >> modelNum;
//   // Display the model's features.
//   cout << "That model has the following features:\n";
//   switch (modelNum)
//   {
//     case 300: cout << "\tPicture-in-a-picture.\n";
//     case 200: cout << "\tStereo sound.\n";
//     case 100: cout << "\tRemote control.\n";
//               break;
//     default: cout << "You can only chose the 100,";
//              cout << "200, or 300.\n";
//   }
//   return 0;
// }
// // The switch statement in this program uses the "fall through"
// // feature to catch both uppercase and lowercase letters entered
// // by the user.
// #include <iostream>
// using namespace std;
// int main()
// {
//   char feedGrade;
//   // Get the desired grade of feed.
//   cout << "Our pet food is available in three grades:\n";
//   cout << "A, B, and C. Which do you want pricing for? ";
//   cin >> feedGrade;
//   // Display the price.
//   switch (feedGrade)
//   {
//     case 'a':
//     case 'A': cout << "30 cents per pound.\n";
//               break;
//     case 'b':
//     case 'B': cout << "20 cents per pound.\n";
//               break;
//     case 'c':
//     case 'C': cout << "10 cents per pound.\n";
//               break;
//     default: cout << "That is an invalid choice.\n";
//   }
//   return 0;
// }
// // This program uses a switch statement to determine
// // the item selected from a menu.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   int choice;       // To hold a menu choice
//   int months;       // To hold the number of months
//   double charges;   // To hold the minthls charges
//   // Constants for membership rates
//   const double ADULT = 40.0,
//                CHILD = 20.0,
//                SENIOR = 30.0;
//   // Constants for menu choices
//   const int ADULT_CHOICE = 1,
//             CHILD_CHOICE = 2,
//             SENIOR_CHOICE = 3,
//             QUIT_CHOICE = 4;
//   // Display the menu and get a choice.
//   cout << "\nHealth Club Membership Menu\n\n"
//        << "1. Standard Adult Membership\n"
//        << "2. Child Membership\n"
//        << "3. Senior Citizen Membership\n"
//        << "4. Quit the Program\n";
//   cin >> choice;
//   // Set the numeric output formatting.
//   cout << fixed << showpoint << setprecision(2);
//   // Respond to the user's menu selection.
//   switch (choice)
//   {
//     case ADULT_CHOICE:
//         cout << "For how many months? ";
//         cin >> months;
//         charges = months * ADULT;
//         cout << "The total charges are $" << charges << endl;
//         break;
//     case CHILD_CHOICE:
//         cout << "For how many months? ";
//         cin >> months;
//         charges = months * CHILD;
//         cout << "The total charges are $" << charges << endl;
//         break;
//     case SENIOR_CHOICE:
//         cout << "For how many months? ";
//         cin >> months;
//         charges = months * SENIOR;
//         cout << "The total charges are $" << charges << endl;
//         break;
//     case QUIT_CHOICE:
//         cout << "Program ending.\n";
//         break;
//     default:
//         cout << "The valid choices are 1 through 4. Run the\n"
//              << "program again and select one of those.\n";
//   }
//   return 0;
// }
// // This program demonstrates late variable definition
// #include <iostream>
// using namespace std;
// int main()
// {
//   // Constants for minimum income and years
//   const double MIN_INCOME = 35000.0;
//   const int MIN_YEARS = 5;
//   // Get the annual income.
//   cout << "What is your annual income? ";
//   double income;      // Variable definition
//   cin >> income;
//   // Get the number of years at the current job.
//   cout << "How many years have you worked at "
//        << "your current job? ";
//   int years;          // Variable definition
//   cin >> years;
//   // Determine the user's loan qualifications.
//   if (income >= MIN_INCOME || years > MIN_YEARS)
//     cout << "you qualify.\n";
//   else
//   {
//     cout << "You must earn at least $"
//          << MIN_INCOME << " or have been "
//          << "employed more than " << MIN_YEARS
//          << " years.\n";
//   }
//   return 0;
// }
// // This program demonstrates a variable defined in an inner block.
// #include <iostream>
// using namespace std;
// int main()
// {
//   // Constants for minimum income and years
//   const double MIN_INCOME = 35000.0;
//   const int MIN_YEARS = 5;
//   // Get the annual income.
//   cout << "What is your annual income? ";
//   double income;      // Variable definition
//   cin >> income;
//   if (income >= MIN_INCOME)
//   {
//     // Get the number of years at the current job.
//     cout << "How many years have you worked at "
//          << "your current job? ";
//     int years;          // Variable definition
//     cin >> years;
//     // Determine the user's loan qualifications.
//     if (income >= MIN_INCOME || years > MIN_YEARS)
//       cout << "you qualify.\n";
//     else
//     {
//       cout << "You must have been employes for\n"
//            <<  "more than " << MIN_YEARS
//            << " years to qualify.\n";
//     }
//   }
//   else
//   {
//     cout << "You must earn at least $" << MIN_INCOME
//          << " to qualify.\n";
//   }
//   return 0;
// }
// This program uses two variables with the name number.
#include <iostream>
using namespace std;
int main()
{
  // Define a variable named number.
  int number;
  cout << "Enter a number greater than 0: ";
  cin >> number;
  if (number > 0)
  {
    int number;     // Another variable named number.
    cout << "Now enter anohter number: ";
    cin >> number;
    cout << "The second number you entered was "
         << number << endl;
  }
  cout << "Your first number was " << number << endl;
  return 0;
}