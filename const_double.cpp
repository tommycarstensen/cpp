#include <iostream> // Angled brackets for system libraries
#include <math.h> // because of sqrt
using namespace std; // cout is in namespace std

int main()
{
const double cm_per_inch = 2.54; // number of centimers per inch
int length = 1;
while (length != 0)
{
cout << "Please enter a length in inches: ";
cin >> length;
cout << length << "in =" << length/cm_per_inch;
}
}
