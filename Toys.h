#ifndef SDDS_TOYS_H_
#define SDDS_TOYS_H_

#define MAX_TNAME 31 // define it to 31. The maximum length of a Toy name//do not end macros with ; or it wont work >.<


namespace sdds
{
	class Toy
	{
	public:
		char	m_tname[MAX_TNAME]; //toy name with max tname size
		int		m_sku;
		double	m_price;
		int		m_age;
		bool	m_onSale;
		//mandatory public functions
		void addToys(const char* tname, int sku, double price, int age);
		void isSale(bool sale);
		void calSale();
		void display()const;
		void setEmpty();


	};
}

#endif
