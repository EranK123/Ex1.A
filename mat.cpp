#include "mat.hpp"
#include <iostream>
#include <string>
using namespace std;

// char* increase_size_arr(char* oldArr, int size, char c);
void delete_mat(char** mat, int size);
std::string mat_to_string(char** mat, int row, int col);
char** build_mat(int col, int row, char sym1, char sym2);

std::string ariel::mat(int col, int row, char sym1, char sym2){
//     std::string s =  "Num of rows is: " + std::to_string(row) + "\n" + "Num of cols is: " + std::to_string(col)
//     + "\n" + "First symbol is: " + sym1 + "\n" +  "Second symbol is: " + sym2; //row  + "\n" + "Num of cols is: " + col 
//    // << endl << "First symbol is " << sym1 << endl << " Second symbol is: " << sym2 << endl;
//     return s;
    char** mat = build_mat(col, row, sym1, sym2);
    string s = mat_to_string(mat, row, col);
    delete_mat(mat, row * col);
    return s;

}

char** build_mat(int col, int row, char sym1, char sym2){
    // cout << "23" << endl;
    char** mat = new char*[row];
    for (int i = 0; i < row; i++){
        mat[i] = new char[col];
    }
    int temp_row = row;
    int temp_col = col;
    int i = 0;
    int start_index = 0;
    int row_idx = 0;
    char c = sym1;
    int count = 0;
    while(count != row * col){
    // cout << count << endl;  
    for(int j = start_index; j < col; j++){
        mat[i][j] = c;
        count++;  
        //  cout << count << endl; 
    }
     if(count == temp_row * temp_col){
        break;
    }
    row_idx++;      
    for(int j = row_idx; j < row - 1; j++){
        mat[j][i] = c;
        count++;    
    }

    i = col - 1;
    for(int j = row_idx; j < row - 1; j++){
        mat[j][i] = c;
        count++;
    }
    i = row - 1;
    for(int j = start_index; j < col; j++){
        mat[i][j] = c;
        count++;
    }
    row--; 
    col--;
    start_index++; 
    i = start_index; 
    if(c == sym1){
        c = sym2;
    }else{
        c = sym1;
    }  
}
cout << "69" << endl;
return mat;
}

std::string mat_to_string(char** mat, int row, int col){
    int i;
    string s = "";
    for(int i = 0; i < row; i ++){
        for (int j = 0; j < col; j++){
            s += mat[i][j];
        } 
        s += "\n";
    }
    return s;
}

void delete_mat(char** mat, int size){
    for(int i = 0; i < size; i++){
        delete[] mat[i];
    }
    delete[] mat;
}

// char** build_mat(int col, int row, char sym1, char sym2){
//     char** mat = new char*[row * col];
//     int middle = (row / 2);
//     int i = 0;
//     int start_index = 0;
//     // char c1 ,c2;
//      for(int j = start_index; j < col; j++){ // first row
//                 mat[i][j] = sym1;
//     }
//     i++;
//     start_index++;
//     middle--;
//     col--;
//     int arr_size = 1;
//     char *arr = new char[arr_size];
//     arr[0] = sym1;
//     while (middle >= 0){
//        for(int j = 0; j < arr_size; j++){
//            mat[i][j] = *(arr + j);
//        } 
//        for(int j = start_index; j < col; j++){
//            mat[i][j] = sym2;
//        }
//        for(int j = col - 1; j > 0; j--){
//            if(arr + j){
//             mat[i][j] = *(arr + j);
//            }
           
//        } 
//     i++;
//     start_index++;
//     col--;
//     middle--;
//     arr_size++;
//     arr = increase_size_arr(arr, arr_size, sym2);
//     }
// }

// char* increase_size_arr(char* oldArr, int size, char c){
//     char* newArr = new char[size+1];
//     copy(oldArr, oldArr + size, newArr);
//     delete[] oldArr;
//     oldArr = newArr;
//     newArr[size] = c;
//     return newArr;
// }




int main(){
    cout << ariel::mat(9,7, '@', '-') << endl; 
    return 0;
}
