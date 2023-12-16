#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int getNumberOfLine(char * array, size_t lenght){
    int dig1;
    bool isInit = false;
    int dig2;
    for(size_t i = 0; i < lenght ; i++){
        if (isdigit(array[i])){
            if(!isInit){
                dig1 = array[i]-'0';
                isInit = true;
            }
            dig2 = array[i]-'0';

        }        
    }
    free(array);
    printf("%d, %d\n", dig1, dig2);
    return 10*dig1+dig2;
}

int main(){
int sum = 0;

while(!feof(stdin)){
    char * array;
    size_t bufsize = 0;
    size_t numOfChars = getline(&array, &bufsize, stdin);
    if(numOfChars==NULL){
        break;
    }
    sum += getNumberOfLine(array, numOfChars);

}
printf("%d\n", sum);
return EXIT_SUCCESS;
}