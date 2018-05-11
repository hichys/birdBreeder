//
// Created by awad on 10/05/18.
//

#ifndef BIRDBREEDER_BIRD_H
#define BIRDBREEDER_BIRD_H

#include <string>
#import "type.h"
#import "status.h"
#import "Date.hh"

namespace ba {

    class bird {


    public:
        bird(const int & id, std::string name,const Date& DatePorn ,const ba::type &  ,const BirdCycle &);



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

        BirdCycle getCycle() const;
        void setCycle(BirdCycle cycle);

        //operator overloads


    private:
          int id_;
          std::string name_{};
          Date birthday;
          ba::type type_;
          BirdCycle cycle;
          double age_;

    };
}

#endif //BIRDBREEDER_BIRD_H
