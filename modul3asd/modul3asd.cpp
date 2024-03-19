#include <iostream>
#include <locale> // ��������� ����������� ���������

// ���������� ������� ��� ���������� n-�� ����� Գ�������
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::setlocale(LC_ALL, "uk_UA.UTF-8"); // ������������ ����� �� ���������
    int n;
    std::cout << "������ ����� ����� Գ�������: ";
    std::cin >> n;
    std::cout << "����� Գ������� ��� " << n << " - " << fibonacci(n) << std::endl;
    return 0;
}
