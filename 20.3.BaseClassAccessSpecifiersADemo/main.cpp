#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => (freeCodeCamp.org)

int main(){

    Person person1("John Devon",31,"Bulursa gelsin");
    std::cout << "Information of the " << person1 << std::endl;

    std::cout << std::endl;

    Player player1;
    player1.m_full_name = "Mary Turgut";
    //player1.m_age = 38; // we can not access it outside of a player object, it will give compiler error
    //player1.m_address = "Dereboyu sokak"; // private member, it will give compiler error

    std::cout << std::endl;

    Nurse nurse1;
    //nurse1.m_full_name = "Sabri Bey";   // inherited as protected, you can not access it from outside- Compiler error
    //nurse1.m_age = 18;    // Compiler error
    //nurse1.m_address = "Yalikavak str 17 #14";    // Compiler error

    std::cout << std::endl;

    Engineer eng1;
    //eng1.m_full_name = "Hamdi Bey";   // inherited as private, you can not access it from outside- Compiler error
    //eng1.m_age = 18;    // Compiler error
    //eng1.m_address = "Cumhuriyet str 9 #3";    // Compiler error


    return 0;
}
