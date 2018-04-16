// // This program demonstrates the ++ and -- operators.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int num = 4;    // num starts out with 4.
//   // Display the value in num.
//   cout << "The variable num is " << num << endl;
//   cout << "I will now increment num.\n\n";
//   // Use postfix ++ to increment num.
//   num++;
//   cout << "The variable num is " << num << endl;
//   cout << "I will now increment num.\n\n";
//   // Use prefix ++ to increment num.
//   ++num;
//   cout << "Now the variable num is " << num << endl;
//   cout << "I will now decrement num.\n\n";
//   // Use postfix -- to decrement num.
//   num--;  
//   cout << "Now the variable num is " << num << endl;
//   cout << "I will now decrement num.\n\n";
//   // Use prefix -- to decrement num.
//   --num;
//   cout << "Now the variable num is " << num << endl;
//   return 0;
// } 
// // This program demonstrates the prefix and postfix
// // modes of the increment and decrement operators.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int num = 4;
//   cout << num << endl;      // Displays 4
//   cout << num++ << endl;    // Displays 4, then adds 1 to num
//   cout << num << endl;      // Displays 5
//   cout << ++num << endl;    // Adds 1 to num, then displays 6
//   cout << endl;             // Displays a blank line
//   cout << num << endl;      // Displays 6
//   cout << num-- << endl;    // Displays 6, then subtracts 1 from num
//   cout << num << endl;      // Displays 5
//   cout << --num << endl;    // Subtracts 1 from num, then displays 4
//   return 0;
// }
// // This program demonstrates a simple while loop.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int number = 0;
//   while (number < 5)
//   {
//     cout << "Hello\n";
//     number++;
//   }
//   cout << "That's all!\n";
//   return 0;
// }
// // This program assists a technician in the process
// // of checking a substance's temperature
// #include <iostream>
// using namespace std;
// int main()
// {
//   const double MAX_TEMP = 102.5;      // Maximum temperature
//   double temperature;                 // To hold the temperature
//   // Get the current temperature.
//   cout << "Enter the substance's Celsius temperature: ";
//   cin >> temperature;
//   // As long as necessary, instruct the technician
//   // to adjust the thermostat.
//   while (temperature > MAX_TEMP)
//   {
//     cout << "The temperature is too high. Turn the\n";
//     cout << "thermostat down wait 5 minutes.\n";
//     cout << "Then take the Celsius temperature again\n";
//     cout << "and enter it here: ";
//     cin >> temperature;
//   }
//   // Remind the tectnician to check the temperature
//   // again in 15 minutes.
//   cout << "The temperature is acceptable.\n";
//   cout << "Check it again in 15 minutes.\n";
//   return 0;
// }
// // This program calculates the number of soccer teams
// // that a youth league may create from the number of
// // available players. Input validation is demonstrated
// // with while loops.
// #include <iostream>
// using namespace std;
// int main()
// {
//   // Constants for minimum and maximum players
//   const int MIN_PLAYERS = 9,
//             MAX_PLAYERS = 15;
//   // Variables
//   int players,      // Number of avaiable players
//       teamPlayers,  // Number of desired players per team
//       numTeams,      // Number of teams
//       leftOver;     // Number of players left over
//   // Get the number of players per team.
//   cout << "How many players do you wish per team? ";
//   cin >> teamPlayers;
//   // Validate the input.
//   while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
//   {
//     // Eplain the error.
//     cout << "You should have at leasr "<< MIN_PLAYERS
//          << " but no more than " << MAX_PLAYERS << " per team.\n";
//     // Get the input again.
//     cout << "How many players do you wish per team? ";
//     cin >> teamPlayers;
//   }
//   // Get the number of players available.
//   cout << "How many players are available? ";
//   cin >> players;
//   // Validate the input.
//   while (players <= 0)
//   {
//     // Get the input again.
//     cout << "Please enter 0 or grater: ";
//     cin >> players;
//   }
//   // Calculate the number of teams.
//   numTeams = players / teamPlayers;
//   // Calculate the number of leftover players.
//   leftOver = players % teamPlayers;
//   // Display the result.
//   cout << "There will be " << numTeams << " teams with "
//        << leftOver << " players left over.\n";
//   return 0;
// }
// // This program displays a list of numbers and
// // their squares.
// #include <iostream>
// using namespace std;
// int main()
// {
//   const int MIN_NUMBER = 1,     // Starting number to square
//             MAX_PLAYER = 10;    // Maximum number to square
//   int num = MIN_NUMBER;         // Counter
//   cout << "Number Number Squared\n";
//   cout << "-------------------------\n";
//   while (num <= MAX_PLAYER)
//   {
//     cout << num << "\t\t" << (num * num) << endl;
//     num++ ;       // Increment the counter.
//   }
//   return 0;
// }
// // This program averages 3 test scores. It repeats as
// // many times as the user wishes.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int score1, score2, score3;   // Three scores
//   double average;               // Average score
//   char again;                   // To hold Y or N input
//   do
//   {
//     // Get three scores.
//     cout << "Enter 3 scores and I will average them: ";
//     cin >> score1 >> score2 >> score3;
//     // Calculate and display the average.
//     average = (score1 + score2 + score3) / 3.0;
//     cout << "the average is " << average << ".\n";
//     // Does the user want to average another set?
//     cout << "Do you want to average another set? (Y/N) ";
//     cin >> again;
//   } while (again == 'Y' || again == 'y');
//   return 0;
// }
// // This program displays a menu and asks the user to make a
// // selection. A do-while loop repeats the program until the
// // user selects item 4 from the menu.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   // Constants for menu choices
//   const int ADULT_CHOICE = 1,
//             CHILD_CHOICE = 2,
//             SENIOR_CHOICE = 3,
//             QUIT_CHOICE = 4;
//   // Constants for membership rates
//   const double ADULT = 40.0,
//                CHILD = 20.0,
//                SENIOR = 30.0;
//   // Variables
//   int choice;         // Menu choice
//   int months;         // Number of months
//   double charges;     // Monthly charges
//   // Set up mumeric output formatting.
//   cout << fixed << showpoint << setprecision(2);
//   do
//   {
//     // Display the menu.
//     cout << "\n\t\tHealth Club Menbership Menu\n\n"
//          << "1. Standard Adult Membership\n"
//          << "2. Child Membership\n"
//          << "3. Senior Citizen Membership\n"
//          << "4. Quit the Program\n\n"
//          << "Enter your choice: ";
//     cin >> choice;
//     // Validate the menu selection.
//     while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
//     {
//       cout << "Please enter a valid menu choice: ";
//       cin >> choice;
//     }
//     // Process the user's choice.
//     if (choice != QUIT_CHOICE)
//     {
//       // Get the number of months.
//       cout << "For how many months? ";
//       cin >> months;
//       // Respond to the user's menu selection
//       switch(choice)
//       {
//         case ADULT_CHOICE:
//             charges = months * ADULT;
//             break;
//         case CHILD_CHOICE:
//             charges = months * CHILD;
//             break;
//         case SENIOR_CHOICE:
//             charges = months * SENIOR;
//             break;
//       }
//       // Display the monthly charges.
//       cout << "The total charges are $"
//            << charges << endl;
//     }
//   } while (choice != QUIT_CHOICE);
//   return 0;
// }
// // This program displays the numbers 1 through 10 and
// // their squares.
// #include <iostream>
// using namespace std;
// int main()
// {
//   const int MIN_NUMBER = 1,     // Stating value
//             MAX_NUMBER = 10;    // Ending value
//   int num;
//   cout << "Number Number Squared\n";
//   cout << "-------------------------\n";
//   for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
//     cout << num << "\t\t" << (num * num) << endl;
//   return 0;
// }
// // This program demonstrates a user controlled for loop.
// #include <iostream>
// using namespace std;
// int main()
// {
//   int minNumber,    // Starting number to square
//       maxNumber;    // Maximum number to square
//   // Get the minimum and maximum values to display.
//   cout << "I will display a table of numbers and "
//        << "their squares.\n"
//        << "Enter the starting number: ";
//   cin >> minNumber;
//   cout << "Enter the ending number: ";
//   cin >> maxNumber;
//   // Display the table.
//   cout << "Number Number Squared\n"
//        << "--------------------------\n";
//   for (int num = minNumber; num <= maxNumber; num++)
//     cout << num << "\t\t" << (num * num) << endl;
//   return 0;
// }
// // This program converts the speeds 60 kph through
// // 130 kph (in 10 kph increments) to mph.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   // Constants for the speeds
//   const int START_KPH = 60,     // Starting speed
//             END_KPH = 130,      // Ending speed
//             INCREMENT = 10;     // Speed increment
//   // Constant for the conversion factor
//   const double CONVERSION_FACTOR = 0.6214;
//   // Variable
//   int kph;        // To hold speed in kph
//   double mph;     // To hold speed in mph
//   // Set the numeric output formatting.
//   cout << fixed << showpoint << setprecision(1);
//   // Display the table headings.
//   cout << "KPH\tMPH\n";
//   cout << "---------------\n";
//   // Display the speeds.
//   for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
//   {
//     // Calculate mph
//     mph = kph * CONVERSION_FACTOR;
//     // Display the speed in kph and mph.
//     cout << kph << "\t" << mph << endl;
//   }
//   return 0;
// }
// // This psrogram takes sales figures over a period of time
// // and calculates their total.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   int days;
//   double total = 0.0;
//   // Get the number of days.
//   cout << "For how many days do you have sales figures? ";
//   cin >> days;
//   // Get the sales for each day and acccumulate a total.
//   for (int count = 1; count <= days; count++)
//   {
//     double sales;
//     cout << "Enter the sales for day " << count << ": ";
//     cin >> sales;
//     total += sales;       // Accumulate the running total.
//   }
//   // Display the total sales.
//   cout << fixed << showpoint << setprecision(2);
//   cout << "The total sales are $" << total << endl;
//   return 0;
// }
// // This program calculates the total number of points a
// // soccer team has earned over a series of games. The user
// // enter a series of point values, then -1 when finished
// #include <iostream>
// using namespace std;
// int main()
// {
//   int game = 1,     // Game counter
//       points,       // To hold a number of points
//       total = 0;    // Accumulator
//   cout << "Enter the number of points your team has earned\n";
//   cout << "so far the season, then enter -1 when finished.\n\n";
//   cout << "Enter the points for game " << game << ": ";
//   cin >> points;

