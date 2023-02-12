#include <iostream>

using namespace std;

class Link
{

public:
    int dData;
    Link *next;
    Link *previous;

    Link(int data);
    void displayLink();

};

class Linklist
{

private:
    Link *first;
    Link *last;

public:
    Linklist();
    void insertFirst(int data);


};

Link::Link(int data)
{

    dData=data;
    next=NULL;
    previous=NULL;

}

void Link::displayLink()
{

    cout<<dData<<endl;

}

Linklist::Linklist()
{

    first=NULL;
    last=NULL;

}

void Linklist::insertFirst(int data)
{

    Link*newLink=new Link(data);

    if(first==NULL)
    {

        first=newLink;
        last=newLink;

    }

    else
    {

        newLink->next=first;
        first->previous=newLink;
        first=newLink;

    }

}

int main()
{

    return 0;
}
