/******************************************************************************

Greg McGlathery
CS 318 Warm-Up Programs
Currency: This program converts U.S. dollars to various other currencies. 

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

ofstream outfile;

int main()
{
    outfile.open("results.txt");
    
    const float US_DOLLAR = 100.0;          //Constant floats for currency rates
    const float ZAM_PER_DOLLAR = .076;
    const float BEL_PER_DOLLAR = .5;
    const float HK_PER_DOLLAR = .13;
    
    outfile << fixed << setprecision(2);
    
/*******************************************************************************
 * Assuming you use $100.00 U.S. currency, this program will convert your U.S.
 * Dollars to Zambian Kwacha, Belize Dollars, and Hong Kong Dollars. 
 * ****************************************************************************/
    
    outfile << "100 U.S. dollars to Zambian Kwacha is: " << "$" << US_DOLLAR/ZAM_PER_DOLLAR << endl;
    outfile << "100 U.S. dollars to Belize Dollars is: " << "$" << US_DOLLAR/BEL_PER_DOLLAR << endl;
    outfile << "100 U.S. dollars to Hong Kong Dollars is: " << "$" << US_DOLLAR/HK_PER_DOLLAR << endl;

    return 0;
}
