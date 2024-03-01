#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int solution(int N) {
    vector<int> indexs;
    bitset<32> Num(N);
    if(!(N&(N>>1))){return N;}
    int deleted = -1;
	for(int i=0;i<((int)Num.size());i++){
		if(Num.test(i)){indexs.push_back(i);}
	}
    for(int i=1;i<(int)(indexs.size());i++){
        if(indexs.at(i)-indexs.at(i-1)==1 && deleted != indexs.at(i-1)){
            Num[indexs.at(i)] =0;
            deleted = indexs.at(i);
        }
    }
    return (int)(Num.to_ulong());
}

int main(){
    cout<<solution(1166);
    return 0;
}