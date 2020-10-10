#ifndef ROCKLIB_H
#define ROCKLIB_H

/*
Catalogue of Functions:

bool isEven(int input)
bool isOdd(int input)
bool isNegative(float input)
float absoluteValue(float input)
void createFile()

float squareRoot(float input)

float mean(array floats)

float standardDev(array floats)


*/


#include <fstream> 
#include <string>

namespace rock
{

	bool isEven(int input)
	{
		bool verifiedEven = false;
		//std::cout << "This is the isEven function" << std::endl;

		if (input % 2 == 0)
		{
			verifiedEven = true;
		}

		return verifiedEven;
	}

	bool isOdd(int input)
	{
		bool verifiedOdd = false;

		if (!isEven(input))
		{
			verifiedOdd = true;
		}

		return verifiedOdd;

	}

	bool isNegative(float input)
	{
		bool verifiedNegative = false;

		if (input < 0.0)
		{
			verifiedNegative = true;
		}

		return verifiedNegative;
	}

	float absoluteValue(float input)
	{
		if (isNegative(input))
		{
			input = input * (-1);
		}

		return input;
	}


	void createFile()
	{
		std::fstream file;
		std::string fileName = "";

		std::cout << "Name file: ";
		std::cin >> fileName;

		//Creates file in local directory
		file.open(fileName, std::ios::out);

		// If no file is created, then 
		// show the error message. 
		if (!file)
		{
			std::cout << "Error in creating file!!!";
		}


		//FILL FILE WITH DATA
		file << "Inside the file" << std::endl;

		file.close();
	}

	float squareRoot(float input, int root)
	{

		std::cout << "Rooting: " << input << " to the " << root << " power." << std::endl;


		float output = input;

		bool specialCase = false;

		bool verifiedNegative = false;


		if (isNegative(input) && input == -1.0)
		{
			output = -1;
			specialCase = true;
		}
		
		
		if (isNegative(input) && isOdd(root))
		{
			output = -1;
			verifiedNegative = true;
		}

		if (input == 1.0)
		{
			output = 1;
			specialCase = true;
		}
		else if (root == 1)
		{
			output = input;
			specialCase = true;
		}
		else if (input == 0)
		{
			output = 0;
			specialCase = true;
		}

		

		if (!specialCase)
		{
			//Adds input to itself for the number of exponents in argument. 
			while (root > 0)
			{
				output += input;
				root--;
			}

			//Creates division for negative exponents
			if (isNegative(root))
			{
				output = 1 / output;
			}

			//If the input was negative and the root was odd, the output will
			//be corrected here to add a negative 1.
			if (verifiedNegative)
			{
				output *= -1;
			}
			

		}

		if (output < 0 && isEven(root))
		{
			output *= -1;

		}
		
		std::cout << "Yield: " << output << std::endl;

		return output;
	}

	//float mean(array floats)

	//float standardDev(array floats)

}

#endif // !
