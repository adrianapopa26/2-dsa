//
// Created by bindi on 3/9/2020.
//
#include <stdio.h>
#include <string.h>
#include "list.h"
void readCommand(char* buffer, int x, FILE *output){
    if(strcmp(buffer,"AF")==0){
        addFirst(x);
    } else if(strcmp(buffer,"AL")==0){
        addLast(x);
    }else if(strcmp(buffer,"DF")==0){
        deleteFirst();
    }else if(strcmp(buffer,"DL")==0){
        deleteLast();
    }else if(strcmp(buffer,"DOOM_THE_LIST")==0){
        doomTheList();
    }else if(strcmp(buffer,"DE")==0){
        deleteElement(x);
    }else if(strcmp(buffer,"PRINT_ALL")==0){
        printAll(output);
    }else if(strcmp(buffer,"PRINT_F")==0){
        printFirst(output,x);
    }else if(strcmp(buffer,"PRINT_L")==0){
        printLast(output,x);
    } else {
        printf("Warning! Erroneous command detected!(Probably a newline)\n");
    }
}