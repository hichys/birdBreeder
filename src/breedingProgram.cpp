//
// Created by awad on 13/05/18.
//

#include "../include/breedingProgram.hh"
#include <algorithm>
//cdor
breedingProgram::breedingProgram(ba::bird &lhs, ba::bird &rhs) {
    pair(lhs,rhs);

}

bool breedingProgram::pair(ba::bird &lhs, ba::bird &rhs) {

    if(sameBird(lhs,rhs)){
        std::cerr << "same bird cant paired" << '\n';
        return false;
    }
    //bird cant pair with his/m self
    if(lhs.hasPair() ){
        // lhs bird already has pair
        //somehow take user input to confirm
        return false;
    }
    if(rhs.hasPair()){
        return false;
    }

    if(rhs.getPairedWith() == &lhs)
        return  true;

    lhs.setPairedWith(&rhs);
    rhs.setPairedWith(&lhs);

        if(lhs.getPairedWith() == &rhs && rhs.getPairedWith() == &lhs){
            std::cout << "done \n";
            pairedBirds.emplace_back(std::make_pair(&lhs,&rhs));
            return true;
        }
        else{
            if(DEBUG){
                std::cerr << __LINE__ << " code 1001 :" << "cant pair" << '\n';
            }
        }

}

bool breedingProgram::unpair(ba::bird &lhs, ba::bird& rhs){


    if(sameBird(lhs,rhs)){
        std::cerr << "same bird cant unpaired" << '\n';
        return false;
    }

    if ( !lhs.hasPair() && !rhs.hasPair()){
        std::cout << "code 0002 :no thing done .. birds doesnt have pairs" <<'\n';
        return true;
    }
    else
        {
        //confirmation to get paired birds unpaired first and then pair them
        lhs.setPairedWith(nullptr);
        rhs.setPairedWith(nullptr);

        return (!lhs.hasPair() && !rhs.hasPair());
        }
}
bool breedingProgram::unpair_pair(ba::bird &lhs, ba::bird &rhs){
       const bool unpaired = unpair(lhs,rhs);
       const bool paired = pair(lhs,rhs);

    return (unpaired && paired);
}

const std::vector<std::pair<ba::bird *, ba::bird *>> &breedingProgram::getPairedBirds() const {
    return pairedBirds;
}

void breedingProgram::newBird(const int & id, const std::string& name,const Date& DatePorn ,const ba::type & type ,const ba::BirdCycle & cycle) {
    this->birds.emplace_back(ba::bird(id,  name, DatePorn ,type  ,cycle));
}

void breedingProgram::newBird(ba::bird &bird) {
    if(&findBird(bird.getName_())== nullptr)
    birds.emplace_back(bird);
}

inline bool breedingProgram::sameBird(const ba::bird &lhs, const ba::bird &rhs) const {
    return (lhs == rhs);
}

const ba::bird &breedingProgram::findBird(const std::string &birdname) const {

    return *std::find_if(birds.begin(),birds.end() , [&birdname](const ba::bird& b)
    {
        if(b.getName_() == birdname){
            std::cout << "found :" << birdname << "\n";
            return true;
        }
    });

}

const ba::bird &breedingProgram::findBird(const int &ID) const {
    return *std::find_if(birds.begin(),birds.end() , [&ID](const ba::bird& b)
    {
        if(b.getId_() == ID){
            return true;
        }
    });
}

bool breedingProgram::isPaired(const ba::bird &bird) const {

    auto found = std::find_if(pairedBirds.begin(),pairedBirds.end(),[&bird](const std::pair<ba::bird *,ba::bird*> &pair){
        if(*pair.first == bird || *pair.second== bird){
            return true;
        }
    });
    return (found!=pairedBirds.end());
}

bool breedingProgram::isPaired(const ba::bird &lhs, const ba::bird &rhs) const {
    auto found = std::find_if(pairedBirds.begin(),pairedBirds.end(),[&rhs,&lhs](const std::pair<ba::bird *,ba::bird*> &pair){
        if(*pair.first == lhs && *pair.second== rhs || *pair.second == lhs && *pair.first== rhs ){
            return true;
        }
    });
    return (found!=pairedBirds.end());


}




