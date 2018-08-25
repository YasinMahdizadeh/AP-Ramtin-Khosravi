#include <iostream>
#include <vector>
using namespace std;

vector <int> Input()
{
    vector <int> v;
    int number;
    while ( cin >> number )
        v.push_back ( number ) ;
    return v;
}

int Sum ( vector < int > v , int index )
{
    if ( v.size() == index )
        return 0;
    else
        return v [ index ] + Sum ( v , index + 1 );
}
void Show_Vector ( vector <int> v )
{
    for ( int i = 0 ; i < v.size() ; i++ )
        cout << v[i] << " ";
}

int main()
{
    vector<int> numbers;
    numbers = Input();
    Show_Vector ( numbers );
    cout << endl << "Sum = " << Sum ( numbers , 0 ) << endl ;
}
