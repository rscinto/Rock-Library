
#include <iostream>
#include "rockLIB.h"

//bool isEven(int input);
//bool isOdd(int input);

using namespace rock;


int main()
{
	std::cout << "*** Here is the library of funtions ***" << std::endl;


	float input = 2.0;
	int root = 3;
	squareRoot(input, root);
	std::cout<<std::endl;

	input = 1.0;
	root = 3;
	squareRoot(input, root);
	std::cout << std::endl;


	input = 0.0;
	root = 3;
	squareRoot(input, root);
	std::cout << std::endl;

	input = -1.0;
	root = 3;
	squareRoot(input, root);
	std::cout << std::endl;

	input = -2.0;
	root = 3;
	squareRoot(input, root);
	std::cout << std::endl;
	


	input = 1.0;
	root = 2;
	squareRoot(input, root);
	std::cout << std::endl;

	input = 1.0;
	root = 2;
	squareRoot(input, root);
	std::cout << std::endl;

	input = 0.0;
	root = 2;
	squareRoot(input, root);
	std::cout << std::endl;

	input = -1.0;
	root = 2;
	squareRoot(input, root);
	std::cout << std::endl;

	input = -2.0;
	root = 2;
	squareRoot(input, root);
	std::cout << std::endl;



	//createFile();








	/*
	int test1 = 4;

	//std::cout << "Here is the call to the isEven function." << std::endl;
	std::cout << "Even test for " << test1 << std::endl;
	
	//isEven(test1);
	if (isEven(test1))
	{
		std::cout << "This number is even." << std::endl;
	}
	else
	{
		std::cout << "This number is NOT even." << std::endl;
	}

	int test2 = 5;
	std::cout << "Odd test for " << test2 << std::endl;

	if (isOdd(test2))
	{
		std::cout << "This number is odd. " << std::endl;
	}
	else
	{
		std::cout << "This number is NOT odd. " << std::endl;
	}

	*/

	return 1010;

}

