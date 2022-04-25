#include <iostream>
using namespace std;
#include "MapTriple.h"
#include "MapGeneric.h"
#include <vector>


int MapTriple::f(int a)
{
    return (a*3);
};

//vector<int> MapTriple::copy(vector<int>vectorA){
    //return vectorA;
//};
//vector<int>MapTriple::map(vector<int>myVector){};

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
