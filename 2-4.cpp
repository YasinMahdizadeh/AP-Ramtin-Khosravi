#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<double> temps;
  double temp;
  while( cin >> temp )
    temps.push_back(temp);

    double sum = 0;
    cout << "\n" ;

   for ( int i = 0 ; i < temps.size() ; i++ )
    {
      cout << temps[i] << "  " ;
      sum += temps[i];
    }
    cout << "\n" ;

    cout << "mean: " << sum / temps.size();

}
