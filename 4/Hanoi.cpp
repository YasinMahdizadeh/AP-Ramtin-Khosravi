#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
vector<int> b;
vector<int> c;
/*	
vector<int> initialize( vector<int> v , int n)
{
	for ( int i = 1 ; i <= n ; i++ )
		v.push_back(i);
		
	return v;
}
*/
void Show_Peg(vector<int> v)
{
	for( int i = 0 ; i < v.size() ; i++ )
			cout << v[i] << " ";
		cout << endl;
}

void Show_Pegs()
{
	cout << endl;
	cout << "A = ";
	Show_Peg(a);	
	cout << "B = ";
	Show_Peg(b);	
	cout << "C = ";
	Show_Peg(c);
}

void Move(vector<int>& from , vector<int>& to)
{
	to.push_back(from.back());
	from.pop_back();
	Show_Pegs();
	cout << "hey!" << endl ;

}

void Hanoi(vector<int> a, vector<int> b, vector<int> c, int disks)
{
	if ( disks == 1 )
		Move ( a , b );
	else
	{
		Hanoi ( a , c , b , disks - 1 );
		Move ( a , b );
		Hanoi ( c , b , a , disks - 1 );
	}
}

int main()
{	
	int n;
	
	cout << "Please Enter the Number of Disks: ";
	cin >> n;
	
	for ( int i = n ; i > 0 ; i-- )
		a.push_back(i);
		
	//a = initialize(a,n);
	//Show_Pegs();
	//Move(a,b);
	Hanoi(a,b,c,n);
}
