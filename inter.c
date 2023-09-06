int main(int argc, char *argv[]) {
    if (argc != 3) {
        write(1, "\n", 1);
        return 0;
    }

    char *str1 = argv[1];
    char *str2 = argv[2];
    char seen[256] = {0}; // Static array with a fixed size (assuming ASCII characters)

    while (*str1) {
        if (!seen[(unsigned char)*str1] && strchr(str2, *str1)) {
            write(1, str1, 1);
            seen[(unsigned char)*str1] = 1; // Mark the character as seen
        }
        str1++;
    }

    write(1, "\n", 1);
    return 0;
}
