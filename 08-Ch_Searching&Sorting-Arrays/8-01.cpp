// // This program demonstrates the searchList function, which
// // performs a linear search on an integer array.
// #include <iostream>
// using namespace std;

// // Function prototype
// int searchList(const int [], int, int);
// const int SIZE = 5;

// int main()
// {
//     int tests[SIZE] = {87, 75, 98, 100, 82}; 
//     int results;

//     // Search the array for 100.
//     results = searchList(tests, SIZE, 100);

//     // If searchList returned −1, then 100 was not found.
//     if (results == -1)
//         cout << "You did not earn 100 points on any test\n";
//     else
//     {
//         // Otherwise results contains the subscript of
//         // the first 100 found in the array.
//         cout << "You earned 100 points on test ";
//         cout << (results + 1) << endl;
//     }
//     return 0;
// }

// int searchList(const int list[], int numElems, int value)
// {
//     int index = 0;                    // Used as a subscript to search array
//     int position = -1;                // To record position of search value
//     bool found = false;               // Flag to indicate if the value was found

//     while (index < numElems && !found)
//     {
//         if (list[index] == value)     // If the value is found
//         {
//             found = true;             // Set the flag
//             position = index;         // Record the value's subscript
//         }
//         index++;                     // Go to the next element
//     }
//     return position;                  // Return the position, or −1
// }

// //*****************************************************************
// // The searchList function performs a linear search on an *
// // integer array. The array list, which has a maximum of numElems *
// // elements, is searched for the number stored in value. If the *
// // number is found, its array subscript is returned. Otherwise, *
// // −1 is returned indicating the value was not in the array. *
// //******************************************************************


// // This program demonstrates the binarySearch function, which
// // performs a binary search on an integer array.
// #include <iostream>
// using namespace std;

// // Function prototype
// int binarySearch(const int [], int, int);
// const int SIZE = 20;

// int main()
// {
//     // Array with employee IDs sorted in ascending order.
//     int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600};
//     int results;    // To hold the search results
//     int empID;      // To hold an employee ID

//     // Get an employee ID to search for.
//     cout << "Enter the employee ID you wish to search for: ";
//     cin >> empID;

//     // Search for the ID.
//     results = binarySearch(idNums, SIZE, empID);

//     // If results contains -1 the ID was not found.
//     if ( results == -1)
//         cout << "That number does not exist in the array. \n";
//     else
//     {
//         // Otherwise results contains the subscript of
//         // the specified employee ID in the array.
//         cout << "That ID is found at element " << results;
//         cout << " in the array.\n";
//     }
//     return 0;
// }

// //***************************************************************
// // The binarySearch function performs a binary search on an     *
// // integer array. array, which has a maximum of size elements,  * 
// // is searched for the number stored in value. If the number is * 
// // found, its array subscript is returned. Otherwise, −1 is     * 
// // returned indicating the value was not in the array.          * 
// //***************************************************************

// int binarySearch(const int array[], int size, int value)
// {
//     int first = 0,          // First array element
//         last = size - 1,    // Last array element
//         middle,             // Midpoint of search
//         position = -1;      // Position of search value
//     bool found = false;     // Flag

//     while (!found && first <= last)
//     {
//         middle = (first + last) / 2;        // Calculate midpoint
//         if (array[middle] == value)         // If value is found at mid
//         {
//             found = true;
//             position = middle;
//         }
//         else if (array[middle] > value)     // If value is in lower half
//             last = middle - 1;
//         else                                // If value is in upper half
//             first = middle + 1;
//     }
//     return position;   
// }

// // This program allows the user to enter a product number
// // and then displays the title, description, and price of
// // that product.
// #include <iostream>
// #include <string>
// using namespace std;

// const int NUM_PRODS = 9;        // The number of products produced
// const int MIN_PRODNUM = 914;    // The lowest product number
// const int MAX_PRODNUM = 922;    // The highest product number

