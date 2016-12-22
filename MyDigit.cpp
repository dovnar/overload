#include "stdafx.h"
#include "MyDigit.h"

int MyDigit::counter = 0;

MyDigit::MyDigit() : digit(0)
{
	++counter;
}

MyDigit::MyDigit(int tmp) : digit(tmp)
{
	++counter;
}

MyDigit::MyDigit(double tmp) : digit((int)tmp)
{
	++counter;
}

MyDigit::MyDigit(const MyDigit& myDigit)
{
	digit = myDigit.digit;
	++counter;
}

int MyDigit::getDigit()
{
	return digit;
}

void MyDigit::setDigit(int tmp)
{
	digit = tmp;
}

int MyDigit::getCounter()
{
	return counter;
}

MyDigit MyDigit::operator+=(MyDigit myDigit)
{
	MyDigit tempDigit;
	tempDigit.digit = digit + myDigit.digit;
	return tempDigit;
}

MyDigit MyDigit::operator+(MyDigit myDigit)
{
	MyDigit tempDigit = *this;
	tempDigit += myDigit;
	return tempDigit;
}

MyDigit MyDigit::operator-=(MyDigit myDigit)
{
	MyDigit tempDigit;
	tempDigit.digit = digit - myDigit.digit;
	return tempDigit;
}

MyDigit MyDigit::operator-(MyDigit myDigit)
{
	MyDigit tempDigit = *this;
	tempDigit -= myDigit;
	return tempDigit;
}

MyDigit MyDigit::operator*=(MyDigit myDigit)
{
	MyDigit tempDigit;
	tempDigit.digit = digit * myDigit.digit;
	return tempDigit;
}

MyDigit MyDigit::operator*(MyDigit myDigit)
{
	MyDigit tempDigit = *this;
	tempDigit *= myDigit;
	return tempDigit;
}

MyDigit MyDigit::operator/=(MyDigit myDigit)
{
	MyDigit tempDigit;
	tempDigit.digit = digit / myDigit.digit;
	return tempDigit;
}

MyDigit MyDigit::operator/(MyDigit myDigit)
{
	MyDigit tempDigit = *this;
	tempDigit /= myDigit;
	return tempDigit;
}

bool MyDigit::operator<(MyDigit myDigit)
{
	if (digit < myDigit.digit)
		return true;
	else 
		return false;
}

bool MyDigit::operator>(MyDigit myDigit)
{
	if (digit > myDigit.digit)
		return true;
	else
		return false;
}

bool MyDigit::operator==(MyDigit myDigit)
{
	if (digit == myDigit.digit)
		return true;
	else
		return false;
}

bool MyDigit::operator!=(MyDigit myDigit)
{
	if (digit != myDigit.digit)
		return true;
	else
		return false;
}

MyDigit MyDigit::operator++()
{
	digit++;
	return digit;
}

MyDigit MyDigit::operator++(int)
{
	MyDigit tmp = *this;
	digit++;
	return tmp;
}

MyDigit MyDigit::operator--()
{
	digit--;
	return digit;
}

MyDigit MyDigit::operator--(int)
{
	MyDigit tmp = *this;
	digit--;
	return tmp;
}

MyDigit MyDigit::operator=(MyDigit myDigit)
{
	digit = myDigit.digit;
	return *this;
}

MyDigit::operator int()
{
	return digit;
}

MyDigit::operator double()
{
	return digit*1.0;
}

void MyDigit::operator()(int tmp)
{
	digit = tmp;
}

MyDigit::~MyDigit()
{
}
