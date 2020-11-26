#include "supp.h"
#include "powderSupp.h"
int main()
{
    Suppliment s1(1,"GeniusNutrion","preworkout",60);
    Suppliment s2(2,"Myprotein","Creatine",100);
    Suppliment s3(3,"RichPiana","BCAA",125);

    PowderSupp s4(4,"Genesis","Anabolizante",80,1000);
    PowderSupp s5(5,"BMS","FatBurner",100,2000);
    //Item 6: Explicitly disable the use of compiler generated functions you do not want
    //copy constructor is called here, won't work because it's
    //private and we don't need it
    //Suppliment s4=s2;
    //s2=s1; won't work because copy assignment operator is not accesible(private)
    
    std::cout<<"First suppliment id and name are "<<s1.getID()<<" "<<s1.getName()<<std::endl;
    std::cout<<"Third suppliment id and name are "<<s3.getID()<<" "<<s3.getName()<<std::endl;
    
    s3=s3;
    std::cout<<"S3 is "<<s3.getName()<<std::endl;

    s4=s4;
    std::cout<<"S4 is "<<s4.getName()<<std::endl;

    //Item 5: Know what functions C++ silently writes and calls
    //before exit all object are destroyed    
    
    return 0;
}
