#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> get_network( int wires , int stages )
{
    vector<string> v;
    string input;
    for ( int i = 0 ; i < wires ; i++ )
    {
        cin >> input;
        v.push_back(input);
        while ( input.size() < v.size() )
            v[i] = v[i] + '-';
    }
    return v;
}

vector<int> get_numbers( int wires )
{
    int number;
    vector<int> numbers;
    for(int i=0 ; i<wires ; i++)
    {
        cin >> number;
        numbers.push_back(number);
    }
    return numbers;
}

void show_vector( vector<string> v )
{
    for ( int i = 0 ; i < v.size() ; i++ )
        cout << v[i] << endl ;
}

bool IsValid( vector<string> v )
{
    int columns=v[0].size();
    int rows=v.size();

    for ( int i=0 ; i<columns ; i++ )
    {
        for ( int j=0 ; j<rows ; j++ )
        {
            if ( v[j][i]=='-')
                continue;

            int counter=0;
            for ( int k=0 ; k<rows ; k++ )
            {
                if(v[k][i]==v[j][i])
                    counter++;
            }

            if ( counter != 2 )
                return false;

        }
    }
    return true;
}

void Swap( int& a , int& b )
{
    int temp = a;
    a = b;
    b = temp;
}

vector<int> Apply( vector<string> network , vector<int> numbers )
{
    int columns = network[0].size();
    int rows = network.size();

    for ( int i=0 ; i<columns ; i++ )
    {
        for ( int j=0 ; j<rows ; j++ )
        {
            if ( network[j][i] == '-' )
                continue;

            for ( int k=j+1 ; k<rows ; k++ )
            {
                if( network[k][i] == network[j][i] && numbers[j] > numbers[k] )
                {
                    Swap( numbers[j] , numbers[k] );
                    cout << "--->" << k << " & " << j << "  Swaped." << "\n";
                }
            }


        }
    }
    return numbers;
}

int main()
{
    int wires;
    int stages;
    vector<string> network;
    vector<int> numbers;

    cin >> wires;
    cin >> stages;

    network = get_network(wires,stages);
    numbers = get_numbers(wires);

    cout << "\n\n";

    cout << "IsValid? = " << IsValid(network);
    cout << "\n\n";

    numbers = Apply( network , numbers );

    cout << "\n\n";

    for( int i=0; i<wires ; i++)
        cout << numbers[i] << " " ;
}
