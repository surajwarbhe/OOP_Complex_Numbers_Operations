/******************************************************************************

Design a class ‘Complex ‘with data members for real and imaginary part. Provide 
default and parameterized constructors. Write a program to perform arithmetic 
operations of two complex numbers using operator overloading. Multiplication and
division using member functions

*******************************************************************************/

#include <iostream>

using namespace std;

class complex
{
	float real;
	float imag;

  public:
	complex()
	{
		real = 0;
		imag = 0;
	}
	void ACCEPT()
	{
		cout << "\nReal Part : ";
		cin >> real;
		cout << "Imaginary Part : ";
		cin >> imag;
	}

	complex operator*(complex r);
	complex operator/(complex q);

	void DISPLAY()
	{
		cout << real << "+" << imag << "i"
			 << "\n";
	}
};

complex complex::operator*(complex c1)
{
	complex c;
	c.real = c1.real * real - c1.imag * imag;
	c.imag = c1.imag * real + c1.real * imag;
	return c;
}

complex complex::operator/(complex c2)
{
	float m, n, p;
	complex c;
	m = (real * c2.real) + (imag * c2.imag);
	n = (c2.real * c2.real) + (c2.imag * c2.imag);
	p = (imag * c2.real) - (real * c2.imag);
	c.real = m / n;
	c.imag = p / n;
	return c;
}

int main()
{
	complex c1, c2, c3;
	int choice = 0;

	cout << "\nEnter First Complex Number";
	c1.ACCEPT();
	c1.DISPLAY();
	cout << "\nEnter Second Complex Number";
	c2.ACCEPT();
	c2.DISPLAY();

	do
	{
		cout << "\n********MENU********\n\n(1) MULTIPLICATION\n(2) DIVISION\n(3) EXIT\n\n***********************\n\n";
		cout << "Enter your choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			c3 = c1 * c2;
			c3.DISPLAY();
			break;

		case 2:
			c3 = c1 / c2;
			c3.DISPLAY();
			break;
		}
	} while (choice != 3);
	return 0;
}

