#include "question3.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
    string proceed;

	cout<<"Do you want to run the program? Please press Y to proceed: ";
	cin>>proceed;

    while (proceed == "Y")
	{
		cout<<roll_die()<<"\n";

    	cout<<"Do you want to run the program? Please press Y to proceed: ";
	    cin>>proceed;
    }
    
    return 0;
}