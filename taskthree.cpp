#include <iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
    char type;
    float price;

    cout << "Enter Price of the vehicle: ";
    cin >> price;
    cout << "Enter Type of the vehicle (M,E,S,V,T): ";
    cin >> type;
    float result;
    result = taxCalculator(type, price);
    float result2 = taxCalculator(type, price);
    cout << "The final price on a vehicle of type " << type << " after adding the tax is " << result2 << "." << endl;
    cout << "with " << type << " replace by the vehicle type and " << result << " with the final price.";
}
float taxCalculator(char type, float price)
{
    float taxAmount;
    float finalPrice;
    if (type == 'M')
    {
        taxAmount = (price * 0.06);
        finalPrice = price + taxAmount;
        return finalPrice;
        return taxAmount;
    }
    if (type == 'E')
    {
        taxAmount = (price * 0.08);
        finalPrice = price + taxAmount;
        return finalPrice;
        return taxAmount;
    }

    if (type == 'S')
    {
        taxAmount = (price * 0.1);
        finalPrice = price + taxAmount;
        return finalPrice;
        return taxAmount;
    }
    if (type == 'V')
    {
        taxAmount = (price * 0.12);
        finalPrice = price + taxAmount;
        return finalPrice;
        return taxAmount;
    }
    if (type == 'T')
    {
        taxAmount = (price * 0.15);
        finalPrice = price + taxAmount;
        return finalPrice;
        return taxAmount;
    }
}
