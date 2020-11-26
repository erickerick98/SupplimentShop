#include "supp.h"

//Item 4: make sure that objects are initialized before they are used
//used member initialization list insted of assignments
Suppliment::Suppliment()
:id(0),
suppName(),
type(),
price(0)
{
    std::cout<<"This is the default constructor"<<std::endl;
}


//constructor with parameters
Suppliment::Suppliment(const int& id,const std::string& suppName,const std::string& type,const int& price)
:id(id),
suppName(suppName),
type(type),
price(price)
{
    std::cout<<"Suppliment "<<suppName<<" was initialized "<<std::endl;

}
//destructor
Suppliment::~Suppliment()
{
    std::cout<<"Destructor of suppliment "<<std::endl;
}
//copy ctor
Suppliment::Suppliment(const Suppliment& supp)
:id(supp.id),
suppName(supp.suppName),
type(supp.type),
price(supp.price)
{
	std::cout<<"Suppliment copy ctor "<<std::endl;
}
//copy assignment operator
Suppliment &Suppliment::operator = (const Suppliment& supp)
{
	//Item 11 handle assignment to self in operator =
	Suppliment temp(supp);
	swap(temp);
	return *this;
	//Item 10 have assignment operators return a reference to *this
}
void Suppliment::swap(Suppliment& supp)
{
	this->id=supp.id;
	this->suppName=supp.suppName;
	this->type=supp.type;
	this->price=supp.price;
}
int Suppliment::getID()
{
    return id;
}
std::string Suppliment::getName()
{
    return suppName;
}
int Suppliment::getPrice()
{
    return price;
}
