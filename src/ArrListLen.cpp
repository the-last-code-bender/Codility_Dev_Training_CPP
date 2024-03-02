#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A){
    int cnt=0, flag = 0;
    while(flag != -1){
        flag = A[flag];
        cnt++;
        }
    return cnt;
}


int main(){
    vector<int> A;
    A.push_back(1);
    A.push_back(4);
    A.push_back(-1);
    A.push_back(3);
    A.push_back(2);
    cout << solution(A);
    return 0;
}