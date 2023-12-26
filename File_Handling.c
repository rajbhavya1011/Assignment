#include <stdio.h>

// Define a simple struct for demonstration
typedef struct {
    int id;
    char name[50];
} Data;

// Simple function to calculate a checksum
int checksum(char *s) {
    int sum = 0;
    while (*s) {
        sum += *s++;
    }
    return sum;
}

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // 1. Write a line about myself
    fprintf(file, "This is Bhavya Raj.\n");

    // 2. Write the struct data to file
    Data d = {1, "Bhavya"};
    fprintf(file, "Data: {id: %d, name: %s}\n", d.id, d.name);

    // 3. Append file data with file CheckSum
    int cs = checksum("This is Bhavya Raj.");
    fprintf(file, "Checksum: %d\n", cs);

    // 4. Append table of numbers in the file from 2-50
    for (int i = 2; i <= 50; i++) {
        fprintf(file, "%d\n", i);
    }

    fclose(file);

    return 0;
}
