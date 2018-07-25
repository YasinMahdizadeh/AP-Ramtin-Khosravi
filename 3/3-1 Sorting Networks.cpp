#include <iostream>
using namespace std;

int isvalid( int a, int b , char matrix[][b])
{
}

//void Read_Input

int main()
{
    int wires;
    int stages;
    cout << "Please enter number of wires: ";
    cin >> wires;
    cout << "Please enter number of stages: ";
    cin >> stages;
    char matrix[wires][stages];

    ///////////////////////////////////// inputs the data

    for ( int i = 0 ; i < wires ; i++ )
    {
        for ( int j = 0 ; j < stages ; j++ )
        {
            cin >> matrix[i][j];
        }
    }

}
