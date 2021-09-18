#include<iostream>
using namespace std;

// method-1....
// void trim(char name[]){
//     // int len=o;
//     // for(;name[len]!='\0';len++);
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         if(name[i]!=' '){
//              name[count]=name[i];
//              count++;
//         }
//     }
//     name[count]='\0';
// }

// method-2.......
void trim(char input[]){
    int count=0,i=0;
    for(;input[i]!='\0';){
        if(input[i]!=' '){
            input[count]=input[i];
            count++;i++;
        }else{
            for(i=i+1;input[i]!='\0';i++){
                if(input[i]!=' '){
                    input[count]=input[i];
                    input[i]=' ';
                    i++;
                    count++;
                    break;
                }
            }
        }
    }
    input[count]='\0';
}

int main(){
    char name[50];
    cin.getline(name,50);
    trim(name);
    for(int i=0;name[i]!='\0';i++){
        cout<<name[i];
    }
}