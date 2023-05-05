#include<iostream>
#include<cstring>
using namespace std;
////////////////////////////////////////////

int compstr(char* s1, char* s2);

int main()
{
    string l1 = "melodyitnichoclatykyuhai";
    string l2 = "melodyitnibhichocolatynahihai";
    int rturn = compstr(l1,l2);
    cout<<rturn;
    return 0;
}
///////////////////////////////////////////

int compstr(char* s1, char* s2)
{
    int r_value;
    if(strcmp(s1,s2) == 1)
    { r_value = -1;}
    else if(strcmp(s1,s2) == 0)
    { r_value = 0;}
    else if(strcmp(s1,s2) == -1)
    {r_value = 1;}
    return r_value;
}