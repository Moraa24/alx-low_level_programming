int _putchar(char c);

int main(void) {
    char str[] = "_putchar\n";

    for (int i = 0; str[i] != '\0'; i++) {
        _putchar(str[i]);
    }

    return 0;
}

int _putchar(char c) {
    // Code to output the character 'c'
    // You would need to replace this with the actual mechanism
    // for outputting a character in your environment
    return c; // Return the character as an integer
}
