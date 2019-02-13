#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed,string bases,int n)
 {
		 int index=-1;
		 string letters=""; 
		 int min=0; // This denotes the first index of the string array
		 if (bases =="")
              	   {
			return "";
		   }
		 int max=bases.size()-1; // This denotes the last index of the string array
		 
		 mt19937 eng1(seed); //The input for the random number generator
		 uniform_int_distribution<> unifrm(min,max);
		
		
			 for(int i=0; i<n; i++) // This loop generates the amount of letters in the string
			 {
				 index= unifrm(eng1); // The random value generated by the prng [uniform_int_distribution] is placed into the index of the string
				 letters += bases[index];  // The letters generated are added into a string
			 } 
			 
   return letters;
  }
