#include <iostream> 
#include <cmath>
using namespace std;

// Задание 1 - Номера: 2 4 6 8 10
int sumLastNums(int number) // #2
{
    int count = number % 10 + number /10 % 10;
    std::cout << "Answer: ";
    std::cout << count << std::endl;
    return 0;
}

bool isPositive(int number) // #4
{
    if (number < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isUpperCase(char x) // #6
{
    if (isupper(x))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEqual(int a, int b) // #8
{
    if (a / b || b / a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int lastNumSum(int a, int b) // #10
{
    int sum = a % 10 + b % 10;
    std::cout << a << " + " << b << " = " << sum << std::endl;
    return sum;
}
                                  
// Задание 2 - Номера 1 3 5 7 9
int abs(int x) // #1
{
    if (x >= 0)
    {
        return x;
    }
    else
    {
        return -x;
    }
}

bool is35(int x)
{
    if (x / 3 && x / 5)
    {
        return false;
    }
    else
    {
        if (x / 3 || x / 5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int max3(int x, int y, int z)
{
    int max = x;
    if (y > max)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }
    return max;
}

int sum2(int x, int y)
{
    int sum = x + y;
    if (10 <= sum && sum <= 19)
    {
        return 20;
    }
    else
    {
        return sum;
    }
}

int day(int x)
{
    switch (x)
    {
        case 1:
        {
            std::cout << "Monday" << std::endl;
            break;
        }
        case 2:
        {
            std::cout << "Tuesday" << std::endl;
            break;
        }
        case 3:
        {
            std::cout << "Wednesday" << std::endl;
            break;
        }
        case 4:
        {
            std::cout << "Thursday" << std::endl;
            break;
        }
        case 5:
        {
            std::cout << "Fridays" << std::endl;
            break;
        }
        case 6:
        {
            std::cout << "Saturday" << std::endl;
            break;
        }
        case 7:
        {
            std::cout << "Sunday" << std::endl;
            break;
        }
        default:
        {
            std::cout << "Error, wrong request" << std::endl;
        }
    }
    return 0;
}

// Задание 3 - Номера 1 3 4 6 8

void listNums(int x)
{
    int start = 0;
    while (start <= x)
    {
        std::cout << start << " ";
        start++;
    }
}

void chet(int x)
{
    int start = 0;
    while (start <= x)
    {
        std::cout << start << " ";
        start = start + 2;
    }
}

int pow(int x, int y)
{
    int i = 0, pr = x;
    while(i < y)
    {
        pr = pr * x;
        i = i + 1;
    }
    
    return pr;
}

bool equalNum(int x)
{
    int save = x % 10, i;
    while (x > 10)
    {
        x = x /10;
        i = x % 10;
        if (save != i)
        {
            return false;
        }
    }
    return true;
}

void leftTriangle(int x)
{
    int i = 1, j;
    while (i <= x)
    {
        j = 1;
        while (j <= i)
        {
            std::cout << "*";
            j = j + 1;
        }
        std::cout << std::endl;
        i = i + 1;
    }
}

// Задание 4 - Номера 1 3 4 6 8

int main() // Оформляется дружественный интерфейс
{

    // #2
    std::cout << "Nomer 2" << endl;

    int number;
    std::cout << "Write number: ";
    std::cin >> number;
    
    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        sumLastNums(number);
    }

    // #4
    std::cout << "Nomer 4" << endl;

    int number1;
    std::cout << "Write number: ";
    std::cin >> number1;
    
    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer (1 - true, 0 - false): ";
        std::cout << isPositive(number1) << std::endl;
    }

    // #6
    std::cout << "Nomer 6" << endl;
    
    char stroka;
    std::cout << "Write letter: ";
    std::cin >> stroka;
    std::cout << "Answer (1 - true, 0 - false): ";
    std::cout << isUpperCase(stroka) << std::endl;

    // #8
    std::cout << "Nomer 8" << endl;

    int number2, number3;
    std::cout << "Write first number: ";
    std::cin >> number2;
    std::cout << "Write second number: ";
    std::cin >> number3;
    
    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer (1 - true, 0 - false): ";
        std::cout << isEqual(number2, number3) << std::endl;
    }

    // #10
    std::cout << "Nomer 10" << endl;

    int n1, n2, n3, n4, n5;
    std::cout << "Write 1st number: ";
    std::cin >> n1;
    std::cout << "Write 2nd number: ";
    std::cin >> n2;
    std::cout << "Write 3rd number: ";
    std::cin >> n3;
    std::cout << "Write 4th number: ";
    std::cin >> n4;
    std::cout << "Write 5th number: ";
    std::cin >> n5;

    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer: " << lastNumSum(lastNumSum(lastNumSum(lastNumSum(n1, n2), n3), n4), n5) << std::endl;
    }

    // #1
    std::cout << "Nomer 1" << endl;

    int number11;
    std::cout << "Write number: ";
    std::cin >> number11;
    
    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer: " << abs(number11) << std::endl;
    }

    // #3
    std::cout << "Nomer 3" << endl;

    int number12;
    std::cout << "Write number: ";
    std::cin >> number12;
    
    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer (1 - true, 0 - false): " << is35(number12) << std::endl;
    }

    // #5
    std::cout << "Nomer 5" << endl;

    int number13, number14, number15;
    std::cout << "Write 1st number: ";
    std::cin >> number13;
    std::cout << "Write 2nd number: ";
    std::cin >> number14;
    std::cout << "Write 3rd number: ";
    std::cin >> number15;
    
    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer: " << max3(number13, number14, number15) << std::endl;
    }

    // #7
    std::cout << "Nomer 7" << endl;

    int number16, number17;
    std::cout << "Write 1st number: ";
    std::cin >> number16;
    std::cout << "Write 2nd number: ";
    std::cin >> number17;
    
    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer: " << sum2(number16, number17) << std::endl;
    }

    // #9
    std::cout << "Nomer 9" << endl;

    int number18;
    std::cout << "Write number: ";
    std::cin >> number18;
    
    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer: " << day(number18) << std::endl;
    }

    // #1
    std::cout << "Nomer 1" << endl;

    int number20;
    std::cout << "Write number: ";
    std::cin >> number20;

    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        listNums(number20);
        std::cout << endl;
    }

    // #3
    std::cout << "Nomer 3" << endl;

    int number21;
    std::cout << "Write number: ";
    std::cin >> number21;

    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        chet(number21);
        std::cout << std::endl;
    }

    // #4
    std::cout << "Nomer 4" << endl;

    int number22, number23;
    std::cout << "Write number: ";
    std::cin >> number22;
    std::cout << "Write degree: ";
    std::cin >> number23;

    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer: " << pow(number22, number23) << std::endl;
    }

    // #6
    std::cout << "Nomer 6" << endl;

    int number24;
    std::cout << "Write number: ";
    std::cin >> number24;

    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer (1 - true, 0 - false): " << equalNum(number24) << std::endl;
    }

    // #8
    std::cout << "Nomer 8" << endl;

    int number25;
    std::cout << "Write number: ";
    std::cin >> number25;

    if (!std::cin)
    {
        std::cout << "Error, wrong input" << std::endl;
    }
    else
    {
        std::cout << "Answer: " << std::endl;
        leftTriangle(number25);
    }

    return 0;
}