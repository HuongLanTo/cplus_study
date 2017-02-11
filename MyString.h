#include <iostream>

using namespace std;
#include <string.h>
class MyString
{
private:
	char a[1000];
public:
	MyString()
	{
		a[0] = '\0';
	};
	MyString(const char *x)
	{
		strcpy(a, x);
	};
	friend ostream & operator<<(ostream &out, MyString s)
	{
		out<<s.a;
		return out;	
	};
	int Length()
	{
		return strlen(a);
	};
	char CharAt(int i)
	{
		return a[i-1];
	};
	MyString SubString(int from, int length = -1)
	{
		MyString r;
		int max;
		if (length == -1)
			max = Length() - from + 1;
		else
			max = length;
		for (int i = 0; i < max; i++)
			r.a[i] = a[from + i - 1];
		r.a[max] = '\0';
		return r;
		
	};
	int First(char c)
	{
		for (int i = 0; i < Length(); i++)
		{
			if (a[i] == c)
				return (i + 1);
		}
		return -1;
	}
	int Last(char c)
	{	
		for (int i = Length(); i >= 0; i--)
		{
			if (a[i] == c)
				return i + 1;
		}
		return -1;
	}
	int WordCount() 
	{
		int dem = 0, i = 0;
		while (i < Length() && a[i] == ' ')
			i++;
		while (i < Length())
		{
			if (a[i] != ' ')
				i++;
			else 
			{
				dem++;
				while ((i + 1) < Length() && a[i + 1] == ' ')
					i++;
				i++;
			}
		}
		if (Length() > 0 && a[Length() - 1] != ' ')
			dem++;
		return dem;
	};
};