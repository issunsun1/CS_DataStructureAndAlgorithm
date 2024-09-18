#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool reverseList(vector<int> &a)
{
    int i = 0,
    j = a.size() - 1;
    while(i<j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }

    return true;
}

int main()
{
    
    return 0;
}
