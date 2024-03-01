#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int N){
	bitset<32> Num(N);
	vector<int> indexs,gaps;
	for(int i=0;i<Num.size();i++){
		if(Num.test(i)){
			indexs.push_back(i);
		}
	}
	if(indexs.size()<2){
		return 0;
	}
	else{
		for(int i=1;i< indexs.size();i++){
			gaps.push_back(indexs.at(i)- indexs.at(i-1));
		}
		if(*max_element(gaps.begin(), gaps.end())==1){
			return 0;
		}
		else{
			return (*max_element(gaps.begin(), gaps.end())-1);
		}
	}

	return 0;
}

int main()
{
	solution(281);
	return 0;
}
