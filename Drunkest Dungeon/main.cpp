//#include "Dziekanat/Dziekanat.hpp"
#include <iostream>
#include "Human/Human.hpp"
//#include "Human/Teacher/Teacher.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    srand( time( NULL ) );
    setlocale(LC_ALL, "pl_PL");
    Human jebaniec( "C++", 0);
    std::cout<<jebaniec.get_health()<< "to jest chujec : "<<jebaniec.get_name();
    return 0;
}