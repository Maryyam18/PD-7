#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int number);
int primorial(int multiplication);

main()
{
    int number;
    int multiplication;
    cout << "Enter Number: ";
    cin >> multiplication;
    int number1;
    number1 = primorial(multiplication);
    cout << number1;
}

bool isPrime(int number){
    if(number <= 1){
        return false;
    } 
for(int i=2; i<number; i++){
   
    if( number%i == 0){
        return false;
    }
}
     

        return true;
}
int primorial(int multiplication){

    int product=1, i=2;
    while(multiplication != 0){
        if(isPrime(i)){
            product *= i;
            multiplication--;
        }
        i++;
    }
    return product;
}

