#include <iostream>
#include <locale> // Додавання необхідного заголовку

// Рекурсивна функція для обчислення n-го числа Фібоначчі
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::setlocale(LC_ALL, "uk_UA.UTF-8"); // Встановлення локалі на українську
    int n;
    std::cout << "Введіть номер числа Фібоначчі: ";
    std::cin >> n;
    std::cout << "Число Фібоначчі для " << n << " - " << fibonacci(n) << std::endl;
    return 0;
}
