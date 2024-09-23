#include<unistd.h>
#include<fcntl.h>

int main(int argc,char**argv){
    char *args[2];
    args[0] = "cat";
    args[1] = 0;
    if(fork()==0){
        close(0);
        open("input.txt",O_RDONLY);
        execvp("cat",args);
    }
}
