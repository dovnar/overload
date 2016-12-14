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

}

MyDigit MyDigit::operator*=(MyDigit myDigit)
{

}

MyDigit MyDigit::operator/=(MyDigit myDigit)
{

}

MyDigit::~MyDigit()
{
	digit = 0;
}
