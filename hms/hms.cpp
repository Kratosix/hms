#include <iostream>
#include "hms.hpp"


int main(){
    
    std::cout<<" WELCOME TO HOTEL RESERVATION MANAGEMENT SYSTEM \n";
    std::cout<<"Would you like to book for a room?(1 for yes, 2 for no) \n";

    int l;
    std::cin>>l;

    switch(l){
        case 1:
        {
            Room k;
            std::cin>>k;
            std::cout<<k;
            break;
        }
        case 2:
            std::cerr<<"Chose to exit the program and quitting it \n";
            std::exit(0);
            break;
        default:
            std::cerr<<"WRONG CHOICE\n";
    }

    return 0;
}
