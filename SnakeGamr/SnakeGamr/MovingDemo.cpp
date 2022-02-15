#include <iostream>
int main()
{
    int posY = 0;
    int posX = 0;
    while (true)
    {
        std::cout << "####################";


        for (int i = 0; i < 5; i++)
        {
            if (posY == i)
            {
                std::cout << std::endl << "#";

                for (int i = 0; i < posX; i++)
                {
                    std::cout << " ";
                }

                std::cout << "@";
                for (int i = 0; i < 20-(posX+3); i++)
                {
                    std::cout << " ";
                }
                std::cout << "#";
                continue;
            }
            std::cout << std::endl << "#                  #";
        }
        std::cout << std::endl << "####################";

        std::cout << std::endl << std::endl << "Your input here: ";

        char input;

        std::cin >> input;

        if (input == 's')
        {
            if (posY < 4)
            {
                posY++;
            }
        }
        else if(input == 'w')
        {
            if (posY > 0)
            {
                posY--;
            }
        }
        else if (input == 'a')
        {
            if (posX > 0)
            {
                posX--;
            }
        }
        else if (input == 'd')
        {
            if (posX < 17)
            {
                posX++;
            }
        }

        system("cls");
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
