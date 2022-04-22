#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

// help for creating a system call was watched from https://www.youtube.com/watch?v=21SVYiKhcwM
// other sources that we used 
// https://www.youtube.com/watch?v=Hl_t6BEBJko (video)
// https://gist.github.com/bridgesign/e932115f1d58c7e763e6e443500c6561 (documentation)


int main(int argc, char* argv[]){
    if(argc<2){ // if no reset flag given
       getCount(); 
    }
    else if(strcmp(argv[1],"-r") == 0){
        resetCount(); // if reset flag given, reseting the count
    }
    
    exit();
}
