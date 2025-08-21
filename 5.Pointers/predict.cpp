#include <iostream>
using namespace std;

void foo(int *i, int *j)
{
    *i = *i + *j;
    *j = *i - *j;
    *i = *i - *j;
}

int main()
{
    int a = 4, b = 5;
    foo(&a, &b);
    cout << a << b;
}

// void countVowelsAndConsonants(const char *str, int &vowels, int &consonants)
// {
//     vowels = consonants = 0;

//     while (*str)
//     {
//         char ch = tolower(*str);
//         if (isalpha(ch))
//         {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//             {
//                 vowels++;
//             }
//             else
//             {
//                 consonants++;
//             }
//         }
//         str++;
//     }
// }

// int main()
// {
//     const char *text = "Hello, World!";
//     int numVowels, numConsonants;
//     countVowelsAndConsonants(text, numVowels, numConsonants);
//     cout << "Vowels: " << numVowels << ", Consonants: " << numConsonants;
//     return 0;
// }

// void updateValues(int *a, int *b)
// {
//     *a += *b;
//     *b = abs(*a - 2 * (*b));
// }

// int main()
// {
//     int x = 5, y = 3;
//     updateValues(&x, &y);
//     cout << x << " " << y;
//     return 0;
// }

// void reverseString(char *str)
// {
//     char *end = str;
//     while (*end)
//     {
//         end++;
//     }
//     end--;

//     while (str < end)
//     {
//         char temp = *str;
//         *str = *end;
//         *end = temp;
//         str++, end--;
//     }
// }

// int main()
// {
//     char myString[] = "Programming";
//     reverseString(myString);
//     cout << myString;
//     return 0;
// }

// void concatenateAndPrint(char *str1, const char *str2)
// {
//     while (*str1)
//     {
//         str1++;
//     }

//     while ((*str1 = *str2))
//     {
//         str1++, str2++;
//     }
// }

// int main()
// {
//     char first[] = "Good";
//     const char second[] = "Morning";
//     concatenateAndPrint(first, second);
//     cout << first;
//     return 0;
// }

// void modifyString(char *str)
// {
//     while (*str)
//     {
//         if (*str >= 'a' && *str <= 'z')
//         {
//             *str = *str - 'a' + 'A';
//         }
//         str++;
//     }
// }

// int main()
// {
//     char myString[] = "hello World";
//     modifyString(myString);
//     cout << myString;
//     return 0;
// }
