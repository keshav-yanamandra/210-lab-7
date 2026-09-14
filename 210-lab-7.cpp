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

    //new dynamic array for reversed array
    string *reversedData = nullptr;
    reversedData = reverseArray(data);

    cout << "Original array: ";

    displayArray(data);
    cout << endl;
    cout << endl;

    cout << "Reversed array: ";

    displayArray(reversedData);
    cout << endl;

    // delete array when done
    delete [] data;
    delete [] reversedData;

    return 0;
}

void displayArray(string *arr) {

    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }
}

string* reverseArray(string *arr) {
    string *tempData = nullptr;
    tempData = new string[SIZE];

    for (int i = 0; i < SIZE; i++) {
        *(tempData + i) = *(arr + (SIZE - i -1));
    }
    return tempData;
}