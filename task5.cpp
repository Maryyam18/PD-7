#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int number);

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    int number1;
    number1 = isPrime(number);
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
