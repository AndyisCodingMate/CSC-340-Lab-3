//This is a header file: to declare the TokenFreq data structure, the getTokenFreq() prototype, 
//and other relevant function prototypes such as the overloaded operators for the TokenFreq datatype 

//-include the above in the namespace NS_TOKEN_FREQ

//Note: please include <algorithm> in this file. The instructor's unit tests will need this libary.  

#ifndef TOKENFREQH  
#define TOKENFREQH

struct TokenFreq{
   string token;
   int freq;
   };

bool operator<=(const TokenFreq& o1, const TokenFreq& o2);
TokenFreq operator+(const TokenFreq& o1, const TokenFreq& o2);
ostream& opeartor<<(ostream& os, const TokenFreq& o1)
void getTokenFreqVec(string& istr, vector<TokenFreq>& tfVec);
void selectionSort( vector<TokenFreq>& tokFreqVector );  
void insertionSort( vector<TokenFreq>& tokFreqVector ); 



#endif