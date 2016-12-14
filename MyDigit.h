#pragma once
class MyDigit
{
private:
	int digit;
	static int counter;
	
public:
	MyDigit() : digit(0)
	{}
	MyDigit(int t) : digit(t)
	{}
	MyDigit(double t) : digit((int)t)
	{}
	MyDigit(MyDigit&);
	~MyDigit();

	int getDigit();
	int setDigit(int t);
	int getCounter();
	MyDigit operator+(MyDigit);
	MyDigit operator-(int);
	MyDigit operator*(int);
	MyDigit operator/(int);
	MyDigit operator+=(MyDigit myDigit);
	MyDigit operator-=(MyDigit myDigit);
	MyDigit operator*=(MyDigit myDigit);
	MyDigit operator/=(MyDigit myDigit);

};
