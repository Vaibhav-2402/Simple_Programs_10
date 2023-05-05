#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
///////////////////////////////////////////

class String
{
    private:
    char* str;
    public:
    String(char* s1)
    {
        int len = strlen(s1);
        str = new char[len+1];
        strcpy(str,s1);
    }
    ~String()
    {
        delete[] str;
    }
    void display()
    {
        cout<<"\n The string u entered : "<<str;
    }
    void uppercase()
    {
        char* uppstr = str;
        while( *uppstr )
        {
            *uppstr = toupper(*uppstr);
            uppstr++;
        }
    }
};
/////////////////////////////////////////////////////////////////////////////

int main()
{
    String s1 = "my name is lakhan sajno ka sajan mera nam hai lakhan ";
    s1.display();
    cout<<endl;
    s1.uppercase();
    s1.display();
    return 0;
}