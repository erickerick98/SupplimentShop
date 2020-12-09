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
//Item 13: use objects to manage resources 
void Suppliment::getBestSuppliment()
{
    std::auto_ptr<Suppliment> supp(new Suppliment(7,"MyProtein","Proteina",300));
    if(supp->getPrice()>this->getPrice())
    {
        std::cout<<"This product is not the best"<<std::endl;
    }
    else
    {
       std::cout<<"This product is the best"<<std::endl;
    }
    //supp will be destroyed by auto_ptr
}