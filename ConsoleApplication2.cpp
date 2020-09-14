// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void doPrint() {
    std::cout << "In doPrint()" << std::endl;
}
int return7() { return 7; }
void printValues(int a, int b)
{
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
int Summ(int a, int b) { return a + b; }
int Summ(int a0, int a1, int a2) { return a0 + a1 + a2; }
int Summ(int a0, int a1, int a2, int a3) { return a0 + a1 + a2 + a3; }
int Summ(int a0, int a1, int a2, int a3, int a4) { return a0 + a1 + a2 + a3 + a4; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5) { return a0 + a1 + a2 + a3 + a4 + a5; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return a0 + a1 + a2 + a3 + a4 + a5 + a6; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) { return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) { return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9; }
int Minus(int a, int b) { return a - b; }
int Multiplication(int a, int b) { return a * b; }


int main()
{

    std::cout << "############################\n";
    if (false)
    {
        doPrint();
    }
    else if (false)
    {
        //Вывод результата функции на экран
        std::cout << "return7()==" << return7() << std::endl;
        std::cout << "return7()+3==" << return7() + 3 << std::endl;
    }
    else if (false)
    {
        //Тоже самое только в стиле Паскаля
        int i;
        i = return7();
        std::cout << "i==" << i;
    }
    else if (false)
    {
        printValues(8, 9);
    }
    else if (!false)
    {
        std::cout << Summ(Summ(3, 2), 1) << std::endl; // №3
        std::cout << Minus(Minus(3, 2), 1) << std::endl; // №3
        std::cout << Multiplication(Multiplication(3, 2), 1) << std::endl; // №3
        std::cout << Summ(3, 2, 1) << std::endl; // №3
        std::cout << Summ(3, -2, -1) << std::endl; // №3

    }

    std::cout << "\n############################\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.