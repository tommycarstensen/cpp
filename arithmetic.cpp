#include <iostream> // Angled brackets for system libraries
#include <math.h> // because of sqrt
using namespace std; // cout is in namespace std

int main()
{
cout << "Please enter a floating point number:\n";
double n; // double precision floating point variable
cin >> n;
cout << "n == " << n
<< "\nn+1 == " << n+1
<< "\n3*n == " << 3*n
<< "\nn+n == " << n+n
<< "\nn*n == " << n*n
<< "\nn/2 == " << n/2
<< "\nsqrt(n) == " << sqrt(n)
<< endl;
}
