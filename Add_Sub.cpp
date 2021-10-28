/********************************************************************************************

Design a class ‘Complex ‘with data members for real and imaginary part. Provide default and 
parameterized constructors. Write a program to perform arithmetic operations of two complex 
numbers using operator overloading. Addition and subtraction using friend functions 

********************************************************************************************/

#include <iostream>
using namespace std;

class complex
{
  public:
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

	friend complex operator+(complex m, complex n);
	friend complex operator-(complex m, complex n);

	void DISPLAY()
	{
		cout << "Entered Number is : ";
		cout << real << "+" << imag << "i"
			 << "\n";
	}
};

complex operator+(complex m, complex n)
{
	complex c;
	c.real = m.real + n.real;
	c.imag = m.imag + n.imag;
	return c;
}

complex operator-(complex m, complex n)
{
	complex c;
	c.real = m.real - n.real;
	c.imag = m.imag - n.imag;
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
		cout << "\n*****MENU*****\n\n(1) ADDITION\n(2) SUBTRACTION\n(3) EXIT\n\n****************\n\n";
		cout << "Enter your choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			c3 = c1 + c2;
			c3.DISPLAY();
			break;
		case 2:
			c3 = c1 - c2;
			c3.DISPLAY();
			break;
		}
	} while (choice != 3);

	return 0;
} 

