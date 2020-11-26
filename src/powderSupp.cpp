#include "powderSupp.h"

//default constuctor
PowderSupp::PowderSupp()
:Suppliment(),
grams(0)
{
    std::cout<<"This is default constructor"<<std::endl;
}
//ctor with params
PowderSupp::PowderSupp(const int& id,const std::string& suppName,const std::string& type,const int& price,const int& grams)
//Item 12 copy all parts of an object
:Suppliment(id,suppName,type,price),
grams(grams)
{
    std::cout<<"Suppliment"<<suppName<<"was initialized"<<std::endl;
}
//copy ctor
PowderSupp::PowderSupp(const PowderSupp& supp)
//Item 12 copy all parts of an object
:Suppliment(supp),
grams(supp.grams)
{
    std::cout<<"This is PowderSupp copy constructor"<<std::endl;
}
//copy assignment operator
//Item 12 copy all parts of an object
PowderSupp& PowderSupp:: operator = (const PowderSupp &supp)
{
    Suppliment::operator = (supp);
    grams = supp.grams;
    return *this;
    //Item 10
}
//destructor
PowderSupp:: ~PowderSupp()
{
    std::cout<<"This is PowderSupp destructor"<<std::endl;
}
int PowderSupp::getGrams()
{
    return grams;
}
