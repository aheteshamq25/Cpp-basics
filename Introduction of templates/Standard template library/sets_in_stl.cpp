#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "The size of the set is " << s.size() << endl;

    int n = 2;
    if (s.find(2) != s.end())
    {
        cout << n << " is present in the set \n";
    }

    s.erase(s.begin());
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the set after removing first element " << s.size() << endl;

    return 0;
}