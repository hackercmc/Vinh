//main.c
case 2: 
reverseString;
     char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    break;

//function.c
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

//function.h
void reverseString(char str[]);