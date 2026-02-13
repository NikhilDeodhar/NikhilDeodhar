//============================================================================
// Name        : nik_hw.cpp
// Author      : Nikhil Deodhar
// Version     :
// Copyright   : No LOL
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cust.h>

using namespace std;

class obj1
{
public:
	void set_vars(unsigned int a, unsigned char b);
	unsigned int get_int (void);
	unsigned char get_char (void);
private:
	unsigned int my_int;
	unsigned char my_char;
};

void obj1::set_vars (unsigned int a, unsigned char b)
{
	my_int = a;
	my_char = b;
}

inline unsigned int obj1::get_int(void)
{
	return my_int;
}

inline unsigned char obj1::get_char(void)
{
	return my_char;
}

int main()
{
	obj1 new1;
	unsigned int l = 0;
	unsigned char m = 0;

	l = new1.get_int();
	m = new1.get_char();
	cout << "!!!Hello World!!!" << endl << "Int initially is " << l << " char is " << m << endl; // prints !!!Hello World!!!

	new1.set_vars(100, '!');

	l = new1.get_int();
	m = new1.get_char();
	cout << "!!!Bye World!!!" << endl << "Int after is " << l << " char is " << m << endl; // prints !!!Hello World!!!


	return 0;
}
