#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.1419;
double length;
double width;
double height;
double Bradius;
double radius;

int choice;	

double rectangle(double length, double width);
double circle(double radius);
double cylinder(double Bradius, double height);

int main ()
{
	do
	{
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "This program can caluclate the area of a rectangle, "
		 << "the area of a circle, or the volume of a cylinder." << endl;
	cout << "To run the program anter: " << endl;
	cout << "1: To find the area of a rectangle." << endl;
	cout << "2: To find the area of a circle." << endl;
	cout << "3: To find the volume of a cylinder." << endl;
	cout << "-1: To terminate the program." << endl;
	cin >> choice;
	cout << endl;
	

	switch (choice)
		{
			case 1:
				cout <<"Enter the length and the width "
					 <<"of the rectangle: " << endl;
				cin >> length >> width;
				cout << endl;
				
				cout << "Area = " << rectangle(length, width) << endl;
				break;
				
			case 2:
				cout <<"Enter the radius of the circle: " << endl;
				cin >> radius;
				cout << endl;
				
				cout << "Area = " << circle(radius) << endl;
				break;				
				
			case 3:
				cout <<"Enter the radius of the base and the "
					 <<"height of the cylinder: " << endl;
				cin >> Bradius >> height;
				cout << endl;
				
				cout << "Volume = " << cylinder(Bradius, height) << endl;
				break;

			default:
				cout << "Invalid choise!" << endl;
		}
	
	}
	while (choice != -1);
	
	return 0;
}
double rectangle(double length, double width)
{
	return length * width;
}
double circle(double radius)
{
	return PI * (radius * radius);
}
double cylinder(double Bradius, double height)
{
	return PI * (Bradius * Bradius )* height;
}


