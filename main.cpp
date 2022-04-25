#include <iostream>
#include "MapTriple.h"
#include "MapSquare.h"
#include <vector>
#include "MapGeneric.h"
using namespace std;

int main(void)
{
    MapGeneric Vector;
    MapTriple Vector1;
    MapSquare Vector2;
    vector<int>answer = Vector1.map({1,2,3,4,5});
    //vector<int> ans = Vector1.copy(answer);
    for(int i =0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
    cout<<endl;
    vector<int>ans2 = Vector2.map({1, 2, 3, 4, 5});
    for(int i =0;i<ans2.size();i++)
    {
        cout<<ans2[i]<<" ";
    }
    cout<<endl;
    return 0;
}