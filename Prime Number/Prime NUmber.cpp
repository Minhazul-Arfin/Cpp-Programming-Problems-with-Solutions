#include <iostream>
using namespace std;



bool isPrime(int number){
    int i;

    if(number <= 1){
        return false;
    }

    for(i=2; i <= number/2; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}



int main(){
    int number;
    cout<<"Enter a number to check Prime number or not: ";
    cin>> number;

    if(isPrime(number)){
        cout<<"The Number "<< number <<" is a Prime Number\n";
    }
    else{
        cout<<"The Number "<< number <<" is Not a Prime Number\n";
    }

    return 0;
}
