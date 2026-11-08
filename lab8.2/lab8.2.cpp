
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Робить першу літеру слова після крапки великою
void CapitalizeAfterDot(string& str)
{
    bool capitalize = false;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            capitalize = true;
        }
        else if (capitalize)
        {
            unsigned char ch = static_cast<unsigned char>(str[i]);

            // Пропускаємо пробіли та знаки пунктуації
            if (isspace(ch) || ispunct(ch))
                continue;

            // Змінюємо першу літеру слова
            if (isalpha(ch))
            {
                str[i] = static_cast<char>(toupper(ch));
            }

            capitalize = false;
        }
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    CapitalizeAfterDot(str);

    cout << "Modified string: " << str << endl;

    return 0;
}