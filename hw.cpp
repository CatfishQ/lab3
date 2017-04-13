#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main(){
	int n;
	int total = 0 ;
	vector<int> v(8);

	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
	}
	
	inFile >> n ;
	for(int i=0;i<=7;++i){
		inFile >> v.at(i);
	}
	sort(v.begin(),v.end());

	for(int i=3;i<=7;++i){
		total = total + v.at(i);
	}
	cout << total << endl;
	return 0 ;
}
	
