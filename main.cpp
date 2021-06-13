#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
    {
        ifstream inFS;
        string fileWord;
        int numWords = 0;

        cout << "-------------------------------------------" << endl;
        cout << "-------------------------------------------" << endl;

        //Open file
        cout << "Opening file myfile.txt." << endl;
        inFS.open("myfile.txt");

        if (!inFS.is_open())
            {
                cout << "Could not open file myfile.txt." << endl;
                return 1;
            }

        // Print read numbers to output
        cout << "Reading and printing numbers." << endl;
        cout << endl;
        cout << endl;

        inFS >> fileWord;
        while (!inFS.fail())
            {
                cout << fileWord << "\t\t<---- " << fileWord.length() << " letters" << endl;
                inFS >> fileWord;
                ++numWords;
            }

        cout << endl;
        cout << "Number of words in file: " << numWords << endl;

        if (!inFS.eof())
            {
                cout << "Input failure before reaching end of file." << endl;
            }

        cout << endl;
        cout << endl;
        cout << "Closing file myfile.txt." << endl;
        cout << "-------------------------------------------" << endl;
        cout << "-------------------------------------------" << endl;
        

        // Done with file, so close it
        inFS.close();

        return 0;
    }