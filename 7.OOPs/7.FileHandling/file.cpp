#include <iostream>
#include <fstream>

int main()
{
    std::fstream fin("file.txt");

    if (!fin.is_open())
    {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    char c;
    while (!fin.eof())
    {                   // Potential problem starts here
        fin >> c;       // Read attempt
        std::cout << c; // Print without checking if read was successful
    }
    fin.close();
    return 0;
}