#include <iostream>
#include <vector>
using namespace std;

vector<int> Input()
{
    vector <int> input;
    int number;
    while ( cin >> number )
        input.push_back( number );
    return input;
}

void Show_Vector( vector<int> v )
{
    for ( int i = 0 ; i < v.size() ; i++ )
        cout << v[i] << " ";
}

int Min( vector<int> v )
{
    if ( v.size() == 1 )
        return v[0];
    else
    {
        int back = v.back();
        v.pop_back();
        if ( back > Min(v) )
            return Min(v);
        else
            return back;
    }
}

int main()
{
    vector<int> v;

    v = Input();
    Show_Vector(v);
    cout << "Minimum =" << Min(v) << endl;
}
