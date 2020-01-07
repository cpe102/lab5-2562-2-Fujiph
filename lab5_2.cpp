#include<iostream>
#include<string>
using namespace std;

string mixText( string a , string b ) {
	int x = a.size();
	int y = b.size();

	string s = "";

	int i = 0;
	if (x==y) {
		while(i<x) {
			s = s + a[i] + b[i];
			i++;
		}
		return s;
	}
	else{
		return "E";
	}

}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
