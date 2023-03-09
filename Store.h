#ifndef SDDS_STORE_H_
#define SDDS_STORE_H_

#define MAX_NUM_TOYS 10	//as per instructions
#define MAX_SNAME    31
#include "Toys.h"

namespace sdds
{
	class Store
	{
	public:

		char m_sName[MAX_SNAME];	// Store name, up to MAX_SNAME size
		int m_noOfToys;				//No of toys;
		int m_addToys;				//no of toys added
		Toy m_toy[MAX_NUM_TOYS];	// statically array of toys with size MAX_NUM_TOYS (create Toys class to fix error)

	//mandatory public 

		void setStore(const char* sName, int no);
		void setToys(const char* tname, int sku, double price, int age);
		void display()const;
		void find(int sku);
		void setEmpty();


	};
}





#endif // !SDDS_STORE_H_