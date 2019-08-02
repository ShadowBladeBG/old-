#include<iostream>
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
int main ()
{ 
    int br=0, brn=0;
    // 4esto sreshtani tri i digrami / sled uspeshno trygvane na koda dobavqne na oshte digrami i trigrami ot desktop
   int trigrams[] = {'the', 'and', 'tha', 'ent', 'ing', 'ion', 'tio', 'for', 'nde', 'has', 'nce', 'edt', 'tis', 'oft', 'sth', 'men'};
   int digrams[] = {'th', 'he', 'in', 'er'};
   int offset=trigrams[0];
   
   //otvarqne na dvata chipera // moje da se naloji da se zamesti s deep copy 
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
        }
        file2_.close();
    }
    else
        std::cout<<"file is not open"<< '\n';
        
    std::cin.get();
    //TUNNING
const int BONUS_FOR_PRINTABLE=1;
const int BONUS_FOR_LOWERCASE=3;
const int BONUS_FOR_SPACE=8;
const int BONUS_FOR_DIGRAM=8;
const int BONUS_FOR_TRIGRAM=16;
const int PENALTY_FOR_DIGIT=-10;
int fitness=0;
 
 
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