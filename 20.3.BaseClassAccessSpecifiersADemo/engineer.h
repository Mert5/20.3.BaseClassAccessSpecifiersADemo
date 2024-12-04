#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"


// Engineer will do private inheritance
class Engineer : private Person{

    friend std::ostream& operator <<(std::ostream& , const Engineer& operand);

    public :
        Engineer(); 
        ~Engineer();

        void build_something(){
            m_full_name = "Aziz Sancar";    // OK
            m_age = 65;     // OK   
            //m_address = "Bulmazsa getir str"; // Compiler Error! Because it is private to base class
        
        }
    
    private :
        int contract_count{0};
};

#endif // ENGINEER_H