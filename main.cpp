#include <iostream>

bool substr (char* x, char* y)
{
    bool found = false;
    int i = 0;
    while (*(x + i) != '\0')
    {
        bool match = true;
        int j = 0;
        while (*(y + j) != '\0')
        {
            if (*(y + j) != *(x + j + i))
            {
                match = false;
                break;
            }
            ++j;
        }
        if (match)
        {
            found = true;
            break;
        }
        ++i;
    }
    return found;
}

int main() {
    char a[] = "abdabcd";
    char b[] = "abce";
    char c[] = "banana";

    std::cout << substr(a,b) << " " << substr(a, c) << std::endl;

}