// // Function prototypes
// int getProdNum();
// int binarySearch(const int [], int, int);
// void displayProd(const string [], const string [], const double [], int);

// int main()
// {
//     // Array of product IDs
//     int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 921, 922};
//     // Array of product titles
//     string title[NUM_PRODS] = {"Six Steps to Leadership", "Six Steps to Leadership", "The Road to Excellence", "Seven Lessons of Quality", "Seven Lessons of Quality", "Seven Lessons of Quality", "Teams Are Made, Not Born", "Leadership for the Future", "Leadership for the Future"};
//     // Array of product descriptions
//     string description[NUM_PRODS] = {"Book", "Audio CD", "DVD", "Book", "Audio CD", "DVD", "Book", "Book", "Audio CD"};
//     // Array of product prices
//     double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95};

//     int prodNum;        // To hold a product number
//     int index;          // To hold search results
//     char again;         // To hold a Y or N answer

//     do
//     {
//         // Get the desired product number.
//         prodNum = getProdNum();
//         // Search for the product number.
//         index = binarySearch(id, NUM_PRODS, prodNum);
//         // Display the results of the search.
//         if (index == -1)
//             cout << "That product number was not found.\n";
//         else
//             displayProd(title, description, prices, index);
//         // Does the user want to do this again?
//         cout << "Would you like to look up another product? (y/n) ";
//         cin >> again;
//     } while (again == 'y' || again == 'Y');
//     return 0;
// }

// //*************************************************** 
// // Definition of getProdNum function                * 
// // The getProdNum function asks the user to enter a * 
// // product number. The input is validated, and when * 
// // a valid number is entered, it is returned.       * 
// //***************************************************

// int getProdNum()
// {
//     int prodNum;        // Product number
//     cout << "Enter the item's product number: ";
//     cin >> prodNum;
//     // Validate input
//     while (prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM)
//     {
//         cout << "Enter a number in the range of " << MIN_PRODNUM;
//         cout << " through " << MAX_PRODNUM << ".\n";
//         cin >> prodNum;
//     }
//     return prodNum;
// }

// //*************************************************************** 
// // Definition of binarySearch function                          * 
// // The binarySearch function performs a binary search on an     * 
// // integer array. array, which has a maximum of numElems        * 
// // elements, is searched for the number stored in value. If the * 
// // number is found, its array subscript is returned. Otherwise, * 
// // −1 is returned indicating the value was not in the array.    * 
// //***************************************************************

// int binarySearch(const int array[], int numElems, int value)
// {
//     int first = 0,              // First array element
//         last = numElems - 1,    // Last array element
//         middle,                 // Midpoint of search
//         position = -1;          // Position of search value
//     bool found = false;         // Flag

//     while (!found && first <= last)
//     {
//         middle = (first + last) / 2;    // Calculate midpoint
//         if (array[middle] == value)     // If value is found mid
//         {
//             found = true;
//             position = middle;
//         }
//         else if (array[middle] > value) // If value is in lower half
//             last = middle - 1;
//         else                            // If value is in upper half
//             first = middle + 1;
//     }
//     return position;
// }

// //************************************************************ 
// // The displayProd function accepts three arrays and an int. * 
// // The arrays parameters are expected to hold the title,     * 
// // description, and prices arrays defined in main. The index * 
// // parameter holds a subscript. This function displays the   * 
// // information in each array contained at the subscript.     * 
// //************************************************************

// void displayProd(const string title[], const string desc[], const double price[], int index)
// {
//     cout << "Title: " << title[index] << endl;
//     cout << "Description: " << desc[index] << endl;
//     cout << "Price: $" << price[index] << endl;
// }


// // This program uses the bubble sort algorithm to sort an
// // array in ascending order.
// #include <iostream>
// using namespace std;

// // Function prototypes
// void sortArray(int [], int);
// void showArray(const int [], int);

// int main()
// {
//     // Array of unsorted values
//     int values[6] = {7, 2, 3, 8, 9, 1};

