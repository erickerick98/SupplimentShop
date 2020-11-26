#ifndef POWDERSUPP_H
#define POWDERSUPP_H

#include <iostream>
#include "supp.h"

class PowderSupp : public Suppliment
{
    private:
    int grams;
    
    public:
    //copy ctor
    PowderSupp(const PowderSupp&);
    //default ctor
    PowderSupp();
    //ctor with params
    PowderSupp(const int& id,const std::string& suppName,const std::string& type,const int& price,const int& grams);
    //copy assignment operator
    PowderSupp& operator = (const PowderSupp&);
    //destructor
    ~PowderSupp();
    int getGrams();
};
#endif 