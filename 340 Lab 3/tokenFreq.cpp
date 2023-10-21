//implement the functions declared in tokenFreq.h
// namely,
// - getTokenFreq()'s prototype
// - the two sorting algorithms' prototypes

//remember to include all the function defintions in the declared namespace NS_TOKEN_FREQ 
//in the following fashion: 
// namespace NS_TOKEN_FREQ{
//       //define the first function here
//       //define your second function here
//       ...
//}

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <tokenFreq.h>

using namespace std;

bool opeartor<=(const TokenFreq& o1, const TokenFreq o2){
   if (o1.freq<=o2.freq){
      return true;
      }
   else{
      return false;
      }
   }

TokenFreq opeartor+(const TokenFreq& o1, const TokenFreq& o2){
   TokenFreq o3;
   o3.token = o1.token + " or " + o2.token;
   o3.freq = o1.freq + o2.freq; 
   return o3;
   }
   
ostream& opeartor<<(ostream& os, const TokenFreq& o1){
   os<<"(token,freq)=("<<o1.token<<","<<o1.freq<<")";
   return os;
   }
   
void getTokenFreqVec(string& istr, vector<TokenFreq>& tfVec){
   istringstream inSS(istr);
   string word;
   bool wordFound = false;
   TokenFreq temp;
   while(inSS >> word){
      //transform word to lowercase
      for (char i:word){
         if (isalpha(i)){
            i = tolower(i);
            }
         }
      //check if word already exists in vector
      for(TokenFreq x:tfVec){
         if (x.token == word){
            x.freq += 1;
            wordFound = true;
            }
      //if word not found, create a new token and push into vector
      if(!wordFound){
         temp.token = word;
         temp.freq = 1;
         tfVec.push(temp);
            }
         wordFound = false;
         }
      }
   }
   
void selectionSort(vector<TokenFreq>& tokFreqVector) {
    int startingIndex = 0;
    int size = tokFreqVector.size();
    int minIndex;
    TokenFreq temp;
    while (startingIndex < size) {
        minIndex = startingIndex;
        TokenFreq minimum = tokFreqVector[startingIndex];
        for (int i = startingIndex + 1; i < size; i++) {
            if (tokFreqVector[i] < tokFreqVector[minIndex]) {
                minIndex = i;
            }
        }
        // Check if startingIndex is not equal to minimum
        // If not, swap
        if (startingIndex != minIndex) {
            temp = tokFreqVector[startingIndex];
            tokFreqVector[startingIndex] = tokFreqVector[minIndex];
            tokFreqVector[minIndex] = temp;
        }
        startingIndex++;
    }
}

void insertionSort(vector<TokenFreq>& tokFreqVector) {
    int n = tokFreqVector.size();
    for (int i = 1; i < n; i++) {
        TokenFreq key = tokFreqVector[i];
        int j = i - 1;
        while (j >= 0 && tokFreqVector[j] < key) {
            tokFreqVector[j + 1] = tokFreqVector[j];
            j--;
        }
        tokFreqVector[j + 1] = key;
    }
}