//     // Display the values.
//     cout << "The unsorted values are: \n";
//     showArray(values, 6);

//     // Sort the values.
//     sortArray(values, 6);

//     // Display them again.
//     cout << "The sorted values are: \n";
//     showArray(values, 6);
//     return 0;
// }

// //***********************************************************
// // Definition of function sortArray                         *
// // This function performs an ascending order bubble sort on *
// // array. size is the number of elements in the array.      *
// //***********************************************************

// void sortArray(int array[], int size)
// {
//     bool swap;
//     int temp;

//     do
//     {
//         swap = false;
//         for (int count = 0; count < (size - 1); count++)
//         {
//             if (array[count] > array[count + 1])
//             {
//                 temp = array[count];
//                 array[count] = array[count + 1];
//                 array[count + 1] = temp;
//                 swap = true;
//             }
//         }
//     } while (swap);
// }

// //*************************************************************
// // Definition of function showArray.                          *
// // This function displays the contents of array. size is the  *
// // number of elements.                                        *
// //*************************************************************

// void showArray(const int array[], int size)
// {
//     for (int count = 0; count < size; count++)
//         cout << array[count] << " ";
//     cout << endl;
// }



// // This program uses the selection sort algorithm to sort an
// // array in ascending order.
// #include <iostream>
// using namespace std;

// // Function prototypes
// void selectionSort(int [], int);
// void showArray(const int [], int);

// int main()
// {
//     // Define an array with unsorted values
//     const int SIZE = 6;
//     int values[SIZE] = {5, 7, 2, 8, 9, 1};

//     // Display the values.
//     cout << "The unsorted values are\n";
//     showArray(values, SIZE);

//     // Sort the values.
//     selectionSort(values, SIZE);

//     // Display the values again.
//     cout << "The sorted values are\n";
//     showArray(values, SIZE);
//     return 0;
// }

// //**************************************************************
// // Definition of function selectionSort.                       *
// // This function performs an ascending order selection sort on *
// // array. size is the number of elements in the array.         *
// //**************************************************************

// void selectionSort(int array[], int size)
// {
//     int startScan, minIndex, minValue;
//     for (startScan = 0; startScan < (size - 1); startScan++) 
//     {
//         minIndex = startScan;
//         minValue = array[startScan];
//         for(int index = startScan + 1; index < size; index++)
//         {
            
//             if (array[index] < minValue) 
//             {
//                 minValue = array[index];
//                 minIndex = index; 
//             }
//         }
//         array[minIndex] = array[startScan];
//         array[startScan] = minValue;
//     }
// }
// //************************************************************** 
// // Definition of function showArray.                           * 
// // This function displays the contents of array. size is the   * 
// // number of elements.                                         * 
// //**************************************************************

// void showArray(const int array[], int size) 
// {
//     for (int count = 0; count < size; count++) cout << array[count] << " ";
//         cout << endl; 
// }




// // This program produces a sales report.
// #include <iostream>
// #include <iomanip>
// using namespace std;

// // Function prototypes
// void calcSales(const int [], const double [], double [], int);
// void showOrder(const double [], const int [], int);
// void dualSort(int [], double [], int);
// void showTotals(const double [], const int [], int);

// // NUM_PRODS is the number of products produced.
// const int NUM_PRODS = 9;

// int main()
// {
//     // Array with product ID numbers
//     int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 921, 922};

//     // Array with number of units sold for each product
//     int units[NUM_PRODS] = {842, 416, 127, 514, 437, 269, 97, 492, 212};

//     // Array with products prices
//     double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95};

//     // Array to hold the computed sales amounts
//     double sales[NUM_PRODS];

//     calcSales(units, prices, sales, NUM_PRODS);

//     // Sort the elements in the sales array in descending
//     // order and shuffle the ID numbers in the id array to
//     // keep them in parallel.
//     dualSort(id, sales, NUM_PRODS);

