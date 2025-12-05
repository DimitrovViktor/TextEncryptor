#include <iostream>
#include <string>

std::string encryptor(std::string encrKey, std::string normText);

int main()
{
    std::string encrKey;
    std::string normText;
    std::string encrText;

    std::cout << "Enter password:\n";
    std::getline(std::cin, encrKey);

    std::cout << "Enter text:\n";
    std::getline(std::cin,normText);


    encrText = encryptor(encrKey, normText);

    std::cout << "Encrypted text:\n" << encrText << std::endl;
    std::getline(std::cin, encrText);



}

std::string encryptor(std::string encrKey, std::string normText) {
    std::string encrText;

    encrText = normText /*+ encryption*/;

    return encrText;
}