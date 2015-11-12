/*¬ариант 23
ћодифицировать проект, созданный в предыдущем практикуме є6, следующим образом. 
—оздать шаблон заданного класса. ѕроверить использование шаблона дл€ стандартных типов данных 
(в качестве стандартных типов использовать целые и вещественные типы). 
ќпределить пользовательский класс, который будет использоватьс€ в качестве параметра шаблона. 
ƒл€ пользовательского типа вз€ть класс из проекта практикума є1-2 или 3.*/

#include "stdafx.h" 
#include "iostream" 
#include "string.h" 
#include "button.h"

using namespace std;
template<class T>
class String
{
private:
	T str;
	button but;
public:

	String(T buf)
	{
		str = buf;
		//strbut = strbut1;
	}

	friend String operator<(String& x, String &y)
	{
		if (x.str.but < y.str.but) cout << "True." << endl;
		else cout << " False." << endl;
		return 0;

	}

	friend String operator+(String &x, String &y)
	{
		cout << x.str.but + y.str.but << endl;
		return 0;
	}

	friend String operator-(String& x, String&y)
	{
		x.str.but = x.str.but + 100;
		cout << x.str.but - y.str.but << endl;
		return 0;
	}

	friend String operator*(String&x, int s)
	{

		if (x.str.but == 5) x.str.but = s;
		cout << x.str.but << endl;;
		return 0;
	}

	//-------------------------------------------------------------------------------------

	friend String operator<=(String& x, String &y)
	{
		if (x.str < y.str) cout << "True." << endl;
		else cout << " False." << endl;
		return 0;

	}

	friend String operator+=(String &x, String &y)
	{
		cout << x.str + y.str << endl;
		return 0;
	}

	friend String operator-=(String& x, String&y)
	{
		x.str = x.str + 100;
		cout << x.str - y.str << endl;
		return 0;
	}

	friend String operator*=(String&x, int s)
	{

		if (x.str == 11) x.str = s;
		cout << x.str << endl;;
		return 0;
	}
};




void main()
{
	setlocale(LC_CTYPE, "rus"); 

	String<button> a(1);
	String<button> b(2);
	String<button> c(5);
	String<int> r(9);
	String<int> t(4);
	String<double> v(11);

	cout << "a < b? = ";
	(a < b);
	cout << "a + b= ";
	(a + b);
	cout << "a(+100) - b = ";
	(a - b);
	cout << "c(5) * 2 = ";
	(c * 2);

	cout << endl;

	cout << "r < t ? = ";
	(r <= t);
	cout << "r + t = ";
	(r += t);
	cout << "r(+100) - t = ";
	(r -= t);
	cout << "v(11) * 1 = ";
	(v *= 1);
	
}
