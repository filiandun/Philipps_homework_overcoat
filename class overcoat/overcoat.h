#pragma once
#include <iostream>

enum overcoat_type { COAT = 1, TSHIRT = 1, PANTS = 2, SHORTS = 2, BOOTS = 3, SHOES = 3 };

class Overcoat
{
public:
	Overcoat();
	Overcoat(unsigned short int type, double price);
	~Overcoat();

private:
	unsigned short int type = 0;
	double price = 0;

public:
	bool operator== (const Overcoat& o) const;
	void operator=(const Overcoat& o);
	bool operator>(const Overcoat& o) const;

	friend std::ostream& operator<<(std::ostream& output, const Overcoat& o);
};

