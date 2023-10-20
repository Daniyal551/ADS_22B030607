#include <iostream>
#include <queue>

int main(){

    long long n,m;
    std::cin >> n >> m;

    std::priority_queue<long> q;

    for(int i = 0; i < n; i++){
        long long a;
        std::cin >> a;
        q.push(a);
    }

    long long cnt = 0;

    for(int i = 0;i < m; i++){
        cnt += q.top();
        q.push(q.top()-1);
        q.pop();
    }

    std::cout << cnt <<" ";


    return 0;
}