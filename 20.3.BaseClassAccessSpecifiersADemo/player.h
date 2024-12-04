# ifndef PLAYER_H
# define PLAYER_H
# include "person.h"

// Player will do public inheritance from Person 
class Player : public Person{
    friend std::ostream& operator <<(std::ostream& out, const Player& player);
    public :
        Player();
        ~Player();

        // See the access we have to inherited members from Person
        void Play(){    // we will try to reach here to base(person.h) member variables

            m_full_name = "Ertem Egilmez";  // we can access it because it is inherited as public
            m_age = 45;     // we can also access it because it is inherited as protected
            //m_address = "Fiyortlu Skyer St. 245 #7";    // but we can not access it because it is inherited as private
                                                    // the derived class can not modify the private member of base class.
        }

    private :
        int m_career_start_year{0};
        double m_salary{0.0};
        int health_factor{0};   // Let's say that it is btw 0~10
};

#endif  // PLAYER_H