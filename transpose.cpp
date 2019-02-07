#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
#define MAXC 10

int main()
{
    char y;
    cin>>y;

    switch(y)
    {
        case 'y':cout<<"yess";break;
        case 'n':cout<<"nono";break;
    }
    return 0;
}
