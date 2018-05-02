#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int> > td(4);
  td[0].push_back(45);
  td[0].push_back(23);
  cout << td[0][1] << endl;
}
