#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Store.h"
#include "Toys.h"
#include "Toys.cpp"
#include <iomanip>

using namespace std;
namespace sdds //as required 
{
	//This will set the store name and the number of toys that could be added to the store. For invalid value, it will set the values to an empty state.
	void Store::setStore(const char* sName, int no)
	{	//format taken from prio lab
		if (sName != nullptr && strlen(sName) <= MAX_SNAME && no > 0)
		{
			strcmp(m_sName, sName); //strcmp or strcpy
			m_noOfToys = no;		//double check
		}
		else
		{
			m_sName[0] = '\0';
			m_noOfToys = 0;
		}
	}
	//This will add the toys one at a time to the m_toy array and will keep track of the number of toys added. Toys will be added until num of added toys is less than m_noOfToys
	
	
	/**/
	void Store::setToys(const char* tname, int sku, double price, int age)
	{
		if (tname != nullptr && m_addToys < m_noOfToys)
		{
			strcpy(m_toy[m_addToys].m_tname, tname);
			m_toy[m_addToys].m_sku = sku;
			m_toy[m_addToys].m_price = price;
			m_toy[m_addToys].m_age = age;
			//m_addToys++;
			++m_addToys;
		}
	}


}