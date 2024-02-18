
#include <iostream>
#include <algorithm>

/*Young man, there's no need to feel down
I said: Young man, pick yourself off the ground
I said: Young man, 'cause you're in a new town
There's no need to be unhappy

Young man, there's a place you can go
I said: Young man, when you're short on your dough
You can stay there, and I'm sure you will find
Many ways to have a good time

It's fun to stay at the Y-M-C-A
It's fun to stay at the Y-M-C-A

They have everything
For you men to enjoy
You can hang out with all the boys

It's fun to stay at the Y-M-C-A
It's fun to stay at the Y-M-C-A

You can get yourself cleaned
You can have a good meal
You can do whatever you feel

Young man, are you listening to me?
I said: Young man, what do you want to be?
I said: Young man, you can make real your dreams
But you got to know this one thing

No man does it all by himself
I said: Young man, put your pride on the shelf
And just go there, to the Y-M-C-A
I'm sure they can help you today

It's fun to stay at the Y-M-C-A
It's fun to stay at the Y-M-C-A

They have everything
For you men to enjoy
You can hang out with all the boys

It's fun to stay at the Y-M-C-A
It's fun to stay at the Y-M-C-A

You can get yourself cleaned
You can have a good meal
You can do whatever you feel

Young man, I was once in your shoes
I said: I was down and out with the blues
I felt no man cared if I were alive
I felt the whole world was so tight

That's when someone came up to me
And said: Young man, take a walk up the street
There's a place there called the Y-M-C-A
They can start you back on your way

It's fun to stay at the Y-M-C-A
It's fun to stay at the Y-M-C-A

They have everything
For you men to enjoy
You can hang out with all the boys

Y-M-C-A
It's fun to stay at the Y-M-C-A

Young man, young man
There's no need to feel down
Young man, young man
Get yourself off the ground

Y-M-C-A
And just go to the Y-M-C-A

Young man, young man
There's no need to feel down
Young man, young man
Get yourself off the ground
*/

int findOriginalLength(int parts[], int n) {
    std::sort(parts, parts + n);

    int result = parts[0] + parts[n - 1]; //Iinica el resultado desde el más pequeño al más grande como inical posible combinación

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
