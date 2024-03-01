#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

int solution(int A, int B, int C){
    int orAB = (A|B), orAC = (A|C), orBC = (B|C), orABC = (A|B|C);
    bitset<30> ANum(A), BNum(B), CNum(C), orABNum(orAB), orACNum(orAC), orBCNum(orBC), orABCNum(orABC);
    double maximum = pow(2,(ANum.size() - ANum.count())) + pow(2,(BNum.size() - BNum.count())) + pow(2,(CNum.size() - CNum.count()));
    double sum_and = pow(2,orABNum.size()-orABNum.count()) + pow(2,orACNum.size()-orACNum.count()) + pow(2,orBCNum.size()-orBCNum.count()) - pow(2,orABCNum.size()-orABCNum.count());
    return (maximum - sum_and);
}

int main(){
    cout << solution(0,0,0);
    return 0;
}