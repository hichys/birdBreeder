//
// Created by awad on 11/05/18.
//

#include <string>
#include "../include/Date.hh"

std::tm stringToTm(const std::string& date,const std::string& time){
    struct tm tm_;

    std::istringstream isDate(date);
    std::istringstream isTime(time);

    std::string temp;
    std::vector<int> data;

    while(getline(isDate,temp,'/')) {
        data.push_back(stoi(temp));
    }

    tm_.tm_mday = data.at(0);
    tm_.tm_mon = data.at(1)-2;
    tm_.tm_year = data.at(2);

    temp.clear();
    data.clear();
    while(getline(isTime,temp,':')){
        data.push_back(stoi(temp));
    }

    tm_.tm_sec = data.at(0);
    tm_.tm_min = data.at(1);
    tm_.tm_hour = data.at(2);

    return tm_;
}

Date::Date(std::string date, std::string time)
        : date_(date), time_(time)
{
    this->tm =  stringToTm(date, time);
    this->tm.tm_mon++;

}

std::ostream &operator<<(std::ostream &os, const Date &date) {
    return os << date.tm.tm_mday << ':' <<date.tm.tm_mon << ':' << date.tm.tm_year << '\n';
}


double diff(   Date &date_ ,   Date& date2_) {

    time_t x= mktime(&date_.tm);
    std::cout << date_;

    time_t y= mktime(&date2_.tm);
    std::cout << date2_;
    if ( x != (std::time_t)(-1) && y != (std::time_t)(-1) )
    {
        double difference = std::difftime(y, x) / (60 * 60 * 24 );

        std::cout << "difference = " << difference << " days" << std::endl;
        return difference;
    }
}
