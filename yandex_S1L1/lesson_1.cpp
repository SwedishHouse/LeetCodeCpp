#include "lesson_1.h"

string lesson_1::rle_min(const std::string& s)
{
	if (s.length() == 0)
		return "";
	string result;
	char current = s[0];
	result.push_back(current);
	for (int i(0); i < s.length(); i++)
	{
		if (s[i] != current)
		{
			result.push_back(s[i]);
			current = s[i];
		}
	}
	return result;
}

string lesson_1::rle(const std::string& s)
{
	string result;
	char current = s[0];
	unsigned int index = 0;
	for (int i(0); i < s.length(); i++)
	{
		if (s[i] != current)
		{
			result.push_back(s[i]);
			result.append(std::to_string(i - index));
			current = s[i];
			index = i;
		}
	}
	return result;
}

