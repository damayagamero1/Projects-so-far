#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;
void StarsSquare();
void StarsPiramid();
void NumberSecuence();
void HeadsOrTails();
void NumOneToTen();
void MultTable();
void MultiplyFor();
void MultiplyWhile();
void FStep();
void SStep();
int Selection, ValueOne, ValueTwo, Rep, ExtraValue;

void StarFunctions()
{


	do
	{

		cout << "=============================================================================================================" << endl;
		cout << "\n                                        Welcome To the Main Menu." << endl;
		cout << "                                Please Choose one of the following options" << endl;
		cout << "\n1.Stars printed on same amount of rows and columns." << endl;
		cout << "\n2.Stars printed on a piramid based on number given" << endl;
		cout << "\n3.Number secuence from low to high to low, and high to low to high." << endl;
		cout << "\n4.Heads or tails game." << endl;
		cout << "\n5.One to ten random number." << endl;
		cout << "\n6.Multiplication Table." << endl;
		cout << "\n7.Exit." << endl;
		cout << "\n=============================================================================================================" << endl;
		cout << "\nSelection => ", cin >> Selection;

		while (Selection <= 0 || Selection > 7)
		{
			cout << "\n#######################################################Error############################################################" << endl;
			cout << "\n                                     Please place a valid Input form the menu." << endl;
			cout << "\n#######################################################Error############################################################" << endl;

			cout << "\nSelection => ", cin >> Selection;

		}



		switch (Selection)
		{
		case 1: StarsSquare();
			break;
		case 2: StarsPiramid();
			break;
		case 3: NumberSecuence();
			break;
		case 4: HeadsOrTails();
			break;
		case 5: NumOneToTen();
			break;
		case 6:MultTable();
		default:
			break;
		}
	} while (Selection != 7);

}

//Displays Stars based on rows and columns and display total stars
void StarsSquare()
{
	cout << "\n=============================================================================================================" << endl;
	cout << "\nPlease input a number of rows and columns you desire.\n";
	cout << "\n=============================================================================================================" << endl;
	cout << "\n => ", cin >> ValueOne;
	while (ValueOne < 0)
	{

		cout << "\n#######################################################Error############################################################" << endl;
		cout << "\n                                     Please place a valid input higher than 0" << endl;
		cout << "\n#######################################################Error############################################################" << endl;

		cout << "\nSelection => ", cin >> Selection;
	}
	for (int Rep = 1; Rep < ValueOne + 1; Rep++)
	{

		for (int Rep = 1; Rep < ValueOne + 1; Rep++)
		{
			cout << " * ";
		}
		cout << " " << Rep << endl;
	}
	ValueTwo = (ValueOne * ValueOne);
	cout << "\nYou Printed a total of " << ValueTwo << " stars.\n\n";
}

//Displays stars in increse and dicrese patern
void StarsPiramid()
{
	cout << "\n=============================================================================================================" << endl;
	cout << "\nPlease input a number of floors of your piramid\n";
	cout << "\n=============================================================================================================" << endl;
	cout << "\n => ", cin >> ValueOne;
	while (ValueOne < 0)
	{

		cout << "\n#######################################################Error############################################################" << endl;
		cout << "\n                                     Please place a valid input higher than 0" << endl;
		cout << "\n#######################################################Error############################################################" << endl;

		cout << "\nSelection => ", cin >> Selection;

	}

	ValueTwo = ValueOne;

	for (ValueTwo = 1; ValueTwo < ValueOne; ValueTwo++)
	{
		cout << endl;


		for (int Rep = 1; Rep < ValueTwo + 1; Rep++)
		{
			cout << " * ";
		}
		cout << ValueTwo;
	}
	for (ValueOne = ValueOne; ValueOne > 0; ValueOne--)
	{
		cout << endl;
		for (int Rep = 1; Rep < ValueOne + 1; Rep++)
		{
			cout << " * ";
		}

		cout << ValueOne;
	}
	cout << endl;
	cout << endl;
}
void FStep()
{
	for (ValueTwo = 1; ValueTwo < ValueOne; ValueTwo++)
	{
		cout << endl;


		for (int Rep = 1; Rep < ValueTwo + 1; Rep++)
		{
			cout << Rep;
		}
		cout << "  " << ValueTwo << endl;

	}
	for (ValueOne = ValueOne; ValueOne > 0; ValueOne--)
	{
		cout << endl;
		for (int Rep = 1; Rep < ValueOne + 1; Rep++)
		{
			cout << Rep;
		}
		cout << " " << ValueOne << endl;

	}
	cout << endl;
}
void SStep()
{
	cout << endl;
	for (ValueOne = ValueOne; ValueOne > 0; ValueOne--)
	{
		cout << endl;
		for (int Rep = 1; Rep < ValueOne + 1; Rep++)
		{
			cout << Rep;
		}
		cout << " " << ValueOne << endl;
	}
	ValueOne = ExtraValue;
	ValueTwo = ValueOne;

	for (ValueTwo = 2; ValueTwo < ValueOne + 1; ValueTwo++)
	{
		cout << endl;


		for (int Rep = 1; Rep < ValueTwo + 1; Rep++)
		{
			cout << Rep;
		}
		cout << "  " << ValueTwo << endl;
	}
	cout << endl;
}

