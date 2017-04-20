#include<iostream>
#include"Demo.h"
#include<vector>
using namespace std;
int main() {
	Demo demo;
	vector<int> num;
	/*for (int i = 0;i < 10;i++) {
		num.push_back(i);
	}*/
	cout << demo.rotate(num, -8) << endl;
	return 0;
}