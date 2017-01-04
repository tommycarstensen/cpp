#include <iostream> // Angled brackets for system libraries
using namespace std; // cout is in namespace std

int main()
{
cout << "Please enter your first name (followed " << "by 'enter'):\n";
string first_name;
cin >> first_name;
cout << "Hello, " << first_name << '\n';
}
