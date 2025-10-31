#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct list
{
    char name[12];
    int numberList;
};

int main()
{
    struct list person1;
    struct list person2;

    strcpy(person1.name, "Raul");
    person1.numberList = 5;

    strcpy(person2.name, "Prove");
    person2.numberList = 30;

    printf("%s\n",person1.name);
    printf("%d\n",person1.numberList);

    printf("%s\n",person2.name);
    printf("%d\n",person2.numberList);

}