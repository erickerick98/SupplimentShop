#ifndef SUPP_H
#define SUPP_H

#include <iostream>

class Suppliment
{
    private:
    int id;
    std::string suppName;
    std::string type;
    int price;
    
   //Item 14: Prohibit copying
   //Copy constructor and copy assignment operator are private because we don't want to copy a suppliment
    
    //copy assignment operator
    Suppliment& operator = (const Suppliment&);

    //copy constructor
    Suppliment(const Suppliment&);

    protected:
    void swap(Suppliment& supp);
      
    public:

    //default constructor
    Suppliment();

    //constructor with parameters
    Suppliment(const int& id,const std::string& suppName,const std::string& type,const int& price);

    //destructor
    ~Suppliment();

    int getID();
    std::string getName();
    int getPrice();

    void getBestSuppliment();
};


#endif
