#pragma once
#include <iosfwd>
#include <string>
#include <unordered_map>

class WordCounter {

public:
    using dictionary = std::unordered_map<std::string, unsigned>;

    WordCounter(char splitChar);
    dictionary count(std::istream& stream) const;

private:
    const char m_splitChar;
};