//     // Set the numeric output formatting.
//     cout << setprecision(2) << fixed << showpoint;

//     // Displays the products and sales amounts.
//     showOrder(sales, id, NUM_PRODS);

//     // Displays total units sold and total sales.
//     showTotals(sales, units, NUM_PRODS);
//     return 0;
// }

// //****************************************************************
// // Definition of calcSales. Accepts units, prices, and sales     *
// // arrays as arguments. The size of these arrays is passed       *
// // into the num parameter. This function calculates each         *
// // product's sales by multiplying its units sold by each unit's  *
// // price. The result is stored in the sales array.               *
// //****************************************************************

// void calcSales(const int units[], const double prices[], double sales[], int num)
// {
//     for (int index = 0; index < num; index++)
//         sales[index] = units[index] * prices[index];
// }

// //***************************************************************
// // Definition of function dualSort. Accepts id and sales arrays *
// // as arguments. The size of these arrays is passed into size.  *
// // This function performs a descending order selection sort on  *
// // the sales array. The elements of the id array are exchanged  *
// // identically as those of the sales array. size is the number  *
// // of elements in each array.                                   *
// //***************************************************************

// void dualSort(int id[], double sales[], int size)
// {
//     int startScan, maxIndex, tempid;
//     double maxValue;

//     for (startScan = 0; startScan < (size - 1); startScan++)
//     {
//         maxIndex = startScan;
//         maxValue = sales[startScan];
//         tempid = id[startScan];
//         for (int index = startScan + 1; index < size; index++)
//         {
//             if (sales[index] > maxValue)
//             {
//                 maxValue = sales[index];
//                 tempid = id[index];
//                 maxIndex = index;
//             }
//         }
//         sales[maxIndex] = sales[startScan];
//         id[maxIndex] = id[startScan];
//         sales[startScan] = maxValue;
//         id[startScan] = tempid;
//     }
// }

// //****************************************************************
// // Definition of showOrder function. Accepts sales and id arrays *
// // as arguments. The size of these arrays is passed into num.    *
// // The function first displays a heading, then the sorted list   *
// // of product numbers and sales.                                 *
// //****************************************************************

// void showOrder(const double sales[], const int id[], int num)
// {
//     cout << "Product Number\tSales\n";
//     cout << "----------------------------------\n";
//     for (int index = 0; index < num; index++)
//     {
//         cout << id[index] << "\t\t$";
//         cout << setw(8) << sales[index] << endl;
//     }
//     cout << endl;
// }


// //*****************************************************************
// // Definition of showTotals function. Accepts sales and id arrays *
// // as arguments. The size of these arrays is passed into num.     *
// // The function first calculates the total units (of all          *
// // products) sold and the total sales. It then displays these     *
// // amounts.                                                       *
// //*****************************************************************

// void showTotals(const double sales[], const int units[], int num)
// {
//     int totalUnits = 0; double totalSales = 0.0;
//     for (int index = 0; index < num; index++) 
//     {
//         totalUnits += units[index];
//         totalSales += sales[index]; 
//     }

//     cout << "Total Units Sold: " << totalUnits << endl;
//     cout << "Total Sales: $" << totalSales << endl;
// }



// This program produces a sales report
// This version of the program uses STL vectors instead of arrays.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Function prototypes
void initVectors(vector<int> &, vector<int> &, vector<double> &);
void calcSales(vector<int>, vector<double>, vector<double> &);
void showOrder(vector<double>, vector<int>);
void dualSort(vector<int> &, vector<double> &);
void showTotals(vector<double>, vector<int>);

int main()
{
    vector<int> id;             // Product ID numbers
    vector<int> units;
    vector<double> prices;
    vector<double> sales;

    // Must provide an initialization routine.
    initVectors(id, units, prices);

    // Calculate each product's sales.
    calcSales(units, prices, sales);

    // Sort the elements in the sales array in descending
    // order and shuffle the ID numbers in the id array to
    // keep them in parallel.
    dualSort(id, sales);

    // Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    // Display the products and sales amounts.
    showOrder(sales, id);

    // Display total units sold and total sales.
    showTotals(sales, units);
    return 0;
}

