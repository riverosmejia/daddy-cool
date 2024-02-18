#include <iostream>
#include <algorithm>

int findOriginalLength(int parts[], int n) {
    std::sort(parts, parts + n);

    int result = parts[0] + parts[n - 1];

    for (int i = 1; i < n / 2; ++i) {
        int current_sum = parts[i] + parts[n - 1 - i];

        // Verifica si la combinación es posible para todos los palos
        if (current_sum > result) {
            result = current_sum;
        }
    }

    return result;
}

int main() {
    int num_parts;

    while (true) {
        std::cin >> num_parts;

        if (num_parts == 0) {
            break;
        }

        int parts[50];  // Suponemos un límite de 50 partes

        for (int i = 0; i < num_parts; ++i) {
            std::cin >> parts[i];
        }

        // Encuentra la longitud original más pequeña
        int result = findOriginalLength(parts, num_parts);

        // Imprime el resultado
        std::cout << result << std::endl;
    }

    return 0;
}
