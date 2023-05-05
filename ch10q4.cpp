#include<iostream>
using namespace std;
/////////////////////////////////////////

struct link
{
    int num;
    link* next;
};

class linklist
{
    private:
    link* first;
    public:
    linklist()
    {
        first = NULL;
    }
    void additem(int d);
    void display();
    ~linklist()
    {
        link* current = first;
        while(current!=NULL)
        {
            cout<<"\n Delting item ";
            link* temp = current;
            current = current->next;
            delete temp;
        }
    }
};
//////////////////////////////////////////////

void linklist::additem(int d)
{
    link* newlink = new link;
    newlink->num = d;
    newlink->next = first;
    first = newlink;
}
//////////////////////////////////////////////

void linklist::display()
{
    link* current  = first;
    while(current!=NULL)
    {
        cout<<current->num<<endl;
        current = current->next;
    }
}
////////////////////////////////////////////////

int main()
{
    linklist l1;
    l1.additem(34);
    l1.additem(345);
    l1.additem(3456);
    l1.additem(1495);
    l1.display();
    return 0;
}