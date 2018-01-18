#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

#include <vector>
#include <string>

std::vector<std::string> importInput(std::string fileName);
void displayInput(std::vector<std::string> input);
void displayInput(std::vector<int> input);
std::vector<int> changeStringToInt(std::vector<std::string> input);
int calculResultPart1(std::vector<int> input);
int calculResultPart2(std::vector<int> input);

#endif // TOOLS_H_INCLUDED
