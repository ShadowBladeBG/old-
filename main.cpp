#include<iostream>
#include<cstdlib>
#include<cmath>
#include<math.h>
#include<random>
#pragma once
#include<cmath>
#include<utility>
#include<algorithm>
#include<fstream>
#include<string>
const int KEYLEN=17;
using namespace std;
int countChars(char letter);
int main(int argc, char *argv[])
{ 
    int br=0, brn=0, t;
    // common trigrams and digrams / after successfuly starting the code adding more digrams and trigrams from desktop
   int trigrams[] = {'the', 'and', 'tha', 'ent', 'ing', 'ion', 'tio', 'for', 'nde', 'has', 'nce', 'edt', 'tis', 'oft', 'sth', 'men'};
   int digrams[] = {'th', 'he', 'in', 'er'};
   int offset=trigrams[0];

   int BONUS_FOR_PRINTABLE=1;
   int BONUS_FOR_LOWERCASE=3;      
   int BONUS_FOR_SPACE=8;
   int BONUS_FOR_DIGRAM=8;
   int BONUS_FOR_TRIGRAM=16;
   int PENALTY_FOR_DIGIT=-10;
   int fitness=0;

   //char p[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm', '\0'};
   char letter;

   
   //opening the two chipers //deep copy might be needed
    std::string line_;
    ifstream file_("chipher1.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<< '\n';
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<< '\n';
        cout<<endl<<endl<<endl;
        
    std::string line2_;
    ifstream file2_("chipher2.txt");
    if(file2_.is_open())
    {
        while(getline(file2_,line2_))
        {
            std::cout<<line2_<< '\n';
            for(t=0;t<26;t++)
                {
                    if(p[]==line2_) //p[]
                    {
                        fitness=fitness+BONUS_FOR_LOWERCASE;
                    }
                }
        }
        file2_.close();
    }
    else
        std::cout<<"file is not open"<< '\n';
        
    std::cin.get();
    // TUNNING // 
/*
const int BONUS_FOR_PRINTABLE=1;
const int BONUS_FOR_LOWERCASE=3;      //MIGHT BE MOVED UPPER DUE TO DECLARATION
const int BONUS_FOR_SPACE=8;
const int BONUS_FOR_DIGRAM=8;
const int BONUS_FOR_TRIGRAM=16;
const int PENALTY_FOR_DIGIT=-10;
 int fitness=0;

char p[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm', '\0'};
*/
/*
if(p==file2_)
    {
        fitness=fitness+BONUS_FOR_LOWERCASE;
    }
else
    {
        cout<<endl<<"wrong"<<endl;
    }


for(p[] in file2_("chipher2.txt"))
    {
    

        if p in "qwertyuiopasdfghjklzxcvbnm":
            fitness=fitness+BONUS_FOR_LOWERCASE;
        if p in "0123456789":
            fitness=fitness+PENALTY_FOR_DIGIT
        p=ord(p)
        if (p>=0x20 and p<=0x7E) or p==0xA or p==0xD:
            fitness=fitness+BONUS_FOR_PRINTABLE

    for digram in digrams:
        fitness=fitness + plain.count(digram)*BONUS_FOR_DIGRAM

    for trigram in trigrams:
        fitness=fitness + plain.count(trigram)*BONUS_FOR_TRIGRAM
        
    fitness=fitness + plain.count(" ")*BONUS_FOR_SPACE
    }
    cout<<endl<<"fitness = "<<fitness<<endl;
*/
    cout<<" Character\t\tHow many times"<<endl;
    
    
    
    
    
    
    cout<<"pepe is p = "<<p<<endl;
    cout<<"pepe is lower = "<<fitness<<endl;

 
 // TESTING //
 
 /*
    for(int i=0;i<15;i++)
        {
            if((offset == line2_.find('the', 0)) ) //!=string::npos)
                {
                    br++;
                }
            else
                {
                    brn++;
                }
        }
        cout<<endl;
        cout<<offset<<endl;
        cout<<endl;
        cout<<line2_<<endl;
        cout<<br;
        cout<<endl<<brn<<endl;
     //experiment failed for now.. needed tunning
    */ 

    
    
    return 0;
}