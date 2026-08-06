#include "mstring.h"

int mstrlen(char s[]) {
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

void mstrcpy(char dest[], char orig[]) {
    int i = 0;
    while(orig[i] != '\0') {
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0';
}

void mstrcat(char dest[], char orig[]) {
    int i = mstrlen(dest);
    int j = 0;
    while(orig[j] != '\0') {
        dest[i] = orig[j];
        i++; j++;
    }
    dest[i] = '\0';
}

int mstrcmp(char a[], char b[]) {
    int i = 0;
    while(a[i] != '\0' && b[i] != '\0') {
        if(a[i] != b[i]) return a[i] - b[i];
        i++;
    }
    return a[i] - b[i];
}

void mstrupper(char s[]) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }
}

void mstrlower(char s[]) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
}

int mcount_vogais(char s[]) {
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int meh_palindromo(char s[]) {
    int len = mstrlen(s);
    for(int i = 0; i < len / 2; i++) {
        if(s[i] != s[len - 1 - i]) return 0;
    }
    return 1;
}

void mremove_espacos(char s[]) {
    int i = 0, j = 0;
    while(s[i] != '\0') {
        if(s[i] != ' ') {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
}