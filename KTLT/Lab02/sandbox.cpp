#include <iostream>
#include <string>
#include <cstring>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main(){
	wstring a = L"abcdefg";
	wstring b = L"Ábcf";
	char c = tolower(int(b.at(0)));
	cout << (a.find(b) != string::npos) << endl;
	wchar
	
	
	
	cout << tolower(L"É") << " " << "é" << endl;
	
}