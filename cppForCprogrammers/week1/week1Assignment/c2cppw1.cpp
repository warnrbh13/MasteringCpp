// Convert this program to c++

// change to c++ _IO_FILEchange to one line comments

// change defines of constantes to const

// change array to vector<>

// inline any short function

// Author: Benjamin Barbosa
// Date:   30 / 09 / 2020

#include <iostream>
#include <vector>
using namespace std;
const short int nOfData = 40;

// Performs the sum of a data stored in vector "data". The result of the
// sum is stored in the reference "accum".
void sum(int& accum, vector<int> data){
    for(vector<int>::iterator i = data.begin() ; i != data.end(); ++i){
        accum += i.operator*();
    }
}

// Fills vector with data from 0 to "nOfData"
void fillData(vector<int>& data){
    for(int i = 0 ; i < nOfData ; ++i){
        data.push_back(i);
    }
}

int main(){
    vector<int> data;
    fillData(data);
    int accum = 0;
    sum(accum, data);
    cout << "sum is :" << accum << std::endl;
    return 0;
}