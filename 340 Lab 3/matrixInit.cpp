//implement your matrixInit() function here.
//remember to include your function definition in the namespace NS_MATRIX as follows:
//namespace NS_MATRIX{
//       //include your function definition here.
//}

#include "matrixInit.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace NS_MATRIX{
    void matrixInit(vector<vector<int>>& matrix, int numRows, int numCols){
        matrix.resize(numRows, vector<int>(numCols));
        for (int i = 0; i < numRows; i++){
            for (int j = 0; j < numCols; j++){
                matrix[i][j] = i * j;
            }
        }
    }
}

int main(){
    std::vector<std::vector<int>> matrix;
    int numRows = 3;
    int numCols = 3;
    NS_MATRIX::matrixInit(matrix, numRows, numCols);

    for (int i = 0; i < numRows; i++){
        for (int j = 0; j < numCols; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}






