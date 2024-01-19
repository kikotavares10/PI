int contar_espacos(char *str){
    int espacos = 0;
    while (*str != '\0'){
        if (*str == ' ') espacos++;
        str++;
    }
    return espacos;
}