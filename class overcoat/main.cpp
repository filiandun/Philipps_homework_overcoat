#include <iostream>
#include "overcoat.h"

int main()
{
    setlocale(LC_ALL, "rus");

// ОПЕРАТОРА==
    Overcoat coat(COAT, 5000);
    Overcoat pants(PANTS, 40);

    std::cout << coat;
    std::cout << pants;

    if (coat == pants)
    {
        std::cout << "ТИПЫ РАВНЫ";
    }
    else
    {
        std::cout << "ТИПЫ НЕ РАВНЫ";
    }
    std::cout << std::endl << std::endl;


    // ОПЕРАТОР=
    Overcoat pants_2; 
    pants_2 = pants; 

    std::cout << pants;
    std::cout << pants_2;

    if (pants == pants_2)
    {
        std::cout << "ТИПЫ РАВНЫ";
    }
    else
    {
        std::cout << "ТИПЫ НЕ РАВНЫ";
    }
    std::cout << std::endl << std::endl;


// ОПЕРАТОР>
    Overcoat shorts(SHORTS, 2799.99);
    Overcoat shorts_2(SHORTS, 5499.99);

    std::cout << shorts_2;
    std::cout << shorts;

    if (shorts_2 > shorts) // оператор>
    {
        std::cout << "ЦЕНА БОЛЬШЕ";
    }
    else
    {
        std::cout << "ЦЕНА МЕНЬШЕ";
    }
    std::cout << std::endl << std::endl;



    Overcoat tshirt(TSHIRT, 1999.99);

    std::cout << tshirt;
    std::cout << shorts;

    if (tshirt > shorts) // оператор>
    {
        std::cout << "ЦЕНА БОЛЬШЕ";
    }
    else
    {
        std::cout << "ЦЕНА МЕНЬШЕ";
    }
    std::cout << std::endl << std::endl;

    return 0;
}
