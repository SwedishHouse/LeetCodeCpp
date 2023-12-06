#include "yandex_algorith_lesson_0.h"
#include <map>
#include <iostream>

void yandex_algorith_lesson_0::print_most_common_symbol(std::string s)
{
	unsigned int cnt = 0;
	char ans = NULL;
	std::map<char, int> answers;
	for (int i = 0; i < s.size(); i++)
	{
		if (!answers.count(s[i]))
			answers.insert(std::make_pair(s[i], 0));
		answers[s[i]] += 1;
		if (answers[s[i]] > cnt)
		{
			cnt = answers[s[i]];
			ans = s[i];
		}
	}
	if (ans)
	{
		std::cout << "Symbol is: " << ans << " mets " << answers[ans] << "times\n";
	}
	else
	{
		std::cout << "Empty string\n";
	}
}