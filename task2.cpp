#include<iostream>
using namespace std;


void printStars(int rowSize);
void printStars1(int rowSize);

main(){
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    printStars(rowSize);
    printStars1(rowSize);
}
void printStars(int rowSize){
    int size = rowSize/2;

    for(int row = 1; row <= size; row++){
        for(int column = 1; column <= size - row; column++){
            cout << " ";
        }
        for(int star = 1; star <= row; star++){
            cout << "*";
        }
        cout << endl;
    }
}

void printStars1(int rowSize)
{ 
    int size = rowSize/2;   
    for (int row = 1; row <= size; row++)
    {   
        for (int column = 1; column < row; column++)
        {
            cout << " ";
        }
        for (int star = row; star <= size; star++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}

    

