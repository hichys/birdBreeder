//
// Created by awad on 10/05/18.
//

#include <string>
#include "../include/bird.h"

std::string ba::bird::getType()   noexcept {
    switch (this->type_){
        case ba::type::male:
            return "Male";
        case ba::type::female:
            return "Female";
        default:{
            return "unkown";
        }

    }

}
ba::bird::bird(const int& id, const std::string name, const Date& bd ,
               const ba::type& type,const BirdCycle & cycle)

        :id_(id),name_(std::move(name)),birthday(bd),type_(type),cycle(cycle)
{
        Date currentDate{};
        this->age_ = diff(this->birthday,currentDate);
}

std::string ba::bird::whatCycle() noexcept {

    switch (this->cycle){
        //    chick, moulting , pairing, nestting , layyingEgg , hatching, feedingChicks,  ioslating

        case ba::BirdCycle::chick:{
            return "chick";
        }
        case ba::BirdCycle::moulting:{
            return "moulting";
        }
        case ba::BirdCycle::pairing:{
            return "moulting";
        }
        case ba::BirdCycle::nestting:{
            return "moulting";
        }
        case ba::BirdCycle::layyingEgg:{
            return "layyingEgg";
        }
        case ba::BirdCycle::hatching:{
            return "hatching";
        }
        case ba::BirdCycle::raisingChicks:{
            return "raising Chicks";
        }
        case ba::BirdCycle::ioslating:{
            return "isolating";
        }

        default: {
            return  "unknown";
        }
    }
}

int ba::bird::getId_() const {
    return id_;
}

void ba::bird::setId_(int id_) {
    bird::id_ = id_;
}

const std::string &ba::bird::getName_() const {
    return name_;
}

void ba::bird::setName_(const std::string &name_) {
    bird::name_ = name_;
}

double ba::bird::getAge_() const {
    return age_;
}

void ba::bird::setAge_(int age_) {
    bird::age_ = age_;
}

ba::type ba::bird::getType_() const {
    return type_;
}

void ba::bird::setType_(ba::type type_) {
    bird::type_ = type_;
}

ba::BirdCycle ba::bird::getCycle() const {
    return cycle;
}

void ba::bird::setCycle(ba::BirdCycle cycle) {
    bird::cycle = cycle;
}
