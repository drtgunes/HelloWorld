#include <iostream>
#include "util.h"

using namespace std;


int main() {
    int x[6] = {2,4,6,8,10,12};
    int xs = 6;
    int y[6] = {3,5,7,9,11,13};
    int ys = 6;
    int z[12];
    int zs = 12;

    merge_array(x, xs, y, ys, z, zs);
    for (int i = 0; i < zs; ++i)
    {
        cout<<*(z+i)<<" ";
    }


}