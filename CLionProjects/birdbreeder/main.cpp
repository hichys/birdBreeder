#include <iostream>

#include <sstream>
#include "include/type.h"
#include "include/Date.hh"
#include "include/bird.h"
int main() {

    ba::bird koko{1,"koko",Date("1/5/2018","2:25:4"),ba::type::male,ba::BirdCycle::chick};
    std::cout << koko.getAge_() ;;
    return 0;

}