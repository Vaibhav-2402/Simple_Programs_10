#include<iostream>
using namespace std;
////////////////////////////////

int main()
{
    float arr[10];
    int num = 0;
    char ch;
    do 
    {
        cout<<"\n Enter number ";
        cin>>*(arr+num);
        num++;
        cout<<"\n Wanna enter another(y/n) : ";
        cin>>ch;
    }
    while(ch == 'y');
    float temp = 0.0;
    for(int i = 0; i<num; i++)
    {
        temp+=arr[i];
    }
    cout<<"\n Average  = "<<temp/num;
}