// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 7

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void displayArray(string*);
string* reverseArray(string*);


int main (){

    // creating dynamic array
    string *data = nullptr;
    data = new string[SIZE];

    // add names with pointer 
    *(data + 0) = "Janet";
    *(data + 1) = "Jeffe";
    *(data + 2) = "Jin";
    *(data + 3) = "Joe";
    *(data + 4) = "Junio";

    cout << *(data + 0) << " ";
    cout << *(data + 1) << " ";
    cout << *(data + 2) << " ";
    cout << *(data + 3) << " ";
    cout << *(data + 4) << endl;

    cout << "Original array: ";
    displayArray(data);
    cout << endl;

    // delete array when done
    delete [] data;

    return 0;
}

void displayArray(string *arr) {

    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
        cout << endl;
    }
}
string* reverseArray(string *arr) {
    string *tempData = nullptr;
    tempData = new string[SIZE];

    for (int i = 0; i < SIZE; i++) {
        *(tempData + i) = *(arr + (SIZE - i));
    }
    return tempData;
}