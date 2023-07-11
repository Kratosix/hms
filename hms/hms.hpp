#ifndef _HMS_HPP_
#define _HMS_HPP_

#include <iostream>
#include <fstream>
#include <string>

class Date{
    private:
        int m_date;
        int m_month;
        int m_year;

    public:
        Date(int date=0, int month=0, int year=0): m_date(date), m_month(month), m_year(year){
        }

        friend std::ostream& operator<<(std::ostream& out, const Date& date);
        friend std::istream& operator>>(std::istream& in, Date& date);
};

std::ostream& operator<<(std::ostream& out, const Date& date){
    out<<(date.m_date)<<"/"<<(date.m_month)<<"/"<<(date.m_year)<<"\n";

    return out;
}

std::istream& operator>>(std::istream& in, Date& date){
    std::cout<<"DD/MM/YY \n";
    in>>date.m_date;
    in>>date.m_month;
    in>>date.m_year;


    return in;
}


class Room{
    private:
        int m_room_id;
        Date m_check_out;
        Date m_check_in;

    public:
        
        Room(int p_room_id=0,Date p_check_out={}, Date p_check_in={}): m_room_id(p_room_id), m_check_out(p_check_out), m_check_in(p_check_in){}
        
        //friend int getMoney();

        friend std::ostream& operator<<(std::ostream& out, const Room& room);
        friend std::istream& operator>>(std::istream& in, Room& room);
};

std::ostream& operator<<(std::ostream& out, const Room& room){
    out<<"Your room is "<<room.m_room_id<<"\n";
    out<<"Your check out date is "<<room.m_check_out<<"\n";
    out<<"Your check in date is "<<room.m_check_in<<"\n";

    return out;
}

std::istream& operator>>(std::istream& in, Room& room){
    std::cout<<"Enter room id \n";
    in>>room.m_room_id;
    std::cout<<"Enter room check in date \n";
    in>>room.m_check_in;
    std::cout<<"Enter room check out date \n";
    in>>room.m_check_out;

    return in;
}
#endif //_HMS_CPP_
