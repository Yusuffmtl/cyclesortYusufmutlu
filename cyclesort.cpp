#include <iostream>
#include <vector>
#include <algorithm>

// Cycle Sort algoritması
void cycleSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int cycle_start = 0; cycle_start <= n - 2; ++cycle_start) {
        int item = arr[cycle_start];
        int pos = cycle_start;

        // Döngüdeki doğru pozisyonu bul
        for (int i = cycle_start + 1; i < n; ++i)
            if (arr[i] < item)
                ++pos;

        // Eğer öğe zaten doğru yerdeyse devam et
        if (pos == cycle_start)
            continue;

        // Aynı öğeleri atla
        while (item == arr[pos])
            ++pos;

        // Öğeyi doğru pozisyona yerleştir
        if (pos != cycle_start)
            std::swap(item, arr[pos]);

        // Döngüyü devam ettir
        while (pos != cycle_start) {
            pos = cycle_start;
            for (int i = cycle_start + 1; i < n; ++i)
                if (arr[i] < item)
                    ++pos;

            while (item == arr[pos])
                ++pos;

            if (item != arr[pos])
                std::swap(item, arr[pos]);
        }
    }
}
