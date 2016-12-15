#pragma once
class MyDigit
{
private:
	int digit;
	static int counter;
	
public:
	MyDigit();
	MyDigit(int);
	MyDigit(double);
	MyDigit(const MyDigit&);
	~MyDigit();

	int getDigit();
	void setDigit(int);
	int getCounter();

	MyDigit operator+(MyDigit);
	MyDigit operator-(MyDigit);
	MyDigit operator*(MyDigit);
	MyDigit operator/(MyDigit);

	MyDigit operator+=(MyDigit);
	MyDigit operator-=(MyDigit);
	MyDigit operator*=(MyDigit);
	MyDigit operator/=(MyDigit);

	bool operator<(MyDigit);
	bool operator>(MyDigit);
	bool operator==(MyDigit);
	bool operator!=(MyDigit);

	MyDigit operator++();
	MyDigit operator++(int);
	MyDigit operator--();
	MyDigit operator--(int);

	MyDigit operator=(MyDigit);

	operator int();
	operator double();
	void operator()(int);
};
