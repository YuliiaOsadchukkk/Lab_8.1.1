

#include <iostream>
#include <string>
using namespace std;

bool IsOrNot(char* str)
{
	bool result = false;
	for (size_t i = 0; i < strlen(str) - 4; i++)
	{
		if (str[i] == str[i + 1] && str[i] == str[i + 2] && str[i] == str[i + 3])
		{
			result = true;
			break;
		}  
	}
	return result;
}


char* change(char* str)
{
	char* sNew = new char[101];
	size_t l = 0;
	if (IsOrNot(str))
		for (size_t i = 0; i < strlen(str); i++)
		{
			if (str[i] == str[i + 1] && str[i] == str[i + 2] && str[i] == str[i + 3])
			{
				sNew[l] = '*';
				sNew[l + 1] = '*';
				l += 2;
				i += 3;
			}
			else
			{
				sNew[l] = str[i];
				++l;
			}
		}
	sNew[l] = '\0';
	strcpy_s(str, strlen(sNew) + 1, sNew);
	delete[] sNew;
	return str;
}


int main()
{
	char* str = new char[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << endl;

	if (IsOrNot(str))
		cout << "There is 4 similar neighbour symbols" << endl;
	else
		cout << "There is NOT any 4 similar neighbour symbols" << endl;
	cout << endl;

	char* t = change(str);
	cout << t;
	delete[] str;
	cout << endl;
}