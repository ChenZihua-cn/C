# include<stdio.h>
# include<iostream>

using namespace std;

int main(void){

    int age = 25;
    char name[] ="Alice";
    /*
    char character = "N";
    
    printf("%c",character,"ame: %s",name,"%d",65,"ge",": %d\n",age);
    非法的写法*/
    cout << "Name:" << name << "Age:" << age << endl;

    return 0;
}