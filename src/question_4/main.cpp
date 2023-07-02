#include "question4.h"

using std::cout;

int main()
{
    //when seconds since 1970 is 1570846218
    cout<<"The time of seconds since 1970 (1570846218) is: "<<get_hours(1570846218)<<":"<<get_minutes(1570846218)<<":"<<get_seconds(1570846218)<<"\n";

    //when seconds since 1970 is 1570875018
    cout<<"The time of seconds since 1970 (1570875018) is: "<<get_hours(1570875018)<<":"<<get_minutes(1570875018)<<":"<<get_seconds(1570875018)<<"\n";

    return 0;
}