#include <iostream> // Angled brackets for system libraries
using namespace std; // cout is in namespace std

int main()
{
cout << "Please enter your first name and age\n";
string first_name; // string variable
int age; // integer variable
cin >> first_name >> age; // read values
cout << "Hello, " << first_name << " age " << age << '\n';
}
