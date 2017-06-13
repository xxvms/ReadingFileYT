#include <iostream>
#include <fstream>

int main() {

    std::ifstream object("test.txt");
    int a, b;

    if(object.is_open())
    {
        object >> a >> b;

        std::cout << "Total: " << a + b;
    }
    object.close();

    std::ofstream object1("test.txt");
    std::string abc{"hello world"};
    object1 << abc;

    return 0;
}