#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, master, member;
    long long int answer = 0;
    cin >> N;
    vector<int> store(N);

    for (int &it: store)
        cin >> it;
    
    cin >> master >> member;
    
    for (int s: store) {
        int left = s - master;
        if (left > 0) {
            answer += ceil(left/double(member));
        }
        answer++;
    }
    cout << answer;
    return 0;
}