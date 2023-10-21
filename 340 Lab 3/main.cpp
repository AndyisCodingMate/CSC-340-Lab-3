//call your unit tests in this program file
#include "matrixInit.h"
#include "tokenFreq.h"
#include "unitTests.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

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
         
      //Test: Different token, different freq
      bool test1_operatorLE(){
         TokenFreq lhs = {"I'm",1};
         TokenFreq rhs = {"Are",2};
         return lhs<=rhs;
         }
      
      //Test: Different Token, same freq
      bool test2_operatorLE(){
         TokenFreq lhs = {"I'm",0};
         TokenFreq rhs = {"pond",0};
         return lhs<=rhs;
         }
      
      //Test: Same Token, different freq   
      bool test3_operatorLE(){
         TokenFreq lhs = {"I'm",1};
         TokenFreq rhs = {"I'm",2};
         return lhs<=rhs;
         }
      
      //Test: Same token, same freq
      bool test1_operatorPlus(){
         TokenFreq tk1 = {"he",10};
         TokenFreq tk2 = {"she",5};
         TokenFreq lhs = tk1 + tk2;
         TokenFreq rhs = {"he or she",15};
         return lhs == rhs;
         }
      
      //Test: Same Token, different freq
      bool test2_operatorPlus(){
         TokenFreq tk1 = {"car",1};
         TokenFreq tk2 = {"bus",5};
         TokenFreq lhs = tk1 + tk2;
         TokenFreq rhs = {"car or bus",16};
         return lhs != rhs;
         }
      
      //Test: Different Token, same freq
      bool test3_operatorPlus(){
         TokenFreq tk1 = {"he",10};
         TokenFreq tk2 = {"she",5};
         TokenFreq lhs = tk1 + tk2;
         TokenFreq rhs = {"car or bus",6};
         return lhs != rhs;
         }
         
      }

   //void getTokenFreqVec(string& istr, vector<TokenFreq>& tfVec)
      bool test1_getTokenFreqVec(){
         vector<TokenFreq> lhs;
         vector<TokenFreq> rhs;
         string test = "You are in, and you are out.";
         getTokenFreq(test, lhs);
         TokenFreq a = {"you",2};
         TokenFreq b = {"are,",2};
         TokenFreq c = {"in,",1};
         TokenFreq d = {"and",1};
         TokenFreq e = {"out.",1};
         rhs = {a,b,c,d,e};
         return lhs == rhs;
         }
      
      bool test2_getTokenFreqVec(){
         vector<TokenFreq> lhs;
         vector<TokenFreq> rhs;
         string test = "You, you, me, are also me.";
         getTokenFreq(test, lhs);
         TokenFreq a = {"you,",2};
         TokenFreq b = {"me,",2};
         TokenFreq c = {"are",1};
         TokenFreq d = {"also",1};
         TokenFreq e = {"me.",1};
         rhs = {a,b,c,d,e};
         return lhs == rhs;
         }
         
      bool test3_getTokenFreqVec(){
         vector<TokenFreq> lhs;
         vector<TokenFreq> rhs;
         string test = "10 people died, 100 people were hurt.";
         getTokenFreq(test, lhs);
         TokenFreq a = {"10",1};
         TokenFreq b = {"people",2};
         TokenFreq c = {"died,",1};
         TokenFreq d = {"100",1};
         TokenFreq e = {"were",1};
         TokenFreq f = {"hurt.",1};
         rhs = {a,b,c,d,e,f};
         return lhs == rhs;
         }
   
      bool test1_selectionSort(){
         vector<TokenFreq> lhs;
         vector<TokenFreq> rhs;
         string test = "Never, never, never, not make him not do that again. ";
         getTokenFreq(test,lhs);
         selectionSort(lhs);
         TokenFreq a = {"never,",3};
         }
         
      bool test1_insertionSort(){
         }

int main(){
   }