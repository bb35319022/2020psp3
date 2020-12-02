#include <stdio.h>

#define DEBUG

#define ALPHABET_LEN    255

char StrOriginal[] = "On a dark deseart highway, cool wind in my hair.";
char StrKey[] = "wind";

char* ForceSearch(char text[], char key[])
{
    //  ここを実装する
    char text_len = length(text);
    char key_len = length(key);

    int i = 0;
    int j = 0;
        while(i <= text_len && j < key_len){
             if(text[i + j] == key[j]){
                 i++;
                 j++; 
            }else{
                 i = i - j + 1;
                 j = 0;
             }
         }

    return 0;
   
   



}

char* BMSearch(char text[], char key[])
{
    //  ここを実装する

}

int main(void)
{
    char*   str;
    str = ForceSearch(StrOriginal, StrKey);
    printf("Force Search. Find keyword at:%s\n", str);

    str = BMSearch(StrOriginal, StrKey);
    printf("BM Search. Find keyword at:%s\n", str);

    return 0;
}