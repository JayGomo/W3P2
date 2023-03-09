#ifndef SDDS_STORE_H_
#define SDDS_STORE_H_

#define MAX_NUM_TOYS 10	//as per instructions
#define MAX_SNAME    31


namespace sdds
{
	class Store
	{
	public:

		char m_sName[MAX_SNAME];	// Store name, up to MAX_SNAME size
		int m_noOfToys;				//No of toys;
		int m_addToys;				//no of toys added
		Toys m_toy[MAX_NUM_TOYS];	// statically array of toys with size MAX_NUM_TOYS (create Toys class to fix error)

	//mandatory public 
		//This will set the store name and the number of toys that could be added to the store. For invalid value, it will set the values to an empty state.
		void setStore(const char* sName, int no);

		void setToys(const char* tname, int sku, double price, int age);

		void display()const;

		void find(int sku);
		void setEmpty();


	};
}





#endif // !SDDS_STORE_H_