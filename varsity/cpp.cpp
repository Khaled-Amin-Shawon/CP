#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool vis[N];
vector<int> g[N];
int ans =0;

void dfs(int vertex)
{
    //cout << vertex << endl;
    vis[vertex] = true;
    ans++;
    for (int child : g[vertex])
    {
        // ans++;
       // cout << "par " << vertex << ", child " << child << endl;
        if (vis[child])
        {
            continue;
        }
        dfs(child);
    }
}
int main()
{
    int n;
    cin >> n;
    int v1, v2;
    for (int i = 1; i <= n; i++)
    {
        cin >> v1;
        g[v1].push_back(i);
        // g[i].push_back(v1);
    }

    int q;
    cin>>q;
    while (q--)
    {
        int res=0;
        int num;
        cin>>num;
        for (int i = 0; i < num; i++)
        {
            int c;
            cin>>c;
            dfs(c);
            if(num!=1 && ans>1){
                ans--;
            }
            res=res+ans;
            ans=0;

        }
        for (int i = 0; i <=n; i++)
        {
            vis[i]=false;
        }
        
        cout<<res<<endl;
    }

}