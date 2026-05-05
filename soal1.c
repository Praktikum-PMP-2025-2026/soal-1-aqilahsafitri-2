/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : Dynamic Structures
 *   Hari dan Tanggal    : Selasa, 5 Mei 2026
 *   Nama (NIM)          : Aqilah Safitri Sjarif (13224050)
 *   Nama File           : soal2.c
 *   Deskripsi           : Mengecek validitas segel 
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #define bool int

struct segel {
    char s;
    struct segel* next;
};
int pop(struct segel** head){
    char res;
    struct segel* top;
    if (*head == NULL){
        exit(0);
    }
    else {
        top = *head;
        res = top->s;
        free(top);
        return res;
    }}

bool sama(char c1, char c2){
    if (c1 == '(' && c2 == ')')
    return 1;
    else if (c1 == '{' && c2 == '}') return 1;
    else if (c1 == '[' && c2 == ']') return 1;
    else return 0;
}

int main() {
char data[100];
scanf("%s", data);
int i =0;
struct segel* stack = NULL;
    while (data[i] != '(' || data[i] != '{' data[i] != '['){
        pop(&stack, data[i]);
        if (data[i] == '(' || data[i]== '{' data[i]== '['){
            if (stack == NULL)
                return 0;
            else if(sama(pop(&stack), data[i]))
                return 0;}
        i++;
    }
    if(stack = NULL){
    printf("VALID");}
    else printf ("INVALID");
    return 0;
}
