//Greg McGlathery
//This is just a simple program to calculate the time it takes for an
//object to fall a certain distance over an amount of time.

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

ofstream outfile;

float fallingDistance (float, float);
int printResult(int, float);
void labelPrint();

int main()
{
    outfile.open("FallDistance.txt");
    float t = 1.0;
    float d, r;
    
    labelPrint();
    
    while (t <= 15)
    {
        r = fallingDistance(9.8, t);
        printResult(t, r);
        t++;
    }
    return 0;
}

float fallingDistance (float g, float t)
{
    float d = ((.5) * g) * pow(t, 2);
    return d;
}

int printResult(int t, float r)
{
    outfile << fixed << t << setw(35) << setprecision(1) << r << endl;
}

void labelPrint()
{
    outfile << "Time in Seconds" << setw(30) << "Distance in Meters" << endl;
    return;
}
