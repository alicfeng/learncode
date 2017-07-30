#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {vector<int> iv{5, 4, 3, 2, 1};
    auto a=0, b = 1;

    for_each(iv.begin(), iv.end(), [b](int &x){
        cout<<(x + b)<<endl;
    });

    for_each(iv.begin(), iv.end(), [=](int &x){x *= (a + b);});     // (2)

    for_each(iv.begin(), iv.end(), [=](int &x)->int{return x * (a + b);});// (3)
    return 0;
}