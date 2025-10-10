#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    setlocale(0, "");
    string str = "Hello, World from CLion!";

    size_t pos = 0;
    size_t pos1;
    const size_t len = str.length();

    while (pos < len) {
        pos1 = str.find(' ', pos);  // используем символ вместо строки (одиночные, а не двойные кавычки)
        if (pos1 == string::npos) pos1 = len;
        cout << "~" << str.substr(pos, pos1 - pos) << "~" << endl;
        pos = pos1 + 1;
    }

    cout << "~" << str << "~" << endl;

    return 0;
}



//#include <iostream>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//    string str = "Hello, World from CLion!";
//
//    stringstream ss(str);
//    string token;
//
//    while (getline(ss, token, ' ')) {
//        cout << "~" << token << "~" << endl;
//    }
//
//    return 0;
//}
