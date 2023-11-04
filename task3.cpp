#include<iostream>
using namespace std;
void numberAmplified(int number);


main(){
int number;
cout << "Enter the number to Amplify: ";
cin >> number;
numberAmplified(number);
}

void numberAmplified(int number)
{
for (int i= 1; i<= number; i++){
    if(i%4==0){
        cout << 10 * i;
    }
    else  {
        cout << i;
    }
    if(i < number){
        cout << ", ";
    }
        
}
}

