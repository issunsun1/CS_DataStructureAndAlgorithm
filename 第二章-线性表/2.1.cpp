#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

// 删除最小值元素

int delete_element(vector<int> &a)
{
    if(a.size()==0)
        return -1;
    int minn = 0;
    for (int i = 1; i < a.size();i++)
    {
        if(a[i]<a[minn])
            minn = i;
    }

    int ans = a[minn];
    a[minn] = a[a.size() - 1];
    return ans;
}

int main()
{

}
