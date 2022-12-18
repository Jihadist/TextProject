#include "wordcounter.h"
#include <iostream>

WordCounter::WordCounter(char splitChar)
    : m_splitChar(splitChar)
{
}

WordCounter::dictionary WordCounter::count(std::istream& stream) const
{
    if (stream.fail() || stream.eof())
        return {};

    std::string word;
    dictionary dict;
    while (std::getline(stream, word, m_splitChar)) {
        dict[word]++;
    }
    return dict;
}
