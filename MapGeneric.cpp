#include <iostream>
using namespace std;
#include "MapGeneric.h"
#include <vector>

int MapGeneric::f(int a)
{
    return (a*a);
};


vector<int>MapGeneric::map(vector<int>myVector)
{
    static int counter = myVector.size()-1;
    if(counter == 0)
    {
        myVector[counter] = f(myVector[counter]);
        cout<<myVector[counter]<<endl;
        return myVector;
    }
    else
    {
        myVector[counter] = f(myVector[counter]);
        counter--;
        cout<<myVector[counter]<<endl;
        return map(myVector);
    }
};
