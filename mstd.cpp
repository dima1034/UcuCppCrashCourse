#include <iostream>


namespace mstd {
    std::size_t strlen (const char *str) {

        std::size_t counter = 0;

        while (str[++counter]);

        return counter;
    }

    int strcmp (const char *str1, const char *str2) {
        if (strlen(str1) < strlen(str2)) return -1;
        if (strlen(str1) > strlen(str2)) return 1;

        for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
            if (str1[i] == str2[i]) continue;

            if (str1[i] > str2[i]) return 1;
            else if (str1[i] < str2[i]) return -1;
        }
        return 0;
    }

    char * strcpy (char * destination, const char * source) {
        char *temp = destination;
        while((*destination++ = *source++) != '\0');
        return temp;
    }

    char * strcat (char * destination, const char * source) {
        char * strcated = destination;

        while (*destination) { destination++; }
        while (*source) { *destination++ = *source++; }

        return strcated;
    }

    template<typename T>
    T * realloc (T*& ptr, std::size_t prev_size, std::size_t new_size) {

        T * temp = new T[new_size];
        std::memcpy(temp, ptr, sizeof(ptr[0]) * std::min(prev_size, new_size));

        std::swap (temp, ptr);
        delete[] temp;

        return ptr;
    }
}