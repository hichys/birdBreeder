#include <iostream>

#include <sstream>
#include <algorithm>
#include "../include/type.h"
#include "../include/Date.hh"
#include "../include/bird.h"
#include "../include/breedingProgram.hh"
#include <map>
#include <typeinfo>
#include <string>
class pairedBirds{
    std::vector<std::pair<ba::bird,ba::bird>>  paired{};

    pairedBirds(ba::bird a,ba::bird b){
        paired.emplace_back(std::make_pair(a,b));
    }


};

void birdinfo(const ba::bird&    b){
    std::cout << "name :" << b.getName_()    <<'\n'
              << "age  :" << b.getAge_()     << '\n'
              << "type :" << b.getType()     << '\n'
              << "cycle:" << b.whatCycle()   << '\n'
              << "bd   :" << b.getBirthday() << '\n';
}




void eggInfo(ba::bird& be){
    auto b = be.eggs();
    std::cout << "layyed eggs       :" << b.current                << '\n'
              << "Ver               :" << b.totalCurrentVer        << '\n'
              << "NotVer            :" << b.totalCurrentNotVer     << '\n'
              << "Total eggs        :" << b.total                  << '\n'
              << "Total Ver         :" << b.totalVer               << '\n'
              << "Total NotVer      :" << b.totalNotVer            << '\n'
              << "hatched           :" << b.hatched                << '\n'
              << "Total Hatched     :" << b.totalHatched           << '\n'
              << "Total not Hatched :" << b.totalNotHatched        << '\n';


}


int main() {
    //add birds
//    birds.emplace_back(ba::bird{1 ,"koko"  ,Date("1/2/2018","00:00:00") ,ba::male  ,ba::chick});
//    birds.emplace_back(ba::bird{2 ,"jasmin",Date("1/2/2018","00:00:00") ,ba::female,ba::pairing});
//    birds.emplace_back(ba::bird{3 ,"awad"  ,Date("1/2/2018","00:00:00") ,ba::male  ,ba::nestting});

    ba::bird bi1 = {1   ,"koko" ,Date("1/3/2018","00:00:00") ,ba::male    ,ba::chick};
    ba::bird bi2 = {2   ,"dfd"  ,Date("1/5/2018","00:00:00") ,ba::female  ,ba::chick};
    ba::bird bi3 = {3   ,"awad" ,Date("1/3/2018","00:00:00") ,ba::male    ,ba::chick};
    ba::bird bi4 = {4   ,"asd"  ,Date("1/5/2018","00:00:00") ,ba::male    ,ba::chick};

   std::map<std::string,ba::bird> birds{};
    birds.emplace(bi1.getName_(),bi1);
    auto i = birds.at("koko");
    std::cout << i.getName_();

    breedingProgram bp;
    bp.newBird(bi1);
    bp.pair(bi1,bi2);
    std::cout << "paired"<<bp.isPaired(bi1,bi3) <<'\n';
    int id = 1;

    //searching for bird with id or name
    std::string name{"koko"};
    auto *SearchBirdWithHisName = &bp.findBird(name);
    if(&SearchBirdWithHisName){
        std::cout << SearchBirdWithHisName->getAge_() << ":" << SearchBirdWithHisName->getName_() <<'\n';
    }
    else{
        std::cerr << "cant find bird name =" << name <<'\n';
    }
    //searching for bird with id
    auto &bird_a = bp.findBird(id);

        std::cout << bird_a.getAge_() <<":" << bird_a.getName_() << '\n';
    for (auto &&item : bp.birds) {
        std::cout << item.getName_() << '\t';
    }
//    auto i = findBird(birds,"koko");
//    if(i != birds.end()){
//        std::cout << "found \n";
//        birdinfo(*i);
//    }

    //delete birds primantly or keep them in the history

    // mar
    // k them as dead ?

    return 0;

}