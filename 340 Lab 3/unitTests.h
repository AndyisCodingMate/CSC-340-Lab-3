//header file that includes all your unit tests as inline functions. 
//please include 3 unit tests for each of the following functions in the the namespace: NS_UNIT_TESTS
// 1. matrixInit()
// 2. operator<=  for TokenFreq objects
// 3. operator+  for TokenFreq objects
// 4. getTokenFreq()
// 5. each of the two sorting algorithms 

//naming convention: 
//   test1_[function name]
//   test2_[function name]
//   test3_[function name]

//Note 1. for the two operators <= and +, use the following function names
//    test?_operatorLE();      //replace ? with 1, 2 or 3
//    test?_operatorPlus();    //replace ? with 1, 2 or 3


//Note 2: all your unit tests should return true/false like in Lab#1 and Lab#2

#ifndef UNITTESTS_H_  
#define UNITTESTS_H_
   namespace NS_UNIT_TESTS{
      //test: if a 3x3 works
      bool test1_matrixInit(){
         vector< vector<int> > lhs;
         int numRows = 3;
         int numCols = 3;
         matrixInit(lhs,numRows,numCols);
         vector< vector<int> > rhs = {{0,0,0},{0,1,2},{0,2,4}};
         if (lhs==rhs){
            return true;
            }
         else{
            return false;
            }
         }
      
      //test: if an empty matrix work
      bool test2_matrixInit(){
         vector< vector<int> > lhs;
         int numRows = 0;
         int numCols = 0;
         matrixInit(lhs,numRows,numCols);
         vector< vector<int> > rhs (2, vector<int>(2));
         if (lhs==rhs){
            return true;
            }
         else{
            return false;
            }
         }
      
      //test: if a 3x3 does not equal to an empty matrix
      bool test3_matrixInit(){
         vector< vector<int> > lhs;
         int numRows = 3;
         int numCols = 3;
         matrixInit(lhs,numRows,numCols);
         vector< vector<int> > rhs (2, vector<int>(2));
         if (lhs!=rhs){
            return true;
            }
         else{
            return false;
            }
         }
         
      bool test1_operatorLE(){
         TokenFreq
         }
      
      
      
         
      }
#endif