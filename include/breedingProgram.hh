//
// Created by awad on 13/05/18.
//

#ifndef BIRDBREEDER_BREEDINGPROGRAM_HH
#define BIRDBREEDER_BREEDINGPROGRAM_HH

#include <algorithm>
#include <map>
#include "bird.h"
/*
 * define fuctionality to birds to get paired to gother
 * and have chicks
 */
class breedingProgram {

public:


    std::vector<std::pair<ba::bird*,ba::bird*>> pairedBirds{};
    std::vector<ba::bird> birds{};
//    using mapstrbird = std::map<std::string , ba::bird>;

    breedingProgram(const breedingProgram&) = delete;
    breedingProgram(const breedingProgram&&) = delete;

    explicit breedingProgram() {

    }
    breedingProgram (ba::bird &lhs , ba::bird &rhs);
    bool pair       (ba::bird &lhs , ba::bird &rhs);
    bool unpair     (ba::bird &lhs , ba::bird &rhs);
    bool unpair_pair(ba::bird &lhs , ba::bird &rhs);

    const std::vector<std::pair<ba::bird *, ba::bird *>> &getPairedBirds() const;

    void newBird(const int & id, const std::string& name,const Date& DatePorn ,const ba::type &  ,const ba::BirdCycle &);
    void newBird(ba::bird & bird);

    bool isPaired(const ba::bird &bird) const;
    bool isPaired(const ba::bird &lhs,const ba::bird &rhs) const;

    const ba::bird &findBird(const std::string &birdname) const;
    const ba::bird &findBird(const int &ID) const;

    private:
    inline bool sameBird(const ba::bird &lhs, const ba::bird &rhs) const ;
    };

#endif //BIRDBREEDER_BREEDINGPROGRAM_HH
