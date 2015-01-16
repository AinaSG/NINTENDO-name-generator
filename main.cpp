#include <iostream>
#include <vector>
using namespace std;

string ideas[8] = {"New", "Nintendo", "2", "3", "DS", "XL", "litle", "Girls Edition"};

void promote(vector<bool> v){
	//cout << "Buy the new: ";
	for (int i = 0; i < 8; ++i){
		if (v[i]) cout << ideas[i] << " ";
	}
	cout << "!" << endl;
}

void we_need_a_new_machine(int g, vector<bool> v){
	if (g == 8) promote(v);
	else{
		v[g] = true;
		we_need_a_new_machine(g+1, v);
		v[g] = false;
		we_need_a_new_machine(g+1, v);
	}
}

int main(){
	vector<bool> v(8);
	we_need_a_new_machine(0, v);
}