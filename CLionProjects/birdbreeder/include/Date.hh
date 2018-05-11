//
// Created by awad on 10/05/18.
//

#ifndef BIRDBREEDER_DATE_HH
#define BIRDBREEDER_DATE_HH

#include <iomanip>
#include <iostream>
#include <vector>
#include "ostream"

//take string convert it to tm struct
std::tm stringToTm(const std::string& date,const std::string& time);




class Date {

public:
    explicit Date()   {
        currentDateTime();

    }


    Date(std::string date, std::string time);

    void currentDateTime() {
        std::put_time(&tm, "%D");
        this->tm.tm_mon++;
        this->tm.tm_year +=1900;
    }

    friend std::ostream&  operator<<(std::ostream &os,const Date &date);
    std::string date_;
    std::string time_;
    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);

};

double diff( Date& date_ , Date& date2_ ) ;




#endif //BIRDBREEDER_DATE_HH