//******************************************************************
// Definition of initVectors. Accepts id, units, and prices        *
// vectors as reference arguments. This function initializes each  *
// vector to a set of starting values.                             *
//******************************************************************

void initVectors(vector<int> &id, vector<int> &units, vector<double> &prices)
{
    // Initialize the id vector with the ID numbers 914 through 922.
    for (int value = 914; value <= 922; value++)
        id.push_back(value);

    // Initialize the units vector with data. units.push_back(842); units.push_back(416); units.push_back(127);
    units.push_back(842); 
    units.push_back(416); 
    units.push_back(127);
    units.push_back(514);
    units.push_back(437);
    units.push_back(269);
    units.push_back(97);
    units.push_back(492);
    units.push_back(212);

    // Initialize the prices vector.
    prices.push_back(12.95);
    prices.push_back(14.95);
    prices.push_back(18.95);
    prices.push_back(16.95);
    prices.push_back(21.95);
    prices.push_back(31.95);
    prices.push_back(14.95);
    prices.push_back(14.95);
    prices.push_back(16.95);
}

//****************************************************************
// Definition of calcSales. Accepts units, prices, and sales     *
// vectors as arguments. The sales vector is passed into a       *
// reference parameter. This function calculates each product's  *
// sales by multiplying its units sold by each unit's price. The *
// result is stored in the sales vector.                         *
//****************************************************************

void calcSales(vector<int> units, vector<double> prices, vector<double> &sales)
{
for (int index = 0; index < units.size(); index++)
    sales.push_back(units[index] * prices[index]);
}

//****************************************************************
// Definition of function dualSort. Accepts id and sales vectors  *
// as reference arguments. This function performs a descending    *
 // order selection sort on the sales vector. The elements of the *
 // id vector are exchanged identically as those of the sales     *
 // vector.                                                       *
 //****************************************************************


void dualSort(vector<int> &id, vector<double> &sales)
{
    int startScan, maxIndex, tempid, size; 
    double maxValue;
    size = id.size();

    for (startScan = 0; startScan < (size - 1); startScan++) 
    {
        maxIndex = startScan;
        maxValue = sales[startScan];
        tempid = id[startScan];

        for(int index = startScan + 1; index < size; index++) 
        {
            if (sales[index] > maxValue) 
            {
                maxValue = sales[index]; 
                tempid = id[index]; 
                maxIndex = index;
            } 
        }
        sales[maxIndex] = sales[startScan];
        id[maxIndex] = id[startScan];
        sales[startScan] = maxValue;
        id[startScan] = tempid;
    } 
}

//***************************************************************** 
// Definition of showOrder function. Accepts sales and id vectors * 
// as arguments. The function first displays a heading, then the * 
// sorted list of product numbers and sales. * 
//*****************************************************************

void showOrder(vector<double> sales, vector<int> id) 
{
    cout << "Product Number\tSales\n";
    cout << "----------------------------------\n"; 
    for (int index = 0; index < id.size(); index++) 
    {
        cout << id[index] << "\t\t$";
        cout << setw(8) << sales[index] << endl; 
    }
    cout << endl; 
}

//******************************************************************* 
// Definition of showTotals function. Accepts sales and id vectors  * 
// as arguments. The function first calculates the total units (of  * 
// all products) sold and the total sales. It then displays these   * 
// amounts.                                                         * 
//*******************************************************************

void showTotals(vector<double> sales, vector<int> units) 
{
    int totalUnits = 0; 
    double totalSales = 0.0;

    for (int index = 0; index < units.size(); index++) 
    {
        totalUnits += units[index];
        totalSales += sales[index]; 
    }
    cout << "Total Units Sold: " << totalUnits << endl;
    cout << "Total Sales: $" << totalSales << endl; 
}
