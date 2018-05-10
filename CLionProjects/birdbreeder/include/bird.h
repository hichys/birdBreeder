//
// Created by awad on 10/05/18.
//

#ifndef BIRDBREEDER_BIRD_H
#define BIRDBREEDER_BIRD_H

#include <string>
#include "../include/type.h"
#include "../include/status.h"
namespace ba {

    class bird {


    public:
        bird(const int &,const std::string &,const int & ,const ba::type & ,const BirdCycle &);



        std::string getType() noexcept ;
        std::string whatCycle() noexcept ;

        int getId_() const;
        void setId_(int id_);

        const std::string &getName_() const;
        void setName_(const std::string &name_);

        int getAge_() const;
        void setAge_(int age_);

        type getType_() const;
        void setType_(type type_);

        BirdCycle getCycle() const;
        void setCycle(BirdCycle cycle);

    private:
          int id_;
          std::string name_{};
          int age_;
          ba::type type_;
          BirdCycle cycle;

    };
}

#endif //BIRDBREEDER_BIRD_H
