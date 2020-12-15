//Greg McGlathery
//This is a simple program that shows investment gains over 60 years.
//Some random value was picked for APY.
//There are two columns.  Column 1 initial investment is 5,000.
//Column 2 initial investment is 10,000.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

ofstream outfile;

float futureValueFormula(float, float, float);
int printResult(float, float, float);
void labelPrint();

int main()
{
    outfile.open("results.txt");
    labelPrint();
    float year=5;
    while (year <= 60)
    {
        float f,r,z;
        r = futureValueFormula(5000, (.08/12), (year*12));
        z = futureValueFormula(10000, (.08/12), (year*12));
        printResult(year, r, z);
        year +=5;
    }
    return 0;
}

float futureValueFormula(float p, float i, float t)
{
    float f=p*(pow(1+i,t));
    return f;
}

int printResult(float year, float r, float z)
{
    outfile << int(year) << setw(33) << fixed << setprecision(2) << "$"<< r << setw(33) << "$" << z << endl;
}

void labelPrint()
{
    outfile << "Year" << setw(40) << "Account 1" << setw(38) << "Account 2" << endl;
    return;
}
