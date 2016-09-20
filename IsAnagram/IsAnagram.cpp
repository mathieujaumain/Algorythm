#include <iostream>
#include <string>
#include <stdexcept>

class AreAnagrams
{
public:
	static bool areStringsAnagrams(std::string a, std::string b)
	{
		if (a.length() != b.length()) return false;

		for (unsigned int i = 0; i < a.length(); i++)
		{
			if (countLetter(a, a[i]) != countLetter(b, a[i])) return false;
		}

		return true;
	}

	static int countLetter(std::string str, char letter)
	{
		int count = 0;
		for (unsigned int i = 0; i < str.length(); i++)
		{
			if (str[i] == letter) count++;
		}

		return count;
	}

};

template<typename T>
class TemplatedClass
{
public:

	TemplatedClass(const T& t) : val(t){}
	T getVal(){ return val; }
	void setVal(const T& newval){ val = newval; }

private:
	T val;
};


#ifndef RunTests
int main()
{
	std::cout << AreAnagrams::areStringsAnagrams("neural", "unreal");
	int valfqsdf;
	

	TemplatedClass<int> Val(2);
	Val.setVal(1);

	std::cout << Val.getVal();
	std::cin >> valfqsdf;
}




#endif

