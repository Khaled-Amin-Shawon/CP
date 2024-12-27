#include<bits/stdc++.h>
using namespace std;
int main()
{int t=1;
while(t<=1000)
{
   double l,w;
   cin>>l>>w;
   if(l==0&&w==0)return 0;
   double distance=20000000;
   for (double i=l*0.623936;i<=l*0.626064;i+=0.001)
   {
       double buff=2*i+w-sqrt(i*i-pow(l-i,2));
       if(buff<distance)distance=buff;
      //  cout<<buff<<" "<<i<<" "<<i/l<<endl;
   }
   cout<<fixed<<setprecision(4)<<distance<<endl;
 }
 t++;
}
