#include <iostream>
#include <string>
using namespace std;

int main()
{
	string previous = "";
	string current;
	while ( cin >> current )
	{
		if ( current == previous )
		{
			cout << "Repeated Word is: " << current << endl;
		}
		previous = current;
	}
}
