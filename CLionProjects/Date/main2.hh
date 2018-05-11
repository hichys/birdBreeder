//
// Created by awad on 10/05/18.
//

#ifndef DATE_MAIN2_HH
#define DATE_MAIN2_HH


#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <iomanip>

//int main(){
//
//
//    std::time_t t = std::time(nullptr);
//    std::tm tm = *std::localtime(&t);
//    std::cout << "Today is  " << std::put_time(&tm, "%D")._M_tmb->tm_year+1900;
//
//    tm.tm_mon -= 100;  // tm_mon is now outside its normal range
//    std::mktime(&tm);  // tm_dst is not set to -1; today's DST status is used
//    std::cout << "\n100 months ago was " << std::put_time(&tm, "%c %Z");
//
//
//    //date 5/1/2017
//    std::tm tm1 =*std::localtime(&t);
//    tm1.tm_year = 2017;
//    tm1.tm_mday = 5;
//    tm1.tm_mon = 1;
//
//    std::cout << " >"<< tm.tm_year;
//    time_t t2 =mktime(&tm1);
//    std::cout << '\n'<<std::difftime(t2,t);
//
//}


#endif //DATE_MAIN2_HH
