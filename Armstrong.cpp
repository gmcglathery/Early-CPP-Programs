/*******************************************************************************
 * Greg McGlathery
 * Armstrong Program
 * 
 * This program takes every number from 100 to 450 and determines whether or not
 * it is an Armstrong Number.  An Armstrong Number is a number such that the sum
 * of it's digits raised to the third power is equal to the sum of the number
 * itself.
 * 
 * ****************************************************************************/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ofstream outfile;

int main()
{
    outfile.open("armstrong.txt");

    if (!outfile)
    {
        cout << "Error opening file:" << endl;
    }
    
    int sum, num, rem, cnt, orignum;
    
    sum = 0;
    num = 100;
    rem = 0;
    cnt = 100;
    orignum = num;
    
    while (cnt < 450)
    {
        while(num != 0)
        {
            rem = num % 10;
            sum += pow(rem, 3);
            num /= 10;
        }
        
       if (orignum == sum)
       {
           outfile << orignum << " is an Armstrong number." << endl;
       }
        
        cnt++;
        orignum++;
        sum = 0;
        num = orignum;
    }
    
    outfile.close();
    
    return 0;
}
