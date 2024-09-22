#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>

int main(int argc,char** argv){
    if(fork()==0){
        write(1,"Hello ",6);
        exit(0);
    } else {
        wait(0);
        write(1,"world\n",6);
        return 0;
    }
}