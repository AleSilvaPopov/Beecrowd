#include <iostream>
#include <string>
#include <vector>

using namespace std;

int contSubstring(const string &str1, const string &str2) {
    int max_num = 0;
    int m = str1.size();
    int n = str2.size();
    
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (str1[i-1] == str2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                if (dp[i][j] > max_num) {
                    max_num = dp[i][j];
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }
    
    return max_num;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str1, str2;

    while(getline(cin, str1) && getline(cin, str2)){
        cout << contSubstring(str1, str2) << "\n";
    }
    return 0;
}