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

int Sum ( vector < int > v )
{
    if ( v.size() == 0 )
        return 0;
    else
    {
        int back = v.back();
        v.pop_back();
        return back + Sum(v);
    }
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
    cout << endl << "Sum = " << Sum ( numbers ) << endl ;
}
