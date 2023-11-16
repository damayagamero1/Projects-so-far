#include <iostream>
using namespace std;
void HotelPrice()
{
    double PriceRooms, NumRooms, Days, Tax = 0.14, PriceBtax, PriceAtax, Tip = 5, TipTotal;
    cout << "Input:\n";
    cout << "--------------------\n";
    cout << "Price per room ";
    cin >> PriceRooms;
    while (PriceRooms < 0)									// Right here We set up a flag to catch any error and ask for valid input 
    {
        cout << endl;
        cout << "Please introduce a value higher than 0 ";
        cin >> PriceRooms;
    }
    cout << "\n";
    cout << "\n";
    cout << "Amount of rooms requested ";
    cin >> NumRooms;
    while (NumRooms < 0)									// Right here We set up a flag to catch any error and ask for valid input 
    {
        cout << endl;
        cout << "Please introduce a value higher than 0 ";
        cin >> NumRooms;
    }
    cout << "\n";
    cout << "\n";
    cout << "How many days will the costumer stay? ";
    cin >> Days;
    while (Days < 0)										// Right here We set up a flag to catch any error and ask for valid input 
    {
        cout << endl;
        cout << "Please introduce a value higher than 0 ";
        cin >> Days;
    }
    cout << "\n";
    cout << "\n";
    cout << "Taxes aplied on sale " << Tax << endl;
    cout << "_____________________________________" << endl;
    PriceBtax = (PriceRooms * NumRooms) * Days;
    TipTotal = (Tip * Days) * NumRooms;
    PriceAtax = ((PriceBtax * Tax) + PriceBtax) + TipTotal;
    cout << "Your total before Taxes Would be of $ " << PriceBtax << endl;
    cout << "The recomended Gratuity by day woudl be of $ " << Tip << " per day & per room making a total of $ " << TipTotal << endl;
    cout << "The final price Including taxes And Gratitude would be $ " << PriceAtax << endl;

    cout << endl;
}
