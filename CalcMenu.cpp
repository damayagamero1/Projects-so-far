#include <iostream>
using namespace std;
void addf();
void subf();
void multf();
void divf();
void reminf();
void intdivf();
void exponf();
void averf();

void CalcMenu()
{
	int menuchoice, submenchoi;
	do
	{

		cout << "Hello welcome to the main menu.\n\nPlease select a option from the menu.\n\n";
		cout << "1.Addition of two numbers.\n"
			<< "\n2.Substaction of two numbers\n"
			<< "\n3.Multiplication of two numbers\n"
			<< "\n4.Division of two numbers\n"
			<< "\n5.Reminder betwean two numbers\n"
			<< "\n6.Integer divition of two numbers\n"
			<< "\n7.Exponentation of an specified value\n"
			<< "\n8.Average of user specified values.\n"
			<< "\n9.Exit Program\n\n=> ";
		cin >> menuchoice;
		while (menuchoice < 1 || menuchoice > 9)
		{
			cout << "\nPlease place a valid input\n=>",
				cin >> menuchoice;
		}
		switch (menuchoice)
		{
		case 1: addf();
			break;
		case 2: subf();
			break;
		case 3: multf();
			break;
		case 4: divf();
			break;
		case 5: reminf();
			break;
		case 6: intdivf();
			break;
		case 7: exponf();
			break;
		case 8: averf();
			break;
		default:
			break;
		}
		cout << "\n#################################################################################################\n";
		cout << "\nDo you want to go Back to the main menu?\n";
		cout << "\n1.Yes\n";
		cout << "\n2.No\n";
		cin >> submenchoi;
		cout << "\n#################################################################################################\n";
		while (submenchoi != 1 && submenchoi != 2)
		{
			cout << "\nPlease place a valid input\n=>",
				cin >> submenchoi;
		}
		if (submenchoi == 2)
			menuchoice = 9;
		else;

	} while (menuchoice != 9);
}
int basenum, sumator, totsum;
void addingproc(int& totsum);
void addf()
{

	cout << "======================================================================================"
		<< "\n\n                 Wellcome to the addition program\n"
		<< "\nWrite the first number => ";
	cin >> basenum;
	cout << "\n\n How much would you like to add to this number? => ";
	cin >> sumator;
	addingproc(basenum);
	cout << "\nYour total is =" << basenum;
}
void addingproc(int& totsum)
{
	totsum += sumator;

}
int subval, substractor;
void subsproc(int& totsub);
void subf()
{
	cout << "======================================================================================"
		<< "\n\n                 Wellcome to the substraction program\n"
		<< "\nWrite the first number => ";
	cin >> subval;
	cout << "\n\nHow much would you like to substract to this number? => ";
	cin >> substractor;
	subsproc(subval);
	cout << "\nYour total is =" << subval;
}
void subsproc(int& totsub)
{
	totsub -= substractor;

}
int avrval, loopnum, sum = 0;
void averproc(int& totavr);
void averf()
{
	cout << "======================================================================================"
		<< "\n\n                 Wellcome to the average calcualtor program\n";
	cout << "\n\n How many values you like to work with ? => ";
	cin >> loopnum;


	for (int i = 0; i <= loopnum - 1; i++)
	{
		cout << "\nWrite a number => ";
		cin >> avrval;
		sum += avrval;
	}
	averproc(sum);
	cout << "\nthe averagevalue is =" << sum;
}
void averproc(int& totavr)
{
	totavr /= loopnum;
}
using namespace std;
int remval, divisorx;
void remproc(int& totdiv);
void reminf()
{
	cout << "======================================================================================"
		<< "\n\n                 Wellcome to the Reminder program\n"
		<< "\nWrite the first number => ";
	cin >> remval;
	cout << "\n\nHow much would you like to devide this into? => ";
	cin >> divisorx;
	while (divisorx == 0)
	{
		cout << "\nDivision by 0 is not posible please select another number\n";
		cin >> divisorx;
	}
	remproc(remval);
	cout << "\nYour total reminder is = " << remval;
}
void remproc(int& totrem)
{
	totrem %= divisorx;

}
int divval, divisor;
void divproc(int& totdiv);
void divf()
{
	cout << "======================================================================================"
		<< "\n\n                 Wellcome to the Division program\n"
		<< "\nWrite the first number => ";
	cin >> divval;
	cout << "\n\n How much would you like to add to this number? => ";
	cin >> divisor;
	while (divisor == 0)
	{
		cout << "\nDivision by 0 is not posible please select another number\n";
		cin >> divisor;
	}
	divproc(divval);
	cout << "\nYour total is = " << divval;
}
void divproc(int& totdiv)
{
	totdiv /= divisor;

}
int multyval, multyplier;
void multyproc(int& totmul);
void multf()
{
	cout << "======================================================================================"
		<< "\n\n                 Wellcome to the multiplication program\n"
		<< "\nWrite the first number => ";
	cin >> multyval;
	cout << "\n\n How much would you like to add to this number? => ";
	cin >> multyplier;
	multyproc(multyval);
	cout << "\nYour total is = " << multyval;
}
void multyproc(int& totmul)
{
	totmul *= multyplier;

}
int intdivval, intdivisorx;
void intdivproc(int& totdiv);
void intdivf()
{
	cout << "======================================================================================"
		<< "\n\n                 Wellcome to the integer division program\n"
		<< "\nWrite the first number => ";
	cin >> intdivval;
	cout << "\n\n How much would you like to devide this into? => ";
	cin >> intdivisorx;
	while (intdivisorx == 0)
	{
		cout << "\nDivision by 0 is not posible please select another number\n";
		cin >> intdivisorx;
	}
	intdivproc(intdivval);
	cout << "\nYour total reminder is = " << intdivval;
}
void intdivproc(int& totrem)
{
	totrem /= intdivisorx;

}
int expval, exponent;
void Expproc(int& totmul);
void exponf()
{
	cout << "======================================================================================"
		<< "\n\n                 Wellcome to the Exponent calculator program\n"
		<< "\nWrite the first number => ";
	cin >> expval;
	cout << "\n\n\To what power do you want to elevate this value? => ";
	cin >> exponent;
	Expproc(expval);
	cout << "\nYour total is = " << expval;
}
void Expproc(int& totexp)
{
	totexp = pow(expval, exponent);
}
