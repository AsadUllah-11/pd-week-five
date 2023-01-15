#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    float hours;
    float days;
    float workers;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter days: ";
    cin >> days;
    cout << "Enter Workers: ";
    cin >> workers;
    float days2 = (0.1 * days);
    float days3;
    days3 = days - days2;
    int totalHours;
    totalHours = ((workers * days3) * 10);

    float hours2;
    if (totalHours > hours)

    {

        hours2 = totalHours - hours;
        cout << "Yes! ";
        cout << hours2;
        cout << " hours left";
    }
    if (totalHours < hours)
    {
        hours2 = hours - totalHours;
        cout << "Not enough time!" << hours2 << " hours needed";
    }
}