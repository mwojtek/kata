#include <kata/word_wrap.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("word wrap") {
   CHECK(word_wrap("", 0) == "");
   CHECK(word_wrap("some text", 9) == "some text");
   CHECK(word_wrap("some text", 4) == "some\ntext");
   CHECK(word_wrap("some text", 5) == "some\ntext");
   CHECK(word_wrap("some text", 3) == "some\ntext");
   CHECK(word_wrap("some other text", 8) == "some\nother\ntext");
   CHECK(word_wrap("verylongtextwithnospace", 1) == "verylongtextwithnospace");
   CHECK(word_wrap("wrap every space available", 0) == "wrap\nevery\nspace\navailable");
}
