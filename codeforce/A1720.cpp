#include<iostream>
using namespace std;
int main()
{
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        long long int a, b, c, d;
        cin>>a>>b>>c>>d;
        long long int ad = a * d, bc = b * c;
        long long int m1=ad % bc ,m2=bc % ad ;
        if (ad == bc)
        {
            cout<<"0"<<endl;
        }
        else if (m1==0||m2==0 )
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
} 
