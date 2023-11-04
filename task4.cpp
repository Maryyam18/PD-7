#include<iostream>
using namespace std;
int  traingle(int number);

main(){
    int number;
    cout << "Enter number of Triangle: ";
    cin >> number;
    cout << "Dots in the Triangle: "<< traingle(number); 
   
}
int traingle(int number){
int dots=0;
int stars=0;

for(int i=1; i<= number; i++){
dots=stars+i;
stars=stars+i;

}
return dots;
}



