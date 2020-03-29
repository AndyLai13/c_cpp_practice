#include "CWin.hpp"
using namespace std;

CWin::CWin(string id, int width, int height) {
    this->id = id;
    this->width = width;
    this->height = height;
};

void CWin::showWeightAndHeight() {
    cout << "id: " << id << endl;
    cout << "width: " << width << endl;
    cout << "height: " << height << endl;
 }

 CWin::~CWin() {

 }
