#include <sstream>       //istream-input string stream.
#include <vector>        //ostream-output string stream.
#include <iostream>      //sstream-string stream contains both i/o string stream.
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    
    stringstream ss(str);
    vector<int> result;
    int tmp;
    char ch;
 while(ss>>tmp){
     result.push_back(tmp);
     ss >> ch;
 }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
