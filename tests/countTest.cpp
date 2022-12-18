#include <gtest/gtest.h>
#include <wordcounter.h>
namespace {

// Tests the count method.
TEST(WordCounter, count)
{
    WordCounter counter(' ');

    std::string str("Возле стола стоял стул. \n Стул стоял возле стола.");
    std::istringstream istream(str);
    auto dict = counter.count(istream);
    EXPECT_EQ(dict.size(), 8);

    EXPECT_EQ(dict.at("стоял"), 2);

    EXPECT_EQ(dict.at("Стул"), 1);

    EXPECT_EQ(dict.at("стул."), 1);

    EXPECT_EQ(dict.at("стола."), 1);
}
} // namespace
