#pragma once
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Dmitry
{
public:
	vector<wstring> str;
	Dmitry();
	Dmitry(vector <wstring> a);
	friend wostream& operator<< (std::wostream& out, const Dmitry& a);
	virtual ~Dmitry();
};