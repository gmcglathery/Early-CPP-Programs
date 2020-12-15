//Greg McGlathery
//This program calculates the time it will take for an object to hit a surface

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

ofstream outfile;

float beforeSplat (float);
void labelPrint();
int printResult(int, float);

int main()
{
    outfile.open("Splat.txt");
    int dist = 12000;
    labelPrint();
    
    while (dist != 0)
    {
        beforeSplat(dist);
        printResult(dist, beforeSplat(dist));
        dist -= 500;
    }
    return 0;
}

float beforeSplat (float d)
{
    float t = sqrt((2*d) / 9.8);
    return t;
}

void labelPrint()
{
    outfile << "Meters Traveled" << setw(30) << "Time before SPLAT" << endl;
    return;
}

int printResult(int dist, float t)
{
    outfile << dist << setw(35) << t << endl;
}
