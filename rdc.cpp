#include <iostream>

int main() {
    float num1, num2, num3, num4, num5;
    float average, largest, smallest;

    // ورودی پنج عدد از کاربر گرفته می‌شود
    std::cout << "Enter five numbers: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // محاسبه معدل
    average = (num1 + num2 + num3 + num4 + num5) / 5;

    // پیدا کردن بزرگترین عدد
    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num4 > largest) {
        largest = num4;
    }
    if (num5 > largest) {
        largest = num5;
    }

    // پیدا کردن کوچکترین عدد
    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    if (num4 < smallest) {
        smallest = num4;
    }
    if (num5 < smallest) {
        smallest = num5;
    }

    // چاپ معدل، بزرگترین عدد و کوچکترین عدد
    std::cout << "Average: " << average << std::endl;
    std::cout << "Largest: " << largest << std::endl;
    std::cout << "Smallest: " << smallest << std::endl;

    return 0;
}
