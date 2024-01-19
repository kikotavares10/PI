void eliminar(char str[], char ch){
    int i=0,j=0;
    while (str[i]!=ch && str[i]!='\0'){
        str[j]=str[i];
        i++;j++;
    }
    if (str[i]!='\0'){
        i++;
        while (str[i]!= '\0'){
            str[j]=str[i];
            i++;j++;
        }
    }
    str[j]='\0';
}