#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <unordered_set>

using namespace std;

vector<int> searchnum(vector<int> a,vector<int> b,vector<int> c)
{
    unordered_set<int> set(a.begin(),a.end());

    unordered_set<int> abset;
    for (int i = 0; i < b.size(); i++)
        if(set.count(b[i]))
            abset.insert(b[i]);

    vector<int> ans;
    for (int i = 0; i < c.size();i++)
        if(abset.count(c[i]))
            ans.push_back(c[i]);
    return ans;
}

int main()
{
    
    return 0;
}