//   while (points != -1)
//   {
//     total += points;
//     game++;
//     cout << "Enter the points for game " << game << "; ";
//     cin >> points;
//   }
//   cout << "\nThe total poins are " << total << endl;
//   return 0;
// }
// // This program averages test scores. It ask the user for the
// // number of stuents and the number of test scores per student.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//   int numStudents,        // Number of students
//       numTests;           // Number of tests per student
//   double total,           // Accumulator for total scores
//          average;         // Average test score
//   // Set up numeric output formatting.
//   cout << fixed << showpoint << setprecision(1);
//   // Get the number of students.
//   cout << "This program averages test scores.\n";
//   cout << "For how many students do you have scores? ";
//   cin >> numStudents;
//   // Get the number of test scores per student.
//   cout << "How many test scores does each student have? ";
//   cin >> numTests;
//   // Determine each student's average score.
//   for (int student = 1; student <= numStudents; student++)
//   {
//     total = 0;
//     for (int test = 1; test <= numTests; test++)
//     {
//       double score;
//       cout << "Enter score " << test << " for ";
//       cout << "student " << student << ": ";
//       cin >> score;
//       total += score;
//     }
//     average = total / numTests;
//     cout << "the average score for student " << student;
//     cout << " is " << average << ".\n\n";
//   }
//   return 0;
// }
// // This program writes data to a file.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   ofstream outputFile;
//   outputFile.open("demofile.txt");
//   cout << "Now writing data to the file.\n";
//   // Write four names to the file.
//   outputFile << "Bach\n";
//   outputFile << "Beethoven\n";
//   outputFile << "Mozart\n";
//   outputFile << "Schubert\n";
//   // Close the file
//   outputFile.close();
//   cout << "Done.\n";
//   return 0;
// }
// // This program writes user input to a file.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   ofstream outputFile;
//   int number1, number2, number3;
//   // Open an output file.
//   outputFile.open("Numbers.txt");
//   // Get three numbers from the user.
//   cout << "Enter a number: ";
//   cin >> number1;
//   cout << "Enter another number: ";
//   cin >> number2;
//   cout << "One more time. Enter a number: ";
//   cin >> number3;
//   // Write the numbers to the file.
//   outputFile << number1 << endl;
//   outputFile << number2 << endl;
//   outputFile << number3 << endl;
//   cout << "The numbers were saved to a file.\n";
//   // Close the file
//   outputFile.close();
//   cout << "Done.\n";
//   return 0;
// }
// // This program writes user input to a file.
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//   ofstream outputFile;
//   string name1, name2, name3;
//   // Open an output file.
//   outputFile.open("Friends.txt");
//   // Get the names of three friends.
//   cout << "Enter the name of three friends.\n";
//   cout << "Friend #1: ";
//   cin >> name1;
//   cout << "Friend #2: ";
//   cin >> name2;
//   cout << "Friend #3: ";
//   cin >> name3;
//   // Write the names to the file.
//   outputFile << name1 << endl;
//   outputFile << name2 << endl;
//   outputFile << name3 << endl;
//   cout << "The names were saved to a file.\n";
//   // Close the file
//   outputFile.close();
//   return 0;
// }
// // This program reads data from a file.
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//   ifstream inputFile;
//   string name;
//   inputFile.open("Friends.txt");
//   cout << "Reading data from the file.\n";
//   inputFile >> name;      // Read name 1 from the file
//   cout << name << endl;   // Display name 1
//   inputFile >> name;      // Read name 2 from the file
//   cout << name << endl;   // Display name 2
//   inputFile >> name;      // Read name 3 from the file
//   cout << name << endl;   // Display name 3
//   inputFile.close();      // Close the file
//   return 0;
// }
// // This program reads numbers from a file.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   ifstream inFile;
//   int value1, value2, value3, sum;
//   // Open the file.
//   inFile.open("NumericData.txt");
//   // Read the three numbers from the file.
//   inFile >> value1;
//   inFile >> value2;
//   inFile >> value3;
//   // Close the file.
//   inFile.close();
//   // Calculate the sum of the numbers.
//   sum = value1 + value2 + value3;
//   // Display the three numbers.
//   cout << "Here are the numbers:\n"
//        << value1 << " " << value2
//        << " " << value3 << endl;
//   // Display the sum of the numbers.
//   cout << "Their sum is: " << sum << endl;
//   return 0;
// }
// // This program reads from a file.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   ofstream outputFile;      // File stream object
//   int numberOfDays;         // Number of days of sales
//   double sales;             // Sales amount for a day
//   // Get the number of days.
//   cout << "For how many days do you have sales? ";
//   cin >> numberOfDays;
//   // Open a file named Sales.txt.
//   outputFile.open("Sales.txt");
//   // Get the sales for each day and write it to the file.
//   for (int count = 1; count <= numberOfDays; count++)
//   {
//     // Get the sales for a day.
//     cout << "enter the sales for day "
//          << count << ": ";
//     cin >> sales;
//     // Write the sales to the file.
//     outputFile << sales << endl;
//   }
//   // Close the file.
//   outputFile.close();
//   cout << "Data written to Sales.txt\n";
//   return 0;
// }
// // This program reads data from a file.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   ifstream inputFile;
//   int number;
//   // Open the file.
//   inputFile.open("ListOfNumbers.txt");
//   // Read the numbers from the file and display them.
//   while (inputFile >> number)
//   {
//     cout << number << endl;
//   }
//   // CLose the file.
//   inputFile.close();
//   return 0;
// }
// // This program tests for file open errors.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   ifstream inputFile;
//   int number;
//   // Open the file.
//   inputFile.open("BadListOfNumbers.txt");
//   // If the file successfully opened, process it.
//   if (inputFile)
//   {
//     // Read the numbers from the file and display them.
//     while (inputFile >> number)
//     {
//       cout << number << endl;
//     }
//     // Close the file.
//     inputFile.close();
//   }
//   else
//   {
//     // Display an error message.
//     cout << "Error opening the file.\n";
//   }
//   return 0;
// }
// // This program lets the user enter a filename.
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//   ifstream inputFile;
//   string filename;
//   int number;
//   // Get the filename from the user.
//   cout << "Enter the filename: ";
//   cin >> filename;
//   // Open the file.
//   inputFile.open(filename);
//   // If the file successfully opened, process it.
//   if (inputFile)
//   {
//     // Read the numbers from the file and display them.
//     while (inputFile >> number)
//     {
//       cout << number << endl;
//     }
//     // Close the file.
//     inputFile.close();
//   }
//   else
//   {
//     // Display an error message.
//     cout << "Error opening the file.\n";
//   }
//   return 0;
// }
// // This program raises the user's number to the powers
// // of 0 through 10.
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//   double value;
//   char choice;
//   cout << "Enter a number: ";
//   cin >> value;
//   cout << "Thi program will raise " << value;
//   cout << " to the power of 0 through 10.\n";
//   for (int count = 0; count <= 10; count++)
//   {
//     cout << value << " raised to the power of ";
//     cout << count << " is " << pow(value, count);
//     cout << "\nEnter Q to quit or any other key ";
//     cout << "to continue. ";
//     cin >> choice;
//     if (choice == 'Q' || choice == 'q')
//       break;
//   }
//   return 0;
// }
// This program calculates the charges for DVD rentals.
// Every third DVD is free.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int dvdCount = 1;       // DVD counter
  int numDVDs;            // Number of DVDs rented
  double total = 0.0 ;     // Accumulator
  char current;           // Current release, Y or N
  // Get the number of DVDs.
  cout << "How many DVDs are being rented? ";
  cin >> numDVDs;
  // Determine the charges.
  do
  {
    if ((dvdCount % 3) == 0)
    {
      cout << "DVD #" << dvdCount << " is free!\n";
      continue;             // Immediately start the next iteration
    }
    cout << "Is DVD #" << dvdCount;
    cout << " a current release? (Y/N) ";
    cin >> current;
    if (current == 'Y' || current == 'y')
      total += 3.50;
    else
      total += 2.50;
  } while (dvdCount++ < numDVDs);
  // Display the total.
  cout << fixed << showpoint << setprecision(2);
  cout << "The total is $" << total << endl;
  return 0;
}