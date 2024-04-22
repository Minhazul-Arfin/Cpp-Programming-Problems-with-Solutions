#include <iostream>
using namespace std;


bool isEven(int number){
    return (number % 2 == 0);
}


int main(){
    int number;

    cout<<"Enter a number to check even or odd: ";
    cin>>number;

    if(isEven(number)){
        cout<<"The number "<<number << " is a Even number.\n";
    }
    else{
        cout<<"The number "<<number << " is an Odd number.\n";
    }
}
