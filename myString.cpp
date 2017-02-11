#include <iostream>
using namespace std;
#include "mystring.h"

int main()
{
	MyString s("To Huong Lan"), s1("    hello     hello   ");
	cout<<s<<endl;				    
	cout<<s.Length()<<"; "<<s1.Length()<<endl; 
	cout<<s.CharAt(1)<<"; "<<s.CharAt(5)<<endl; 
	
	cout << s.SubString(3, 4) << endl;
	cout << s.First('u') << endl;  //5
	cout << s.First('k') << endl;  //-1
	cout << s.Last('n') << endl;   //12
	cout << s.Last('X') << endl;   //-1

	cout << s.SubString(s.First(' ') + 1) << endl;
	
	cout << s.WordCount() << endl;  //3
	cout << s1.WordCount() << endl; //2
	
	return 0;
}