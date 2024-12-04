#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <sstream>

// change if you choose to use a different header name
#include "AdjacencyList.h"

using namespace std;

// the syntax for defining a test is below. It is important for the name to be
// unique, but you can group multiple tests with [tags]. A test can have
// [multiple][tags] using that syntax.
TEST_CASE("Test 1", "[tag]") {
    AdjacencyList List1;

  // instantiate any class members that you need to test here
    List1.addEdge("zoom.us", "roblox.com");
    List1.addEdge("zoom.us", "python.org");
    List1.addEdge("python.org", "roblox.com");
    int n = 8;

   ostringstream  oss;
   streambuf* p_cout_streambuf = cout.rdbuf();
   cout.rdbuf(oss.rdbuf());

   List1.PageRank(n);
   List1.printingFunction();

   cout.rdbuf(p_cout_streambuf);

   assert(oss && oss.str() == "python.org 0.00\nroblox.com 0.00\nzoom.us 0.00\n");
   cout << oss.str();
}

TEST_CASE("Test 2", "[tag]") {
    AdjacencyList List2;

    // instantiate any class members that you need to test here
    List2.addEdge("openai.com", "apple.com");
    int n = 1;

    ostringstream  oss;
    streambuf* p_cout_streambuf = cout.rdbuf();
    cout.rdbuf(oss.rdbuf());

    List2.PageRank(n);
    List2.printingFunction();

    cout.rdbuf(p_cout_streambuf);

    assert(oss && oss.str() == "apple.com 0.50\n" "openai.com 0.50\n");
    cout << oss.str();
}


TEST_CASE("Test 3: Big Graph ", "[tag]") {
    AdjacencyList List3;
    // instantiate any class members that you need to test here
    List3.addEdge("pcbuildinguf.com", "samsung.com");
    List3.addEdge("disney.com", "google.com");
    List3.addEdge("instagram.com", "ufl.edu");
    List3.addEdge("openai.com", "google.com");
    List3.addEdge("github.com", "disney.com");
    List3.addEdge("disney.com", "pcbuildinguf.com");
    List3.addEdge("instagram.com", "github.com");
    List3.addEdge("samsung.com", "github.com");
    List3.addEdge("samsung.com", "disney.com");

    ostringstream  oss;
    streambuf* p_cout_streambuf = cout.rdbuf();
    cout.rdbuf(oss.rdbuf());
    int n = 8;

    List3.PageRank(n);
    List3.printingFunction();

    cout.rdbuf(p_cout_streambuf);

    assert(oss && oss.str() == "disney.com 0.04\ngithub.com 0.02\ngoogle.com 0.04\n"
                               "instagram.com 0.00\nopenai.com 0.00\npcbuildinguf.com 0.04\n"
                               "samsung.com 0.05\nufl.edu 0.00\n");
    cout << oss.str();
}

TEST_CASE("Test 4", "[tag]") {
    AdjacencyList List4;
    // instantiate any class members that you need to test here
    List4.addEdge("samsung.com", "openai.com");
    List4.addEdge("ufl.edu", "aman.com");

    ostringstream  oss;
    streambuf* p_cout_streambuf = cout.rdbuf();
    cout.rdbuf(oss.rdbuf());
    int n = 5;

    List4.PageRank(n);
    List4.printingFunction();

    cout.rdbuf(p_cout_streambuf);

    assert(oss && oss.str() == "aman.com 0.00\nopenai.com 0.00\nsamsung.com 0.00\nufl.edu 0.00\n");
    cout << oss.str();
}

TEST_CASE("Test 5", "[tag]") {
    AdjacencyList List5;
    // instantiate any class members that you need to test here
    List5.addEdge("disney.com", "zoom.us");
    List5.addEdge("github.com", "disney.com");
    ostringstream  oss;
    streambuf* p_cout_streambuf = cout.rdbuf();
    cout.rdbuf(oss.rdbuf());
    int n = 1;

    List5.PageRank(n);
    List5.printingFunction();

    cout.rdbuf(p_cout_streambuf);

    assert(oss && oss.str() == "disney.com 0.33\ngithub.com 0.33\nzoom.us 0.33\n");
    cout << oss.str();
}

TEST_CASE("Test 6", "[tag]") {
    AdjacencyList List6;
    // instantiate any class members that you need to test here
    List6.addEdge("wackie.com", "chase.com");
    List6.addEdge("chase.com", "cheese.com");
    ostringstream  oss;
    streambuf* p_cout_streambuf = cout.rdbuf();
    cout.rdbuf(oss.rdbuf());
    int n = 2;

    List6.PageRank(n);
    List6.printingFunction();

    cout.rdbuf(p_cout_streambuf);

    assert(oss && oss.str() == "chase.com 0.33\ncheese.com 0.33\nwackie.com 0.00\n");
    cout << oss.str();
}














