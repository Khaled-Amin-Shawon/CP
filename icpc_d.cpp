#include<bits/stdc++.h> 
 
using namespace std; 
 
long long gcd(long long a, long long b) { 
    while (b != 0) { 
        long long temp = b; 
        b = a % b; 
        a = temp; 
    } 
    return a; 
} 
 
void solve(double a, double b, double c) { 
    double  s = (a + b + c) / 2; 
    double area = s * (s - a) * (s - b) * (s - c); 
 
    //cout<<area <<" " <<s<< endl; 
 
    double r_square_numerator = area; 
    double r_square_denominator = s * s; 
 
    //cout<<r_square_numerator<<" "<<r_square_denominator<<endl; 
 
 
    long long gcd_value = gcd(r_square_numerator, r_square_denominator); 
 
    r_square_numerator /= gcd_value; 
    r_square_denominator /= gcd_value; 
    //s*=s; 
    //double ap=area/s; 
    //cout<<ap<<endl; 
    if (area>s*s) 
    cout << r_square_numerator << "/" << r_square_denominator << endl; 
    else cout<<1<<"/"<<(long long)((s*s)/area)<<endl; 
} 
 
int main() { 
    long long t; 
    cin >> t; 
 
    while (t--) { 
        double a, b, c; 
        cin >> a >> b >> c; 
        solve(a, b, c); 
    } 
 
    return 0; 
}
