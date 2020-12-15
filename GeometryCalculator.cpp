/******************************************************************************
Greg McGlathery
CS318 Warm-Up Programs
Geometry Calculator: This program will display a menu allowing the user to find
the area of a circle, rectangle, and triangle.
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

ofstream outfile;

int main()
{
    outfile.open("results.txt");
    
    float radius, length, width, area, base, height;
    float const PI = 3.14159;
    int choice;
    
    
    cout << "Please select from the Menu: \n\n1. Calculate the Area of a circle\n2. Calculate the Area of a rectangle\n"
            "3. Calculate the Area of a triangle\n4. Quit" << endl << endl;
    cin >> choice;
    
   switch(choice) {
        case 1: cout << "\nPlease enter the radius of the Circle: ";
                cin >> radius;
                if(radius <= 0)
                {
                    cout << "Invalid Number.";
                    return 0;
                }
                area = PI * (pow(radius,2));
                outfile << "The area of a circle with radius: " << radius << " is: " << area << ".";
                break;
                
        case 2: cout << "\nPlease enter the width: ";
                cin >> width;
                cout << "\nPlease enter the Length: ";
                cin >> length;
                if (length <= 0 || width <= 0)
                {
                    cout << "Invalid Number.";
                    return 0;
                }
                area = length * width;
                outfile << "The area of a rectangle with length equal to " << length << " and width equal to: " << width << " is: " << area << ".";
                break;
                
        case 3: cout << "\nPlease enter the base: ";
                cin >> base;
                cout << "\nPlease enter the height: ";
                cin >> height;
                if (base <=0 || height <= 0)
                {
                    cout << "Invalid number.";
                    return 0;
                }
                area = base * height * .5;
                outfile << "\nThe area of a triangle with base equal to: " << base << " and height equal to: " << height << " is: " << area << ".";
                break;
        case 4: return 0;
        
        default: cout << "Invalid number.";
    }
    
    outfile.close();
    return 0;
}
