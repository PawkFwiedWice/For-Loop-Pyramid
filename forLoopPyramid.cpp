//Tim
//Feb 28 2018
//Code Creates four different pyramids determined by user input:
//Exemplifies use of nested for-loops. See bottom for expected output

#include <iostream>
using namespace std;

int main()
{
   //init
   bool patternFlag = 1; //Data validation for user input: Loop while true

   //variables
   int row;              //Rows
   int column;           //Columns
   int upperLimit = 6;   //upper limit for output numbers: 1-6
   int lowLimit = 1;     //lower limit for output numbers: 1-6
   char pattern;         //User input to determine output pattern

   //inputs
   do
   {  //Data validation
      cout << "Enter the pattern you want to do: ";
      cin  >> pattern;

      switch (pattern)
      {
         case 'a':
         case 'A':
         case 'b':
         case 'B':
         case 'c':
         case 'C':
         case 'd':
         case 'D':
            patternFlag = 0;
         break;

         default:
            cout << "Error: invalid input! Please try again.\n" << endl;
         break;
      }
   } while (patternFlag == 1);

   //processing
   switch (pattern)
   {
      //pattern A
      case 'a':
      case 'A':

         cout << "\n--------PATTERN A---------" << endl;

         for (row=lowLimit; row <= upperLimit; row++)
         {
            for (column=lowLimit; column <= row; column++)
            {
               cout << column << " ";
            }
            
            cout << endl;
         }
      break;

      case 'b':
      case 'B':
         
         cout << "\n--------PATTERN B--------" << endl;
         
         for (row=upperLimit; row >= lowLimit; row--)
         {
            for (column=lowLimit; column <= row; column++)
            {
               cout << column << " ";
            }
            
            cout << endl;
         }
      break;

      case 'c':
      case 'C':
         
         cout << "\n--------PATTERN C---------" << endl;

         for (row=lowLimit; row <= upperLimit; row++)
         {
            for (column=row; column >= lowLimit; column--)
            {
               cout << column << " ";
            }
         
            cout << endl;
         }
      break;

      case 'd':
      case 'D':
         
         cout << "\n--------PATTERN D--------" << endl;

         for (row=upperLimit; row >= lowLimit; row--)
         {
            for (column=upperLimit; column >= row; column--)
            {
               cout << column << " ";
            }

            cout << endl;
         }
      break;

      default:
         cout << "\nError: Invalid input! " << endl;
      break;

   }

   cout << "\n***Exiting Program***" << endl;

   return 0;
}

// Enter the pattern you want to do: a
//
//  --------PATTERN A---------
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5
//  1 2 3 4 5 6
//
// ***Exiting Program***
//
// Enter the pattern you want to do: b
//
//  --------PATTERN B--------
//  1 2 3 4 5 6
//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1
// 
// ***Exiting Program***
//
// Enter the pattern you want to do: c
//
//  --------PATTERN C---------
//  1
//  2 1
//  3 2 1
//  4 3 2 1
//  5 4 3 2 1
//  6 5 4 3 2 1
//
// ***Exiting Program***
//
// Enter the pattern you want to do: d
//
//  --------PATTERN D--------
//  6
//  6 5
//  6 5 4
//  6 5 4 3
//  6 5 4 3 2
//  6 5 4 3 2 1
//
// ***Exiting Program***
