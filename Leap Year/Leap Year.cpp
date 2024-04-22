#include <iostream>
using namespace std;



//Function to check whether the year is leap year or not
bool isLeapYear(int year){
    if(year % 400 == 0){
        return true;
    }
    else if(year % 100 == 0){
        return false;
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int year;

    cout<<"Enter a year: ";
    cin>> year;

    if(isLeapYear(year)){
        cout<<"The year "<<year<<" is Leap Year\n";
    }
    else{
        cout<<"The year "<<year<<" is Not a Leap Year\n";
    }

    return 0;
}
