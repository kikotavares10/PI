int comprimento(char *str){
    int i = 0;
    while (*str != '\0'){
        i++;
        str++;
    }
    return i;
}

void inverter(char *str){
    int i = 0, j = comprimento(str);
    while (i < j){
        char ch = *(str+i);
        *(str+i) = *(str+j);
        *(str+j) = ch;
        i++;
        j--;
    }
}