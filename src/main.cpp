#include <iostream>
#include <string>
#include "rdna.hpp"

using namespace std;

int main()
{
    int seed = -1, n = -1;
    string bases ="'|\"<[)`=%^?/#_Q-@Y.UFGCIONMBEAxvwy895kb3d2tnioaers1lm0phu4g67fjzqSRTLPDHKJW!*VZX$,+; ~&\\]:(>{}";
    // Segmentation core dump error
    int mean;
    float std;
    int num_guesses;


    cout<<"\nWelcome to the DNA generator\n\n\tPlease enter a seed, the letter bases to be used (e.g. TGAC) \n\tand the length of the DNA sequence to be generated.\n\n\t>>> ";   

    cin>>seed;
    cout<< "\n\t>>>";
    cin>>n;//read the three inputs
    cout<< "\n\t>>>";
    cin >>mean;
     cout<< "\n\t>>>";
     cin>>std;
     cout<< "\n\t>>>";
     cin>>num_guesses;

    cout <<"\n\nOutput:\n\t"<<randDNA(seed,bases,n,mean,std,num_guesses)<<endl; //print output  
}

