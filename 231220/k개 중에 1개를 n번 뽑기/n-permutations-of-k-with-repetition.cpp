#include <bits/stdc++.h>
using namespace std;
int N, K;
vector<int> arr;

void choose(int depth) {
    if(depth == N) {
        for(int i = 0 ; i < N ; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }
    
    for (int i = 1 ; i <= K ; i++) {
        arr[depth] = i;
        choose(depth+1);
    }
}

int main() {
    cin >> K >> N;
    arr = vector<int>(K);
    choose(0);

    return 0;
}