//Displays secuence up to a given number and then back to 1
void NumberSecuence()
{

	cout << "\n=============================================================================================================" << endl;
	cout << "\nPlease input a number of floors of your Number Secuence\n";
	cout << "\n=============================================================================================================" << endl;
	cout << "\n => ", cin >> ValueOne;
	while (ValueOne < 0)
	{
		cout << "\n#######################################################Error############################################################" << endl;
		cout << "\n                                     Please place a valid input higher than 0" << endl;
		cout << "\n#######################################################Error############################################################" << endl;

		cout << "\nSelection => ", cin >> Selection;

	}

	ValueTwo = ValueOne;
	ExtraValue = ValueOne;
	FStep();
	cout << endl;
	cout << "=================================PART II=====================================";
	ValueOne = ExtraValue;
	ValueTwo = ValueOne;
	SStep();
}

//Heads or Tails game using random and time seed generation.
void HeadsOrTails()
{
	string HorT;
	const int MaxValue = 2;
	const int MinValue = 1;

	unsigned seed;
	seed = time(0);
	srand(seed);
	cout << "=============================================================================================================" << endl;
	cout << "\n                                       Welcome To the Heads Or Tails." << endl;
	cout << "                                Please Choose one of the following options" << endl;
	cout << "\n1.Heads" << endl;
	cout << "\n2.Tails" << endl;
	cout << "\n=============================================================================================================" << endl;

	cin >> ValueOne;
	while (ValueOne != 1 && ValueOne != 2)
	{
		cout << "\n#######################################################Error############################################################" << endl;
		cout << "\n                                     Please place a valid Input form the menu." << endl;
		cout << "\n#######################################################Error############################################################" << endl;

		cout << "\nSelection => ", cin >> Selection;

	}
	ValueTwo = rand() % (MaxValue - MinValue + 1) + MinValue;
	switch (ValueTwo)
	{
	case 1: HorT = "Heads";
		break;
	case 2: HorT = "Tails";
		break;
	default:
		break;
	}
	if (ValueOne == ValueTwo)
		cout << "\nCongrats You Won " << HorT;
	else
		cout << "\nGood luck next time. " << HorT;
	cout << endl;
}

//Gess the number game using random and tiem seed generation.
void NumOneToTen()
{
	const int MaxValue = 10;
	const int MinValue = 1;

	unsigned seed;
	seed = time(0);
	srand(seed);
	cout << "=============================================================================================================" << endl;
	cout << "\n                                       Welcome To the One to Ten Game." << endl;
	cout << "                                Please Choose one of the following options" << endl;
	for (Rep = 1; Rep < 11; Rep++)
	{
		cout << "\n" << Rep << "\n";
	}

	cout << "\n=============================================================================================================" << endl;

	cin >> ValueOne;

	while (ValueOne < 1 || ValueOne > 10)
	{
		cout << "\n#######################################################Error############################################################" << endl;
		cout << "\n                                     Please place a valid Input form the menu." << endl;
		cout << "\n#######################################################Error############################################################" << endl;

		cout << "\nSelection => ", cin >> ValueOne;


	}
	ValueTwo = rand() % (MaxValue - MinValue + 1) + MinValue;
	do
	{
		if (ValueOne > ValueTwo)
		{
			cout << "\nYour value is a litte too high keep trying\n";
			cout << "=> ", cin >> ValueOne;
		}
		else if (ValueOne < ValueTwo)
		{
			cout << "\nYour value is a litte too low keep trying\n";
			cout << "=> ", cin >> ValueOne;

		}
		while (ValueOne < 1 || ValueOne > 10)
		{
			cout << "\n#######################################################Error############################################################" << endl;
			cout << "\n                                     Please place a valid Input form the menu." << endl;
			cout << "\n#######################################################Error############################################################" << endl;

			cout << "\nSelection => ", cin >> ValueOne;
		}

	} while (ValueOne != ValueTwo);
	cout << "\nCongrats You Won " << ValueTwo << " Was the correct number";
	cout << endl;
}

//Multiplication table Program utilizing for and while loops.
void MultTable()
{
	void MultiplyFor();
	void MultiplyWhile();
	cout << "\n=============================================================================================================" << endl;
	cout << "\nPlease input the number table you would like to see.\n";
	cout << "\n=============================================================================================================" << endl;
	cout << "\n => ", cin >> ValueOne;
	cout << endl;
	cout << "What is the max number you would like to multyply for?\n=> ", cin >> ValueTwo;
	while (ValueOne < 0)
	{
		cout << "\n#######################################################Error############################################################" << endl;
		cout << "\n                                     Please place a valid input higher than 0" << endl;
		cout << "\n#######################################################Error############################################################" << endl;
		cout << "\nSelection => ", cin >> Selection;

	}
	MultiplyFor();
	cout << "\nNow with a while loop\n";
	MultiplyWhile();
}
void MultiplyFor()
{
	cout << "\n===================Table of " << ValueOne << "===================\n";
	for (int rep = 1; rep < ValueTwo + 1; rep++)
	{
		ExtraValue = (ValueOne * rep);
		cout << ValueOne << " * " << rep << " = ";
		cout << ExtraValue << endl;
	}
	cout << "=================================================\n";
}
void MultiplyWhile()
{
	Rep = 1;
	cout << "\n===================Table of " << ValueOne << "===================\n";
	while (Rep <= ValueTwo)
	{
		ExtraValue = (ValueOne * Rep);
		cout << ValueOne << " * " << Rep << " = ";
		cout << ExtraValue << endl;
		Rep += 1;
	}
	cout << "=================================================\n";
}
