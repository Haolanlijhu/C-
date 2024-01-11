#include <iostream>
#include <string>
using namespace std;

bool whetherNumber(string& s)
{
    if (s[0] != '-' && !isdigit(s[0])) {
        return false;
    }
    for (int j = 1; j < s.length(); j++)
    {
        if (!isdigit(s[j]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    double miles;
    bool flag = true;
    string miles1;
    while (flag)
    {
        cout << "Enter the miles: ";
        getline(cin,miles1);
        string result;
        try
        {
            if (!whetherNumber(miles1))
            {
                result = "Your input must be digit!\n";
                throw result;
            }
            miles = stoi(miles1);
            if (miles < 0)
            {
                result = "Your input must be non-negative!\n";
                throw result;
            }
            flag = false;
        }
        catch (string s1)
        {
            cout << s1 << endl;
        }
    }
    float kilometers = miles * 1.6;
    cout << "Your distance in kilometer is: " << kilometers;
}
