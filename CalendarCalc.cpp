#include <iostream>
using namespace std;

void DaysM(int daysa);
void YearsM(int yearsa);
void MonthsM(int monthsa);
void WeeksM(int weeksa);

void CalendarCalc()
{
    int yearsA, monthsA, weeksA, daysA;

    cout << "Please input the Amount of years you would like to measure => ",
        cin >> yearsA;
    cout << endl;
    cout << endl;
    while (yearsA < 0)
    {
        cout << "please input a value higher than 0 => ", cin >> yearsA;
    }
    cout << "How about months? => ", cin >> monthsA;
    cout << endl;
    while (monthsA < 0)
    {
        cout << "please input a value higher than 0 => ", cin >> monthsA;
    }
    cout << endl;
    cout << "Weeks? => ";
    cin >> weeksA;
    cout << endl;
    while (weeksA < 0)
    {
        cout << "please input a value higher than 0 => ", cin >> weeksA;
    }
    cout << endl;
    cout << "Days? => ";
    cin >> daysA;
    cout << endl;
    while (daysA < 0)
    {
        cout << "please input a value higher than 0 => ", cin >> daysA;
    }
    cout << endl;
    cout << endl;
    YearsM(yearsA);
    MonthsM(monthsA);
    WeeksM(weeksA);
    DaysM(daysA);
}
void YearsM(int yearsa)
{
    int monthsA, weeksA, daysA, totalY, totalM, totalW, totalD, totalH, totalMi, totalS;

    totalM = yearsa * 12;
    totalW = yearsa * 52;
    totalD = yearsa * 365;
    totalH = totalD * 24;
    totalMi = totalH * 60;
    totalS = totalMi * 60;
    cout << endl;
    cout << "===================================== For " << yearsa << " Years. =======================================\n";
    cout << endl << totalM << " Months" << endl;
    cout << endl << totalW << " Weeks" << endl;
    cout << endl << totalD << " Days" << endl;
    cout << endl << totalH << " Hours" << endl;
    cout << endl << totalMi << " Minutes" << endl;
    cout << endl << totalS << " Seconds" << endl;
    cout << "===========================================================================================" << endl;
}
void MonthsM(int monthsa)
{
    int totalY, totalM, totalW, totalD, totalH, totalMi, totalS;

    totalY = monthsa / 12;
    totalM = monthsa;
    totalW = monthsa * 4;
    totalD = monthsa * 30;
    totalH = totalD * 24;
    totalMi = totalH * 60;
    totalS = totalMi * 60;
    cout << "===================================== For " << monthsa << " Months. =======================================\n";
    cout << endl << totalY << " Years" << endl;
    cout << endl << totalM << " Months" << endl;
    cout << endl << totalW << " Weeks" << endl;
    cout << endl << totalD << " Days" << endl;
    cout << endl << totalH << " Hours" << endl;
    cout << endl << totalMi << " Minutes" << endl;
    cout << endl << totalS << " Seconds" << endl;
    cout << "===========================================================================================" << endl;

}
void WeeksM(int weeksa)
{
    int totalY, totalM, totalW, totalD, totalH, totalMi, totalS;

    totalY = weeksa / 52;
    totalM = weeksa / 4;
    totalW = weeksa;
    totalD = weeksa * 7;
    totalH = totalD * 24;
    totalMi = totalH * 60;
    totalS = totalMi * 60;
    if (totalM > 12)
    {
        totalM = 12;
    }
    cout << endl;
    cout << "===================================== For " << weeksa << " Weeks. =======================================\n";
    cout << endl << totalY << " Years" << endl;
    cout << endl << totalM << " Months" << endl;
    cout << endl << totalW << " Weeks" << endl;
    cout << endl << totalD << " Days" << endl;
    cout << endl << totalH << " Hours" << endl;
    cout << endl << totalMi << " Minutes" << endl;
    cout << endl << totalS << " Seconds" << endl;
    cout << "===========================================================================================" << endl;
}
void DaysM(int daysa)
{
    int totalY, totalM, totalW, totalD, totalH, totalMi, totalS;

    totalY = daysa / 365;
    totalM = daysa / 30;
    totalW = daysa / 4;
    totalD = daysa;
    totalH = totalD * 24;
    totalMi = totalH * 60;
    totalS = totalMi * 60;
    cout << endl;
    cout << "===================================== For " << daysa << " Days. =======================================\n";
    cout << endl << totalY << " Years" << endl;
    cout << endl << totalM << " Months" << endl;
    cout << endl << totalW << " Weeks" << endl;
    cout << endl << totalD << " Days" << endl;
    cout << endl << totalH << " Hours" << endl;
    cout << endl << totalMi << " Minutes" << endl;
    cout << endl << totalS << " Seconds" << endl;
    cout << "===========================================================================================" << endl;
}






