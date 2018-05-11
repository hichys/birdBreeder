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
    tm_.tm_mon = data.at(1);
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
    this->tm.tm_mon--;
}


double diff(  Date &date_ ,  Date& date2_) {

    time_t x= mktime(&date_.tm);
    time_t y= mktime(&date2_.tm);
    auto result  = difftime(x,y);

    return result;
}
