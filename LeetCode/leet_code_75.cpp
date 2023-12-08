#include "leet_code_75.h"

string leet_code_75::mergeAlternately(string word1, string word2)
{
    string* biggest = word1.size() >= word2.size() ? &word1 : &word2;
    string* smallest = word1.size() < word2.size() ? &word1 : &word2;
    char* result = new char[word1.size() + word2.size() + 1];

    for (int i(0); i < smallest->size(); i++)
    {
        result[i*2] = word1[i];
        result[i*2+1] = word2[i];
    }
    for (int i(0); i < biggest->size() - smallest->size(); i++)
    {
        result[smallest->size()*2 + i] = (*biggest)[smallest->size() +i];
    }
    result[word1.size() + word2.size()] = '\0';
    string str_res;
    str_res.assign(result);
    return str_res;
}
