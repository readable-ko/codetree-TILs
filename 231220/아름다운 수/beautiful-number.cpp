#include <bits/stdc++.h>
using namespace std;
int N, answer;
map<string,bool> visited;
string num = "";
string str[] = {"1","22","333","4444"};

void make_beauty(int depth) {
    if(depth >= N) {
        if(depth == N) answer++;
        return;
    }
    
    for(int i = 0 ; i < 4 ; i++) {
        num += str[i];
        if(!visited[num]) {
            visited[num] = 1;
            make_beauty(depth + str[i].length());
        }
        num = num.substr(0,num.length() - str[i].length() - 1);
    }
}

int main() {
    cin >> N;
    make_beauty(0);

    cout << answer;
    return 0;
}