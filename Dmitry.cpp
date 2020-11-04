#include "Dmitry.h"

Dmitry::Dmitry()
{
}

Dmitry::Dmitry(vector<wstring> a)
{
	for (int i = 0; i < a.size() / 2; i++)
		str.push_back(a[i]);
}



Dmitry::~Dmitry()
{
}

wostream& operator<<(std::wostream& out, const Dmitry& a)
{
	for (int i = 0; i < a.str.size(); i++)
	{
		out << a.str[i] << endl;
	}
	return out;
}