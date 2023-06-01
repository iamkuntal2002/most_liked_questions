#include <bits/stdc++.h>
using namespace std;
string reverseWords(string str)
{
    // write your code here
    string res = "";
    string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            if (temp.size() > 0)
            {
                res = temp + " " + res;
            }
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }
    if (temp.size() > 0)
    {
        res = temp + " " + res;
        cout<<res<<" endif"<<endl;
        return res.substr(0,res.size()-1);
    }
    cout<<res<<" end"<<endl;
    return res.substr(1, res.size() - 1);
}
int main()
{
    reverseWords("zpetg pufmmdf l onwmwpsyr qlke vuijr yrr sndp txvcv x hgkczoo cfuadsza prz e sucs");
}