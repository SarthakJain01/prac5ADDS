#include <iostream>
using namespace std;
#include "MapSquare.h"
#include "MapGeneric.h"
#include <vector>

int MapSquare::f(int b)
{
    return (b*b);
};

//vector<int>MapSquare::map(vector<int>myVector){};

// {
//     static int counter = myVector.size()-1;
//     if(counter == 0)
//     {
//         myVector[counter] = f(myVector[counter]);
//         return myVector;
//     }
//     else
//     {
//         myVector[counter] = f(myVector[counter]);
//         counter--;
//         return map(myVector);
//     }
// };
