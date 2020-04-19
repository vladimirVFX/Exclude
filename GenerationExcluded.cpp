// GenerationExcluded.cpp 

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    cout << "Solve Ax = B" << "\n";
    double A, B, C;
    
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;

    try {
        if (A != 0)
            throw A; 
        if (B != 0)
            throw "No";
        cout << "Any solve";
    }

    catch (double e) {
        cout << "Solve: " << B / e << endl;
    }

    catch (char* e) {
        cout << e << endl;
    }

    system("pause > nul");
    return 0;
}

