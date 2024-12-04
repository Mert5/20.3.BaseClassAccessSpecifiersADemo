#ifndef NURSE_H
#define NURSE_H
#include "person.h"

// Nurse will do protected inheritance
class Nurse : protected Person{

    friend std::ostream& operator <<(std::ostream& , const Nurse& operand);

    public :
        Nurse();
        ~Nurse();

        void treat_unwell_person(){
            m_full_name = "Aziz Sancar";    // OK
            m_age = 65;     // OK   
            //m_address = "Bulmazsa getir str"; // because it is private to base class
        }
    
    private :
        int practice_certificate_id{0};
};

#endif  // NURSE_H