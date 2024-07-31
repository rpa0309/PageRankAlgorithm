//#include "../src/AdjacencyList.cpp"
//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
//#include <vector>
//#include <sstream>
//using namespace std;
//
///*
//	To check output (At the Project1 directory):
//		g++ -std=c++14 -Werror -Wuninitialized -o build/test test-unit/test.cpp && build/test
//*/
//
//TEST_CASE("Test 1", "[given]"){
//    AdjacencyList aL;
//    string input = R"(7 2
//google.com gmail.com
//google.com maps.com
//facebook.com ufl.edu
//ufl.edu google.com
//ufl.edu gmail.com
//maps.com facebook.com
//gmail.com maps.com)";
//    string expectedOutput = R"(facebook.com 0.20
//gmail.com 0.20
//google.com 0.10
//maps.com 0.30
//ufl.edu 0.20
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 2", "[given]"){
//    AdjacencyList aL;
//    string input = R"(7 3
//google.com gmail.com
//google.com maps.com
//facebook.com ufl.edu
//ufl.edu google.com
//ufl.edu gmail.com
//maps.com facebook.com
//gmail.com maps.com)";
//    string expectedOutput = R"(facebook.com 0.30
//gmail.com 0.15
//google.com 0.10
//maps.com 0.25
//ufl.edu 0.20
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 3", "[given]"){
//    AdjacencyList aL;
//    string input = R"(11 1
//google.com gmail.com
//google.com maps.com
//facebook.com ufl.edu
//ufl.edu google.com
//ufl.edu gmail.com
//maps.com facebook.com
//maps.com quora.com
//quoa.co maps.edu
//quora.com ufl.com
//quora.com facebok.co.in
//quora.com quoa.co)";
//    string expectedOutput = R"(facebok.co.in 0.10
//facebook.com 0.10
//gmail.com 0.10
//google.com 0.10
//maps.com 0.10
//maps.edu 0.10
//quoa.co 0.10
//quora.com 0.10
//ufl.com 0.10
//ufl.edu 0.10
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 4", "[given]"){
//    AdjacencyList aL;
//    string input = R"(7 10000
//google.com gmail.com
//google.com maps.com
//facebook.com ufl.edu
//ufl.edu google.com
//ufl.edu gmail.com
//maps.com facebook.com
//gmail.com maps.com)";
//    string expectedOutput = R"(facebook.com 0.24
//gmail.com 0.18
//google.com 0.12
//maps.com 0.24
//ufl.edu 0.24
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 5", "[given]"){
//    AdjacencyList aL;
//    string input = R"(7 5
//google.com gmail.com
//google.com maps.com
//facebook.com ufl.edu
//ufl.edu google.com
//ufl.edu gmail.com
//maps.com facebook.com
//maps.com quora.com)";
//    string expectedOutput = R"(facebook.com 0.02
//gmail.com 0.04
//google.com 0.02
//maps.com 0.02
//quora.com 0.02
//ufl.edu 0.02
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 6", "[written]"){
//    AdjacencyList aL;
//    string input = R"(17 11
//openai.com disney.com
//twitter.com zoom.us
//google.com python.org
//microsoft.com google.com
//zoom.us google.com
//pcbuildinguf.com python.org
//pcbuildinguf.com disney.com
//mozilla.org openai.com
//openai.com weather.com
//mozilla.org disney.com
//google.com mozilla.org
//openai.com ufl.edu
//google.com zoom.us
//ufl.edu pcbuildinguf.com
//openai.com microsoft.com
//google.com microsoft.com
//weather.com twitter.com
//)";
//    string expectedOutput = R"(disney.com 0.01
//google.com 0.02
//microsoft.com 0.01
//mozilla.org 0.01
//openai.com 0.00
//pcbuildinguf.com 0.00
//python.org 0.01
//twitter.com 0.00
//ufl.edu 0.00
//weather.com 0.00
//zoom.us 0.01
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 7", "[written]"){
//    AdjacencyList aL;
//    string input = R"(8 2
//housing.ufl.edu admissions.ufl.edu
//housing.ufl.edu welcome.ufl.edu
//housing.ufl.edu advising.ufl.edu
//housing.ufl.edu ufl.edu
//admissions.ufl.edu ufl.edu
//admissions.ufl.edu advising.ufl.edu
//ufl.edu advising.ufl.edu
//ufl.edu welcome.ufl.edu
//)";
//    string expectedOutput = R"(admissions.ufl.edu 0.05
//advising.ufl.edu 0.25
//housing.ufl.edu 0.00
//ufl.edu 0.15
//welcome.ufl.edu 0.15
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 8", "[written]"){
//    AdjacencyList aL;
//    string input = R"(8 1
//housing.ufl.edu admissions.ufl.edu
//housing.ufl.edu welcome.ufl.edu
//housing.ufl.edu advising.ufl.edu
//housing.ufl.edu ufl.edu
//admissions.ufl.edu ufl.edu
//admissions.ufl.edu advising.ufl.edu
//ufl.edu advising.ufl.edu
//ufl.edu welcome.ufl.edu
//)";
//    string expectedOutput = R"(admissions.ufl.edu 0.20
//advising.ufl.edu 0.20
//housing.ufl.edu 0.20
//ufl.edu 0.20
//welcome.ufl.edu 0.20
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 9", "[written]"){
//    AdjacencyList aL;
//    string input = R"(12 3
//housing.ufl.edu admissions.ufl.edu
//housing.ufl.edu welcome.ufl.edu
//housing.ufl.edu advising.ufl.edu
//housing.ufl.edu ufl.edu
//admissions.ufl.edu ufl.edu
//admissions.ufl.edu advising.ufl.edu
//ufl.edu advising.ufl.edu
//ufl.edu welcome.ufl.edu
//ufl.edu admissions.ufl.edu
//advising.ufl.edu ufl.edu
//advising.ufl.edu welcome.ufl.edu
//admissions.ufl.edu welcome.ufl.edu
//)";
//    string expectedOutput = R"(admissions.ufl.edu 0.07
//advising.ufl.edu 0.11
//housing.ufl.edu 0.00
//ufl.edu 0.13
//welcome.ufl.edu 0.20
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}
//TEST_CASE("Test 10", "[written]"){
//    AdjacencyList aL;
//    string input = R"(13 3
//housing.ufl.edu admissions.ufl.edu
//housing.ufl.edu welcome.ufl.edu
//housing.ufl.edu advising.ufl.edu
//housing.ufl.edu ufl.edu
//admissions.ufl.edu ufl.edu
//admissions.ufl.edu advising.ufl.edu
//ufl.edu advising.ufl.edu
//ufl.edu welcome.ufl.edu
//ufl.edu admissions.ufl.edu
//advising.ufl.edu ufl.edu
//advising.ufl.edu welcome.ufl.edu
//admissions.ufl.edu welcome.ufl.edu
//welcome.ufl.edu housing.ufl.edu
//)";
//    string expectedOutput = R"(admissions.ufl.edu 0.12
//advising.ufl.edu 0.16
//housing.ufl.edu 0.28
//ufl.edu 0.18
//welcome.ufl.edu 0.25
//)";
//    string actualOutput;
//    stringstream buffer;
//    streambuf *old = cout.rdbuf(buffer.rdbuf());
//    aL.parse(input);
//    cout.rdbuf(old);
//    actualOutput = buffer.str();
//    REQUIRE(expectedOutput == actualOutput);
//}