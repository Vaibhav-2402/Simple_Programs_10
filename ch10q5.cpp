#include<iostream>
using namespace std;
//////////////////////////////////////////

const int hv = 5;
void addarrays(int* s1, int* s2, int* s3, int n);

int main()
{
    int a1[hv] = {1, 2, 3, 4, 5};
    int a2[hv] = {2, 3, 4, 5, 6};
    int a3[hv];
    addarrays(a1, a2, a3, hv);
    for(int j = 0; j<hv; j++)
    {
        cout<<"Element number "<<j+1<<"= "<<*(a3+j)<<endl;
    }


    return 0;
}
/////////////////////////////////////////

void addarrays(int* s1, int* s2, int* s3, int n)
{
    for(int i = 0; i<n; i++)
    {
        *(s3+i) = *(s1+i)+*(s2+i);
    }
}