#include <iostream>
#include "tools.h"

using namespace std;

int main()
{
    vector<string> input = importInput("input.txt");
    vector<int> inputNumbers = changeStringToInt(input);
    displayInput(inputNumbers);
    cout << endl << "taille input : " << inputNumbers.size() << endl << endl;

    int resultPart1 = calculResultPart1(inputNumbers);
    cout << "Resultat Partie 1 : " << resultPart1 << endl;

    int resultPart2 = calculResultPart2(inputNumbers);
    cout << "Resultat Partie 2 : " << resultPart2 << endl;

    return 0;
}
