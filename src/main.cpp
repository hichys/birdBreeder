#include <iostream>

#include <sstream>
#include "../include/type.h"
#include "../include/Date.hh"
#include "../include/bird.h"

class pairedBirds{
    std::vector<std::pair<ba::bird,ba::bird>>  paired{};

    pairedBirds(ba::bird a,ba::bird b){
        paired.emplace_back(std::make_pair(a,b));
    }


};

void birdinfo(const ba::bird& b){
    std::cout << "name :" << b.getName_() <<'\n'
              << "age  :" << b.getAge_() << '\n'
              << "type :" << b.getType() << '\n'
              << "cycle:" << b.whatCycle() << '\n';
}

int main() {

    ba::bird koko{1,"koko",Date("10/5/2018","00:59:9"),ba::type::male,ba::BirdCycle::chick};
    koko.setCycle(ba::BirdCycle::moulting);
    if(koko.getAge_() < 30 * 9)
    {
        koko.setCycle(ba::BirdCycle::chick);

    }
    birdinfo(koko);



    return 0;

}