#include <iostream>
#include <string>


void timeConverter(std::string &s){
    std::string temp;
    int hour = stoi(s.substr(0,2));
    
    if(s.substr(s.length()-2) == "PM"){ // check if it is PM
        
        hour += (hour < 12) ? 12 : 0; // if the hour is less then 12, add 12 or add nothing.


    } else {

       

        hour -= (hour == 12) ? 12 : 0; // if hour is 12 in am , minus it with 12
    }

    temp = (hour > 10) ? std::to_string(hour) : "0" + std::to_string(hour);
    
    temp += s.substr(2, s.length()-4);
    
    std::cout <<temp;

}


int main(){

    std::string name = "12:00:00AM";// "01:01:00PM"

    timeConverter(name);
    
    



    return 0;
}