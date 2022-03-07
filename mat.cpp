#include "mat.hpp"
#include <iostream>
#include <string>
using namespace std;


std::string ariel::mat(int row, int col, char sym1, char sym2){
    std::string s =  "Num of rows is: " + std::to_string(row) + "\n" + "Num of cols is: " + std::to_string(col)
    + "\n" + "First symbol is: " + sym1 + "\n" +  "Second symbol is: " + sym2; //row  + "\n" + "Num of cols is: " + col 
   // << endl << "First symbol is " << sym1 << endl << " Second symbol is: " << sym2 << endl;
    return s;
}


int main(){
    cout << ariel::mat(13, 5, '@', '-') << endl; 
    return 0;
}
