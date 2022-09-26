/******************************************************************************
Write a program that converts weights and measures:

pounds to kilograms
kilograms to pounds
feet and inches to centimetres
centimetres to feet and inches
degrees Fahrenheit to degrees Celcius
degrees Celsius to degrees Fahrenheit

======================================
Example operation
Welcome to Stephen Graham's weights and measures converter.
Would you like to convert from Imperial or Metric? Please choose I or M: M
Converting from Metric!

Would you like to convert Height, Temperature, or Weight? Please choose H, T, or W: T
Converting Degrees Celsius to Degrees Fahrenheit!

Enter degrees Celsius: 37
That is equivalent to 98.6 degrees Fahrenheit.

Would you like to perform another conversion? (Y/N): N
Thank you for using my converter.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	string userName;
	double pounds = 0.0;
	double kilograms = 0.0;
	double feets = 0.0;
	double inches = 0.0;
	double centimetres = 0.0;
	double fahrenheit = 0.0;
	double celsius = 0.0;
	char MorIchar = ' ';
	char HeightWeightTemp = ' ';
	double CelToFahrResult = 0.0;
	double FahrToCelResult = 0.0;
	char FtoCorItoC = ' ';
	double FtoCenResult = 0.0;
	double InchToCenResult = 0.0;
	char CtoForCtoI = ' ';
	double CenToFResult = 0.0;
	double CenToInchResult = 0.0;
	double poundToKiloResult = 0.0;
	double kiloToPoundResult = 0.0;
	char yesOrNo = ' ';

	cout << "Please Enter your name to start: ";
	cin >> userName;
	cout << "Hello " << userName << "!"
		  << "\n"
		  << "Welcome to O.S. weights and measures converter.\n";

	do
	{
		cout << "\nWould you like to convert from Imperial or Metric?\nPlease type 'I' to convert from Imperial to Metric or type 'M' to convert from Metric to Imperial: ";
		cin >> MorIchar;

		/* Imperial */
		if ((MorIchar == 'I') || (MorIchar == 'i'))
		{
			cout << "Converting from Imperial.\n";
			cout << "Would you like to convert Height, Temperature, or Weight? Please choose H, T, or W: ";
			cin >> HeightWeightTemp;

			/* Height */
			if ((HeightWeightTemp == 'H') || (HeightWeightTemp == 'h'))
			{
				cout << "Would you like to convert Feet to Centimetres or Inches to Centimetres?\n";
				cout << "Type 'F' to convert Feet to Centimetres or type 'I' to convert Inches to Centimetres: ";
				cin >> FtoCorItoC;
				if ((FtoCorItoC == 'F') || (FtoCorItoC == 'f'))
				{
					cout << "Converting feet to centimeters\n";
					cout << "Enter Feets: ";
					cin >> feets;
					FtoCenResult = feets * 30.48;
					cout << feets << " feets is equivalent to " << FtoCenResult << " centimetres.";
				}
				else if ((FtoCorItoC == 'I') || (FtoCorItoC == 'i'))
				{
					cout << "Converting inches to centimeters\n";
					cout << "Enter Inches: ";
					cin >> inches;
					InchToCenResult = inches * 2.54;
					cout << inches << " inches is equivalent to " << InchToCenResult << " centimetres.";
				}

				/* Temperature */
			}
			else if ((HeightWeightTemp == 'T') || (HeightWeightTemp == 't'))
			{
				cout << "Converting Degrees Fahrenheit to Degrees Celsius!\n";
				cout << "Enter Degrees Fahrenheit: ";
				cin >> fahrenheit;
				FahrToCelResult = (fahrenheit - 32) * 5 / 9;
				cout << fahrenheit << " Degrees Fahrenheit is equivalent to " << FahrToCelResult << " Degrees Celsius.";

				/* Weight */
			}
			else if ((HeightWeightTemp == 'W') || (HeightWeightTemp == 'w'))
			{
				cout << "Converting Pounds to Kilograms!\n";
				cout << "Enter Pounds: ";
				cin >> pounds;
				poundToKiloResult = pounds * 0.45359237;
				cout << pounds << " pounds is equivalent to " << poundToKiloResult << " kilograms.";
			}

			/* Metric */
		}
		else if ((MorIchar == 'M') || (MorIchar == 'm'))
		{
			cout << "Converting from Metric.\n";
			cout << "Would you like to convert Height, Temperature, or Weight? Please choose H, T, or W: ";
			cin >> HeightWeightTemp;

			/* Height */
			if ((HeightWeightTemp == 'H') || (HeightWeightTemp == 'h'))
			{
				cout << "Would you like to convert Centimetres to Feets or Centimetres to Inches ?\n";
				cout << "Type 'F' to convert Centimetres to Feets or type 'I' to convert Centimetres to Inches: ";
				cin >> CtoForCtoI;
				if ((CtoForCtoI == 'F') || (CtoForCtoI == 'f'))
				{
					cout << "Converting Centimeters to feet\n";
					cout << "Enter Centimetres: ";
					cin >> centimetres;
					CenToFResult = centimetres / 30.48;
					cout << centimetres << " centimetres is equivalent to " << CenToFResult << " feet.";
				}
				else if ((CtoForCtoI == 'I') || (CtoForCtoI == 'i'))
				{
					cout << "Converting Centimeters to inches\n";
					cout << "Enter Centimetres: ";
					cin >> centimetres;
					CenToInchResult = centimetres / 2.54;
					cout << centimetres << " centimetres is equivalent to " << CenToInchResult << " inches.";
				}

				/* Temperature */
			}
			else if ((HeightWeightTemp == 'T') || (HeightWeightTemp == 't'))
			{
				cout << "Converting Degrees Celsius to Degrees Fahrenheit!\n";
				cout << "Enter Degrees Celsius: ";
				cin >> celsius;
				CelToFahrResult = (celsius * 9 / 5) + 32;
				cout << celsius << " Degrees Celsius "
					  << "is equivalent to " << CelToFahrResult << " Degrees Fahrenheit.";

				/* Weight */ /* working here now */
			}
			else if ((HeightWeightTemp == 'W') || (HeightWeightTemp == 'w'))
			{
				cout << "Converting Kilograms to Pounds!\n";
				cout << "Enter Kilograms: ";
				cin >> kilograms;
				kiloToPoundResult = kilograms * 2.2;
				cout << kilograms << " kilograms is equivalent to " << kiloToPoundResult << " pounds.";
			}
		}
		cout << "\nWould you like to conver something else? (Y/N): ";
		cin >> yesOrNo;
	} while ((yesOrNo == 'Y') || (yesOrNo == 'y'));
	cout << "\nThank you for using my converter.\n"
		  << "Have a wonderfull day " << userName << " !";
	return 0;
}