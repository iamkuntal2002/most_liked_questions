#include <bits/stdc++.h>
using namespace std;
int finLength(int N, vector<int> color, vector<int> radius)
{
    stack<pair<int, int>> st;
    // st.push({color[0], radius[0]});
    for (int i = 0; i < N; i++)
    {
        pair<int, int> pr = {color[i], radius[i]};
        // auto top = st.top();
    
        // cout<<"curr = "<<pr.first<<" "<<pr.second<<endl;
        // cout<<"top = "<<top.first<<" "<<top.second<<endl;
        if (!st.empty() && st.top() == pr)
            st.pop();
        else
            st.push(pr);
    }
    return st.size();
}
int main()
{
    int N = 3;
    vector<int> color = {2, 2, 5};
    vector<int> radius = {3, 3, 4};
    cout<<finLength(N,color,radius)<<endl;

}