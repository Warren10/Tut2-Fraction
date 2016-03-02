#include <iostream>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	Fraction(int Num, int Denom) //default constructor
	{
		numerator = Num;
		denominator = Denom;
	}

	~Fraction() // default destructor
	{

	}

	// accessor/mutator functions 
	void getNumDenom(int Num, int Denom)
	{
		numerator = Num;
		denominator = Denom;
	}

	void setNumDenom(int num, int denom)
	{
		num = numerator;
		denom = denominator;
	}

	//operational functions
	double add(int Num, int Denom)
	{
		return (Num / Denom) + (numerator / denominator);
	}

	double subtract(int Num, int Denom)
	{
		return (Num / Denom) - (numerator / denominator);
	}

	double multiply(int Num, int Denom)
	{
		return (Num / Denom) * (numerator / denominator);
	}

	double divide(int Num, int Denom)
	{
		return multiply(Num, Denom);
	}

	void display()
	{

	}
}
