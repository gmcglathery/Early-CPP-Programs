#include <iostream>

using namespace std;

int count(int);
int main()
{
    cout<<count(123456789);
    return 0;
}

int count(int nbr)
{
    if(nbr==0)
    {
        return 0;
    }
    int last=nbr%10;
    int first=nbr/10;
    if (last%2==0)
    {
        return 1+count(first);
    }
    else
    {
        return 0+count(first);
    }
}
