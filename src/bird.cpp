//
// Created by awad on 10/05/18.
//

#include <string>
#include "../include/bird.h"
/*
 *
template<typename... ArgTypes>
inline void print(ArgTypes... args)
{
    // trick to expand variadic argument pack without recursion
    using expand_variadic_pack = int[];
    // first zero is to prevent empty braced-init-list
    // void() is to prevent overloaded operator, messing things up
    // trick is to use the side effect of list-initializer to call a function
    // on every argument.
    // (void) is to suppress "statement has no effect" warnings
    (void)expand_variadic_pack{0, ((std::cout << args), void(), 0)... };
}

#ifndef MYDEBUG
#define debug_print(...)
#else
#define debug_print(...) print(__VA_ARGS__)
#endif

 */

  std::string ba::bird::getType() const  noexcept {
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

ba::bird::bird(const int& id, const std::string &name, const Date& bd ,
               const ba::type& type,const BirdCycle & cycle)

        :id_(id),name_(name),birthday(bd),type_(type),cycle(cycle)
{

        ++birthday.tm.tm_mon;
        Date currentDate;
        this->age_ = DateDiff(this->birthday, currentDate);


}

  std::string ba::bird::whatCycle() const noexcept {
/*
 *   chick, moulting , pairing, nestting , layyingEgg , hatching, raisingChicks,  ioslating ,
        sick , healthy,unknown
 */
    switch (this->cycle){
        case ba::BirdCycle::chick:{
            return "chick";
        }
        case ba::BirdCycle::moulting:{
            return "moulting";
        }
        case ba::BirdCycle::pairing:{
            return "pairing";
        }
        case ba::BirdCycle::nestting:{
            return "nesting";
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
        case ba::BirdCycle ::sick:{
            return "sick";
        }
        case ba::BirdCycle::healthy:{
            return "healthy";
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

ba::bird *ba::bird::getPairedWith() const {
    return pairedWith;
}

void ba::bird::setPairedWith(ba::bird *pairedWith) {
    bird::pairedWith = pairedWith;
}

const Date &ba::bird::getBirthday() const {
    return birthday;
}

void ba::bird::setBirthday(const Date &birthday) {
    bird::birthday = birthday;
}


