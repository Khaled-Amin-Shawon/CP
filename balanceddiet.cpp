#include <iostream>
using namespace std;

int main() {
    int cans, calories[10000], dp[10000][10000];
    while (true) {
        cin >> cans;
        if (cans == 0) {
            break;
        }
        for (int i = 0; i < cans; i++) {
            cin >> calories[i];
        }
        for (int i = 0; i < cans; i++) {
            for (int j = 0; j < 2; j++) {
                dp[i][j] = -1;
            }
        }
        int total_calories = 0;
        for (int i = 0; i < cans; i++) {
            total_calories += calories[i];
        }
        int first_meal = total_calories / 2;
        int second_meal = total_calories - first_meal;

        dp[0][0] = 0;
        dp[0][1] = calories[0];

        for (int i = 1; i < cans; i++) {
            for (int j = 0; j <= first_meal; j++) {
                dp[i][0] = dp[i-1][0];
                if (j >= calories[i]) {
                    dp[i][0] = max(dp[i][0], dp[i-1][1]);
                }
                dp[i][1] = dp[i-1][0] + calories[i];
            }
        }
        cout << first_meal - dp[cans-1][0] << " " << second_meal - dp[cans-1][0] << endl;
    }
    return 0;
}
