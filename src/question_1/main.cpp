#include "question1.h"
#include<string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    double celsius;
    string choice;

    do 
    {
        cout<<"Please enter the temperature in Celsius: ";
        cin>>celsius;

        cout<<"Temperature converted in Fahrenheit: "<<get_fahrenheit(celsius)<<"\n";

        cout<<"Do you want to continue converting? (press y or Y to continue): ";
        cin>>choice;

    } while (choice == "y" || choice == "Y");

    return 0;
}