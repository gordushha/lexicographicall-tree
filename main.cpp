#include <string>
#include "Tree.h"
#include <iostream>

using namespace std;
int main()
{
	Tree T;
	T.Insert("dan");
	T.Insert("text");
	T.Insert("bez");
	T.Insert("zaglavnih");
	T.Insert("bukv");
	T.Insert("bukv");
	cout << T.Search("bukv");
	return 0;
}