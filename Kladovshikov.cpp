#include "Kladovshikov.h"
Kladovshikov::Kladovshikov()
{
}

Kladovshikov::Kladovshikov(vector<wstring> a)
{
	for (int i = a.size() / 2; i < a.size(); i++)
		str.push_back(a[i]);
}


wostream& operator<<(std::wostream& out, const Kladovshikov& a)
{
	for (int i = 0; i < a.str.size(); i++)
	{
		out << a.str[i] << endl;
	}
	return out;
}
