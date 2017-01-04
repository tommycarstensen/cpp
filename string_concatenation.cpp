#include <iostream> // Angled brackets for system libraries
using namespace std; // cout is in namespace std

int main()
{
cout << "Please enter your first and second names\n";
string first;
string second;
cin >> first >> second; // read two strings
string name = first + ' ' + second; // concatenate strings
cout << "Hello, " << name << '\n';
}
