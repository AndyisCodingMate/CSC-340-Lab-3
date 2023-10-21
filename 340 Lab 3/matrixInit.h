//header file

//Your to-DOs:
//1. include your header file guard
//2. include the required library files 
//3. declare the namespace NS_MATRIX
//4. within the namespace, include the prototype of the MatrixInit() function. 

#ifndef MATRIXINITH  
#define MATRIXINITH

#include <vector>
namespace NS_MATRIX{
   void matrixInit(std::vector<std::vector<int>>& matrix, int numRows, int numCols);
}
#endif