#include<unistd.h>

int main(int argc,char**args){
	int fd = dup(1);
	write(1,"hello ",6);
	write(fd,"world\n",6);
	return 0;
}
