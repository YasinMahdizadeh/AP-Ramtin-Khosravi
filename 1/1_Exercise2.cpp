#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string names_list = "";
    cout << "Please enter names: ";
    while ( cin >> name )
    {
        names_list = names_list + "," + name;
    }
    names_list.erase(names_list.begin()+0);
    cout << names_list << endl;
}
