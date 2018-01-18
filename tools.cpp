#include <iostream>
#include <fstream>
#include <sstream>
#include "tools.h"

using namespace std;

vector<string> importInput(string fileName)
{
    ifstream myStream(fileName);
    if(!myStream)
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
        exit(0);
    }

    string number;
    vector<string> input;
    while(getline(myStream, number))
    {
        input.push_back(number);
    }

    return input;
}

void displayInput(vector<string> input)
{
    vector<string>::iterator itInput;
    for(itInput = input.begin(); itInput != input.end(); ++itInput)
    {
        cout << *itInput << endl;
    }
}

void displayInput(vector<int> input)
{
    vector<int>::iterator itInput;
    for(itInput = input.begin(); itInput != input.end(); ++itInput)
    {
        cout << *itInput << endl;
    }
}

vector<int> changeStringToInt(vector<string> input)
{
    vector<int> inputNumbers;

    vector<string>::iterator itInput;
    for(itInput = input.begin(); itInput != input.end(); ++itInput)
    {
        istringstream stream(*itInput);
        int number(0);
        stream >> number;
        inputNumbers.push_back(number);
    }

    return inputNumbers;
}


int calculResultPart1(vector<int> input)
{
    int stepResult(0);
    int currentNumber(0);
    int i(0);
    while(i < input.size())
    {
        currentNumber = input[i];
        ++input[i];
        i += currentNumber;

        ++stepResult;
    }

    return stepResult;
}


int calculResultPart2(vector<int> input)
{
    int stepResult(0);
    int currentNumber(0);
    int i(0);
    while(i < input.size())
    {
        currentNumber = input[i];

        if(currentNumber < 3)
        {
            ++input[i];
        }
        else
        {
            --input[i];
        }

        i += currentNumber;

        ++stepResult;
    }

    return stepResult;
}
