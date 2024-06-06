#include <iostream>
#include <string>
using namespace std;
extern "C" __declspec(dllexport) bool Found(char mainstr[], char substr[])
{
	string main_str(mainstr);
	string sub_str(substr);
	if (main_str.find(sub_str) != string::npos) {
		return true;
	}
	else {
		return false;
	}
}