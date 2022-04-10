#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int main(int argc, char* argv[]){
    if(argc<2){
       getCount(); 
    }
    else if(strcmp(argv[1],"-r") == 0){
        resetCount();
    }
    
    exit();
}