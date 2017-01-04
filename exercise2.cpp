#include <iostream> // Angled brackets for system libraries
#include<vector> // Otherwise use of undeclared identifier 'vector'

using namespace std; // cout is in namespace std

int main()
{

  string word;
  vector<string> words;

  while (cin >> word)
  {
      if (word == "finish") break;
      words.push_back(word); // push_back
    }

  cout << words.size() << " words" << endl;

  for(int i = 0; i < words.size(); i++)
    cout << i+1 << ' ' << words[i] << endl;

  return 0;

}
