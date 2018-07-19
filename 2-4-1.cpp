#include <iostream>
//#include <vector>
using namespace std;

int main()
{
	//vector<double> temps;
	double temps[5];
	double temp;
	
	for( int i=0 ; i<5 ; i++ )
		cin >> temps[i];
	
	double sum;
	for( int i=0 ; i<5 ; i++ )
		sum += temps[i];
	cout << sum;
}
