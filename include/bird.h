//
// Created by awad on 10/05/18.
//

#ifndef BIRDBREEDER_BIRD_H
#define BIRDBREEDER_BIRD_H

#include <string>
#include <cassert>
#include "type.h"
#include "status.h"
#include "Date.hh"

namespace ba {

    struct Egg{

        Date DateLayed;

        unsigned int total{};
        unsigned int totalVer{};
        unsigned int totalNotVer{};

        unsigned int current{};
        unsigned int totalCurrentVer{};
        unsigned int totalCurrentNotVer{};

        unsigned int hatched{};
        unsigned int totalHatched{};
        unsigned int totalNotHatched{};

        //additional
        /*
         * sucsses rate for current eggs according to previoes eggs hatchies
         *
         */
    };

    class bird{

    public:
        bird(const int & id, const std::string& name,const Date& DatePorn ,const ba::type &  ,const BirdCycle &);

        std::string getType()   const noexcept ;
        std::string whatCycle() const noexcept ;

        int getId_() const;
        void setId_(int id_);

        const std::string &getName_() const;
        void setName_(const std::string &name_);

        double getAge_() const;
        void setAge_(int age_);

        type getType_() const;
        void setType_(type type_);
        bird *getPairedWith() const;

        void setPairedWith(bird *pairedWith);
        BirdCycle getCycle() const;
        void setCycle(BirdCycle cycle);

        const Date &getBirthday() const;

        void setBirthday(const Date &birthday);

        //
        bool hasPair(){
            return (this->pairedWith != nullptr);
        }

        //operator overloads

        bool operator==(const ba::bird& rhs) const {
            return (this->getId_() == rhs.getId_());
        }
        bool operator!=(const ba::bird& rhs){
            return !(operator==(rhs));
        }

          bool  operator>(const ba::bird &rhs)   {
            return (this->getAge_() > rhs.getAge_());
        }
          bool operator<(const ba::bird &rhs)   {
            return !operator>(rhs);
        }

        Egg &eggs() {
            return this->egg;
        }

        typedef const unsigned int &layyedEgg;
        typedef unsigned int &&verEgg;

        void setCurrentEggsLayed(layyedEgg layyed,verEgg ver=0){
            if(ver == 0) {
                ver = layyed;
            }
            this->egg.current = layyed;
            this->egg.totalCurrentVer = ver;
            this->egg.totalCurrentNotVer = layyed - ver;
            this->egg.total += this->egg.current;
            this->egg.totalVer += ver;
            this->egg.totalNotVer += this->egg.totalCurrentNotVer;
        }
        void setHatching(const unsigned int hatached){
            this->egg.hatched = hatached;
            this->egg.totalHatched += hatached;

            assert(hatached < egg.current);
            this->egg.totalNotHatched += egg.current - hatached;
        }

    private:
          int id_{};
          std::string name_{};
          Date birthday{};
          ba::type type_{};
          BirdCycle cycle{};
          double age_{};
          bird *pairedWith = nullptr;
          Egg egg{};

    };


}




#endif //BIRDBREEDER_BIRD_H
