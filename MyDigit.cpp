#include "stdafx.h"
#include "MyDigit.h"

int MyDigit::counter = 0;

MyDigit::MyDigit()
{
	++counter;
}

MyDigit::MyDigit(int)
{
	++counter;
}

MyDigit::MyDigit(double)
{
	++counter;
}

MyDigit::MyDigit(MyDigit& myDigit)
{
	digit = myDigit.digit;
	++counter;
}

int MyDigit::getDigit()
{
	return digit;
}

int MyDigit::setDigit(int t)
{
	digit = t;
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
	digit++;
	return digit;
}

MyDigit MyDigit::operator--(int)
{
	MyDigit tmp = *this;
	digit++;
	return tmp;
}

MyDigit MyDigit::operator=(MyDigit myDigit)
{
	digit = myDigit.digit;
	return *this;
}

MyDigit::~MyDigit()
{
	digit = 0;
}
