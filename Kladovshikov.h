#pragma once
#include "Dmitry.h"
#include <fstream>
#include <vector>
#include <string>
using namespace std;
class Kladovshikov : public Dmitry
{
public:
    
    Kladovshikov();
    Kladovshikov(vector<wstring> a);

    friend wostream& operator<< (std::wostream& out, const Kladovshikov& a);
    ~Kladovshikov() {};
};