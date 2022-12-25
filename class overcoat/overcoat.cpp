#include "overcoat.h"

Overcoat::Overcoat() {}

Overcoat::Overcoat(unsigned short int type, double price)
{
	this->type = type;
	this->price = price;
}


Overcoat::~Overcoat() {}


bool Overcoat::operator==(const Overcoat& o) const
{
	return this->type == o.type;
}


void Overcoat::operator=(const Overcoat& o)
{
	this->type = o.type;
	this->price = o.price;
}


bool Overcoat::operator>(const Overcoat& o) const
{
	if (this->type == o.type)
	{
		return this->price > o.price;
	}
	exit(this->type == o.type);
}


std::ostream& operator<<(std::ostream& output, const Overcoat& o)
{
	output << "“ип: " << o.type << " " << "÷ена: " << o.price << std::endl;

	return output;
}
