#include <iostream>
#include <string>
#include <cstring>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main(){
	cout << (toupper('é') == 'É') << endl;
	cout << 'é' << " " << toupper('é') << " " << 'É' << endl;
	cout << int(toupper('é')) << " " << int('É');
}