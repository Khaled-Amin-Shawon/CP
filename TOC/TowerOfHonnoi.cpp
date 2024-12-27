// Tower of hanoi code /
#include <iostream>
using namespace std;

int moves(int N){
    if(N==0) return 0;
    return 2*moves(N-1) + 1;
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 0) return;

    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod
         << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}



int main()
{
    cout<<"Enter the number of Disks : ";
    int N; cin>>N;

    cout<<"\nMinimum n o. of moves needed to solve : "<<moves(N)<<endl;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}