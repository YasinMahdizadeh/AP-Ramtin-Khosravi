#include <iostream>
using namespace std;

int main()
{
    typedef float length;
    length l;
    cout << "Please Enter the length ( in Inches ): ";
    cin >> l;
    cout << "Your Entered length in centimeters is: " << l * 2.54 << endl;
}
