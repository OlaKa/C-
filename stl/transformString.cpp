#include <iostream>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
        string s1 = "lowertoupper";
        string s2 = "UPPERTOLOWER";

        cout << s1 << " : ";
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        cout << s1 << endl;

        cout << s2 << " : ";
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        cout << s2 << endl;

        return 0;
}
