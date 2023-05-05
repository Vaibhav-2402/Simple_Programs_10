#include<iostream>
#include<cstring>
using namespace std;
////////////////////////////////

const int d = 7;
void bsort(char**,int);
void order(char**, char**);

int main()
{
    char* arrptr[d] = {"Sunday", "monday", "Tuesday", "wednesday", "thursday", "friday", "saturday"};
    for(int i = 0; i<d; i++)
    {
        cout<<arrptr[i]<<endl;
    }
    bsort(arrptr,d);
    
    for(int i = 0; i<d; i++)
    {
        cout<<arrptr[i]<<endl;
    }
    return 0;
}
//////////////////////////////////////////////


void bsort(char** arrptrd)
    {
        for(int i=0; i<d; i++)
        for(int j=0; j<d; j++)
        order(arrptrd+i, arrptrd+j);
    }
    void order(char** s1, char** s)
    {
        if(strcmp(*s1,*s)>0)
        {
            char* temp = *s1;
            *s1 = *s;
            *s = temp;
        }
    }