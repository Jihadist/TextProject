#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <wordcounter.h>

#if _MSC_VER && !__INTEL_COMPILER
#define WIN_UNICODE
#endif

#ifdef WIN_UNICODE
#include <windows.h>
#endif

int main(int argc, char* argv[])
{
#ifdef WIN_UNICODE
    SetConsoleOutputCP(65001);
#endif
    if (argc > 1) {
        std::cout << argv[1] << std::endl;
    } else {
        std::cout << "Not arguments" << std::endl;
        return 1;
    }
    std::ifstream myfile(argv[1]);
    if (!myfile.is_open()) {
        std::cout << "Could not open file" << std::endl;
    }
    WordCounter counter(' ');
    auto dict = counter.count(myfile);

    for (auto&& item : dict) {
        std::cout << item.first << ":" << item.second << "\n";
    }

    std::cout << std::endl;
    return 0;
}
