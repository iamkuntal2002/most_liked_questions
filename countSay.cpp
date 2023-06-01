#include <bits/stdc++.h>
using namespace std;
string countAndSay(int n)
{
    if (n == 1)
        return "1";
    string res = "1";
    for (int i = 1; i <n; i++)
    {
        string temp = "";
        for (int j = 0; j < res.size(); j++)
        {
            int count = 1;
            while (j < res.size() - 1 && res[j] == res[j + 1])
            {
                j++;
                count++;
            }
            // cout<<res[]
            temp += res[j];
            temp += to_string(count);
        }
        res = temp;
    }
    return res;
}
int main()
{
    countAndSay(4);
}