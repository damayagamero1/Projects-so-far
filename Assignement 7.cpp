#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
/*Functions related to the modules posted within this Repository as modular
 Linked on resource files folder*/
using namespace std;
void HotelPrice();
void StarFunctions();
void CalendarCalc();
void CalcMenu();
void ArraysProg();
void VectorProg();

int main()
{
    int MainMenuC,secmenC;
    do
    {
        cout << "\nWelcome to the main Menu please select any of the programs you would like to run\n\n"
            << "1.Hotel Price Calculator\n\n"
            << "2.Star Functions And Games\n\n"
            << "3.Calendar Calculator\n\n"
            << "4.Calculator\n\n"
            << "5.Array programs\n\n"
            << "6.Vector programs\n\n"
            << "7.Exit\n\n";
        cin >> MainMenuC;
        while (MainMenuC < 1 || MainMenuC>7)
        {
            cout << "PLease place a valid input from the menu\n\n";
            cin >> MainMenuC;
        }
        switch (MainMenuC)
        {
        case 1: HotelPrice();
            break;
        case 2:  StarFunctions();
            break;
        case 3: CalendarCalc();
            break;
        case 4: CalcMenu();
            break;
        case 5:  ArraysProg();
            break;
        case 6: VectorProg();
            break;
        default:
            break;
        }
        if (MainMenuC != 7)
        {
            cout << "\n\nDo you want to cotinue?\n\n"
                << "1.Yes\n\n"
                << "2.No\n\n";
            cin >> secmenC;
        }
        while (secmenC > 2 || secmenC < 1)
        {
            cout << "PLease place a valid input from the menu\n\n";
            cin >> secmenC;
        }
        if (secmenC == 2)
            MainMenuC = 7;
        else;
    } while (MainMenuC != 7);
   return 0;
}



