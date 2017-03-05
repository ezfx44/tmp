#include <iostream>
#include <fstream>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    char nm1[20], nm2[20], buff1[256], buff2[256];
    int line = 1;
    std::cout << "Введите имя файла 1 без расширения: ";
    std::cin >> nm1;
    std::cout << "\nВведите имя файла 2 без расширения: ";
    std::cin >> nm2;
    strcat(nm1, ".txt");
    strcat(nm2, ".txt");
    std::ifstream f1, f2;
    f1.open(nm1);
    f2.open(nm2);
    while(!f1.eof() || !f2.eof())
            {
                f1.getline(buff1, 256);
                f2.getline(buff2, 256);
                if (strcmp(buff1, buff2))
                {
                    std::cout << nm1 << "\tСтрока №" << line << ":\t" << buff1 <<std::endl;
                    std::cout << nm2 << "\tСтрока №" << line << ":\t" << buff2 <<std::endl;
                }
                line++;
            }
    f1.close();
    f2.close();
    return 0;
}
