#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Toys.h"
#include <iomanip>
using namespace std;

namespace sdds
{
	void Toy::addToys(const char* tname, int sku, double price, int age)
	{
		//After checking the validity, this method will set the received values to the appropriate data members. Otherwise will be set to an empty state.
		{	//set to empty state if any input is garbage
			if (tname == nullptr || tname[0] == '\0' || sku <= 0 || price <= 0 || age <= 0)
			{
				*m_tname = '\0';	//set first ele to string terminator
				m_sku = 0;
				m_price = 0;
				m_age = 0;
				m_onSale = false;	//<<<double check
				return;				//double check
			}

			//if above is correct input, do as else?
			strcpy(m_tname, tname);	//copy to, from
			m_sku = sku;
			m_price = price;
			m_onSale = false;		//double check


		}
	}

	void Toy::isSale(bool sale)
	{
		m_onSale = sale;			
	}

	void Toy::calSale()
	{
		m_price = m_price * .8;
	}

	void Toy::display()const
	{
		if (*m_tname == '\0')
		{
			cout << "Invalid Toy" << endl;
			return;
		}
		//plugged this section into chatgpt and was shown a quick way to do it using the iomanip library, further reading required.
		cout << setw(15) << left << m_tname << setw(10) << m_sku << setw(6) << m_age;
		cout << setw(12) << fixed << setprecision(2) << m_price;

		if (m_onSale)
		{
			cout << setw(10) << "On Sale";
		}
		else
		{
			cout << setw(8) << " ";
		}
		cout << endl;

	}


	void Toy::setEmpty()
	{
		m_tname[0] = '\0';
		m_sku = 0;
		m_price = 0;
		m_sku = 0;
		m_onSale = false;
	}


}