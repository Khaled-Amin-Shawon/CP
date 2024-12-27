#include<bits/stdc++.h>
using namespace std;
void selection_short(int a[], int n)
{
    int tamp, pos, j;
    for (int i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            tamp = a[i];
            a[i] = a[pos];
            a[pos] = tamp;
        }
    }
} 
void solve(){
    int num;
    cin>>num;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        cin>>array[i];
    }
    int count =num;
    selection_short(array,num);
    for (int i = 0; i < num-1; i++)
    {
        // cout<< array[i]<<" "<<array[i+1]<<endl;
        if ((array[i+1]-array[i]<=1 ))
        {
            count--;
            // cout<<count<<endl;
        }
    }
    if (count==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int tast;
    cin>>tast;
    for (int  i = 0; i < tast; i++)
    {
        solve();
    }
    
    return 0;
}