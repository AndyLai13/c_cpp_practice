#include <cstdlib>
#include <iostream>

using namespace std;

class CWin
{
    private:
        string id;
        int width, height;
    public:
        CWin(string id, int width, int height);
        void showWeightAndHeight();
        ~CWin();
};
