// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll n, ap, md;
//     cin >> n >> ap >> md;
//     vector<ll> d(n);
//     vector<ll> a(ap);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> d[i];
//     }
//     ll ans = 0;
//     for (ll i = 0; i < ap; i++)
//     {
//         cin >> a[i];
//         for (ll j = 0; j < n; j++)
//         {
//             if (d[j] + md >= a[i] && d[j] - md <= a[i])
//             {
//                 ans++;
//                 d.erase(d.begin() + j);
//                 break;
//             }
//         }
//     }
//     cout<<ans<<endl;
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Time limit: 1.00 s Memory limit: 512 MB

    // Get input
    int n, m, k;
    cin >> n >> m >> k;
    int applicant_sizes[n];
    int apartment_sizes[m];
    for (int i = 0; i < n; i++)
    {
        cin >> applicant_sizes[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> apartment_sizes[i];
    }

    // Sort the lists
    sort(applicant_sizes, applicant_sizes + n);
    sort(apartment_sizes, apartment_sizes + m);

    // Initialize counters
    int i = 0, j = 0, count = 0;

    // Iterate through the applicants and apartments
    while (i < n && j < m)
    {
        // Check if the current apartment is within the acceptable size range of the current applicant
        if (apartment_sizes[j] >= applicant_sizes[i] - k && apartment_sizes[j] <= applicant_sizes[i] + k)
        {
            // If so, increment the count and move on to the next applicant and apartment
            count++;
            i++;
            j++;
        }
        // If the apartment is too small for the current applicant, move on to the next apartment
        else if (apartment_sizes[j] < applicant_sizes[i] - k)
        {
            j++;
        }
        // If the apartment is too big for the current applicant, move on to the next applicant
        else
        {
            i++;
        }
    }

    // Print the number of applicants who will get an apartment
    cout << count << endl;

    return 0;
}
