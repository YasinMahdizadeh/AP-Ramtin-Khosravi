#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<double> temps;
	double temp;
	
	while( cin >> temp )
		temps.push_back(temp);
	
	double sum;
	for( int i=0 ; i<temps.size(); i++ )
		sum += temps[i];
	cout << "Tempretures sum = " << sum;
	cout << "Mean Tempreture is: " << sum / temps.size();
	sort(temps.begin(),temps.end());
	cout << "Median Tempreture is: " << temps[temps.size()/2];
}
