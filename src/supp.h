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
    
    //Item 6: Explicitly disable the use of compiler generated functions you do not want
    //they are private to prevent compilers from creating their own version
    //they are only declared not defined
    
    protected:
    void swap(Suppliment& supp);
      
    public:

	//copy assignment operator
    Suppliment& operator = (const Suppliment&);

    //copy constructor
    Suppliment(const Suppliment&);
    //default constructor
    Suppliment();

    //constructor with parameters
    Suppliment(const int& id,const std::string& suppName,const std::string& type,const int& price);

    //destructor
    ~Suppliment();

    int getID();
    std::string getName();
    int getPrice();

};


#endif
