

#include <stdio.h>


int foo();

int main(int argc, char *argv[]){
	
	
	for (int i = 0 ; i < 10 ; i++)
	    foo();
	    
return 0;
}

int foo(){
    
    static int count = 1;
    printf("%d " , count++);
    
}