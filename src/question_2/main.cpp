#include "question2.h"

using std::string;
using std::cout;
using std::cin;

double gpa;
string letter_grade;
string choice;

int main()
{
    cout<<"Please enter a gpa (0 - 4): ";
    cin>>gpa;

    do
    {
        if (gpa >= 0 && gpa <= 4)
        {
            letter_grade = gpa_to_letter_grade(gpa);
            cout<<"The letter grade of this gpa is: "<<letter_grade<<"\n";
        }
        else {cout<<"Invalid GPA value. Please enter again."<<"\n";}
        
        cout<<"Do you want to continue converting? (press y or Y to continue): ";
        cin>>choice;

        cout<<"Please enter a gpa (0 - 4): ";
        cin>>gpa;

    } while (choice == "y" || choice == "Y");

    return 0;
}