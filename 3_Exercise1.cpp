#include <iostream>
#include <vector>
using namespace std;

vector<int> swap ( vector<int> v )
{
    vector<int> out;
    for ( int i = v.size()-1 ; i >= 0 ; i-- )
        out.push_back(v[i]);
    return out;
}

void show_vector ( vector<int> v )
{
    for ( int i = 0 ; i < v.size() ; i++ )
        cout << v[i] << " " ;
}

int main()
{
    int input;
    vector<int> v;
    while ( cin >> input )
        v.push_back(input);
    v = swap(v);
    show_vector(v);
    cout << endl;
}
