#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

vector<int> Input()
{
	
} 

int main()
{
	//v = Input();
	int input;
	while ( cin >> input )
		v.push_back(input);
		
	for ( int i = 0 ; i < v.size() ; i++ )
		cout << v[i] << " ";
}
