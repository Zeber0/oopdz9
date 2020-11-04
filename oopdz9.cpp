// oopdz9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <deque>
#include "Kladovshikov.h"
#include "Dmitry.h"
#include <iostream>
#include <typeinfo>
template <typename T>
class DB : public deque<T>
{
public:
	DB() {}
	DB& operator =(const DB& a)
	{
		if (this == &a)
		{
			return *this;
		}
		if (this->size() != 0)
		{
			while (this->size() != 0)
				this->erase(this->begin());
		}
		for (int i = 0; i < a.size(); i++)
		{
			this->push_back(a[i]);
		}
		return *this;
	}
	friend wostream& operator<<(wostream& out,const DB<T>& db)
	{
		for (int i = 0; i < db.size(); i++)
		{
			wcout << *db[i];
		}
		return out;
	}
	
	~DB()
	{
		
	}
};

int main()
{
	DB<Dmitry*> db;
	DB<Dmitry*> db2;
	wifstream in("m_txt.txt");
	vector <wstring> v;
	wstring a;
	while (!in.eof())
	{
		getline(in, a);
		v.push_back(a);
	};
	for (int i = 0; i < 3; i++)
	{
		db.push_back(new Dmitry(v));
		db.push_back(new Kladovshikov(v));
	}
	db2 = db;
	for (std::deque<Dmitry*>::iterator i = db2.begin(); i != db2.end(); i++)
	{
		if (typeid(db[0]) == typeid(i)) {
			db2.erase(i);
		}
		else {
			i++;
			db2.erase(i+1, db2.end());
			break;
		}
	}
	wcout << db2;
	in.close();
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
