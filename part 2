#include <iostream>
using namespace std;

int main()
{
 int memory[100]; //Making it 100, since simpletron contains a 100 word mem.

 int operationCode; //taking the rest of these variables straight out of the book seeing as how they were italisized.

 int operand;

 int accumulator = 0; // the special register is starting at 0

 int j;

 for (j = 0; j < 100; j++ ) //Simply stating that for int j is = to 0, j must be less than 100 because that is the memory limit, and for every pass-through, increment j.
  memory[j] = 0;


 // This is for part a, it will take in positive variables in a sent-controlled loop and compute + print their sum. Variables from example in text.
 memory [00] = 1010;

 memory [01] = 2009;

 memory [02] = 3008;

 memory [03] = 2109;

 memory [04] = 1109;

 memory [05] = 4300;

 memory [06] = 1009;

 j = 0; //Makes the variable j start at 0.

 while ( true )
 {

  operand = memory[ j ]%100; // Finds the op codes from the limit on the memory (100)
  operationCode = memory[ j ]/100;

  //using a switch loop to set up the loops for the cases
  switch ( operationCode ){
   case 1: //reads a variable into a word from loc. Enter in -1 to exit
    cout <<"\n Input a positive variable:  ";
    cin >> memory[ operand ]; break;

   case 2: // takes a word from location
    cout << "\n\nThe content at location " << operand   << "is " << memory[operand]; break;

   case 3:// loads
    accumulator = memory[ operand ]; break;

   case 4: //stores
    memory[ operand ] = accumulator; break;

   case 5: //adds
    accumulator = accumulator + memory[ operand ]; break;


   case 6: // subtracts
    accumulator = accumulator - memory[ operand ]; break;

   case 7: //divides
    accumulator = accumulator / (memory[ operand ]); break;

   case 8: // multiplies
    accumulator = accumulator*memory [ operand ]; break;

   case 9: // Branches to location
    j = -1; break;

   case 10: //branches if acc. is < 0
    if (accumulator < 0)
    j = 5; 
    break;

   case 11: //branches if acc = 0
    if (accumulator == 0)
     j = 5; 
    break;

   case 12: // Program ends
    exit(0); break;
 }
 j++;
 }
return 0;
}
