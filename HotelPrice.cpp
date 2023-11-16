#include <iostream>
using namespace std;
double BtaxClac(double btax, double prooms, double nrooms, double days);												// we work with the function in order to make any mathematical calculus so the final output can be displayed
double TipCalc(double ttotal, double tips, double nrooms, double days);
double TaxCalc(double atax, double pbtax, double tax, double tipt);
void HotelPrice()
{
	double PriceRooms, NumRooms, Days, Tax = 0.14, PriceBtax=0 , PriceAtax = 0, Tip = 5, TipTotal=0;
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
	BtaxClac(PriceBtax,PriceRooms,NumRooms,Days);
	cout << "Your total before Taxes Would be of $ " << PriceBtax << endl;
	TipCalc(TipTotal,Tip,NumRooms,Days);
	cout << "The recomended Gratuity by day woudl be of $ " << Tip << " per day & per room making a total of $ " << TipTotal << endl;
	TaxCalc(PriceAtax,PriceBtax,Tax,TipTotal);
	cout << "The final price Including taxes And Gratitude would be $ " << PriceAtax << endl;

	cout << endl;
}

	double BtaxClac(double btax, double prooms, double nrooms, double days)													// we work with the function in order to make any mathematical calculus so the final output can be displayed
	{
		btax = (prooms * nrooms) * days;
		return btax;
	}
	double TipCalc(double ttotal, double tips, double nrooms, double days)
	{
		ttotal = (tips * days) * nrooms; 
		return ttotal;
	}
	double TaxCalc(double atax, double pbtax, double tax, double tipt)
	{
		atax = ((pbtax * tax) + pbtax) + tipt; // Right here we calculate the Gratitude based by days and amount of rooms 
		return atax;

	}