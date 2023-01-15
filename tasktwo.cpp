#include <iostream>
using namespace std;
void function(float length, float width, float height, string outputUnit);
main()
{
    float length, width, height;
    string outputUnit;
    cout << "Enter length in metres: ";
    cin >> length;
    cout << "Enter width in metres: ";
    cin >> width;
    cout << "Enter height in metres: ";
    cin >> height;
    cout << "Enter output Unit (millimeters,centimeters,meters,kilometers): ";
    cin >> outputUnit;
    function(length, width, height, outputUnit);
}
void function(float length, float width, float height, string outputUnit)
{
    float volume;
    if (outputUnit == "millimeters")
    {
        float length2, width2, height2;
        length2 = length * 1000;
        width2 = width * 1000;
        height2 = height * 1000;
        volume = (((length2 * width2) * height2) / 3);
        cout << "Volume of pyramid in cubic millimeters is " << volume;
    }
    if (outputUnit == "centimeters")
    {
        float length2, width2, height2;
        length2 = length * 100;
        width2 = width * 100;
        height2 = height * 100;
        volume = (((length2 * width2) * height2) / 3);
        cout << "Volume of pyramid in cubic centimeters is " << volume;
    }
    if (outputUnit == "kilometers")
    {
        float length2, width2, height2;
        length2 = length * 0.001;
        width2 = width * 0.001;
        height2 = height * 0.001;
        volume = (((length2 * width2) * height2) / 3);
        cout << "Volume of pyramid in cubic kilometers is " << volume;
    }
    if (outputUnit == "meters")
    {
        volume = (((length * width) * height) / 3);
        cout << "Volume of pyramid in cubic meters is " << volume;
    }
}
