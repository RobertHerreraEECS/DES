#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "randomKeyGenerator.h"
#include "encrypt.h"
#include "decrypt.h"

int arguments(int argc,char *argv[]);
void displayCommands();



int main(int argc,char *argv[]){

int type = arguments(argc,argv);
printf("type %d\n",type);
switch(type){
   case 0:
   
   break;
   case 1:

   break;
   case 2:

   break;
   case 3:

   break;
   case 4:

   break;
   case 5:
   encryptUsingRandomKey();
   break;
   case 6:

   break;
   case 7:

   break;
   default:
   printf("Invalid Command.\n");
   return 0;

}

return 0;
}


int arguments(int argc,char *argv[]) {

if (argc < 2) {
 displayCommands();
 return 0;
}

if(strcmp(argv[1],"--genKey")==0) {
  printf("Randomized Key:\n");
  return 1;
}
else if(strcmp(argv[1],"-encrypt")==0) {



	if(strcmp(argv[2],"-k")==0) {

           printf("encrypt -k\n");
	
           if(strcmp(argv[3],"")==0 || strcmp(argv[3]," ")==0) {
		printf("No key provided.\n");
		displayCommands();
		return 0;
	   }

	   if(strcmp(argv[4],"-txt")==0) {
                 
		    printf("input text.txt file\n");

		    return 2;

		} else if(strcmp(argv[4],"-in")==0) {

		    printf("input text\n");

		    return 3;

		} else {
		   printf("Invalid Command.\n");
		   displayCommands();
		}

	} else if(strcmp(argv[2],"-rand")==0) {

           printf("encrypt -rand\n");

		if(strcmp(argv[3],"-txt")==0) {
                 
		    printf("input text.txt file\n");

		    return 4;

		} else if(strcmp(argv[3],"-in")==0) {

		    printf("input text\n");

	 	    return 5;

		} else {
		    printf("Invalid Command.\n");
		    displayCommands();
		}
	} else {
	    printf("Invalid Command\n");
	    displayCommands();
	    return 0;
	}



} else if(strcmp(argv[1],"-decrypt")==0) {


 	if(strcmp(argv[2],"-k")==0) {
          printf("decrypt -k\n");
 
	    if(strcmp(argv[3],"")==0 || strcmp(argv[3]," ")==0) {
		printf("No key provided.\n");
		displayCommands();
		return 0;
	   }
	   if(strcmp(argv[4],"-txt")==0) {
                 
		    printf("input text.txt file\n");

		    return 2;

	   } else if(strcmp(argv[4],"-in")==0) {

		    printf("input text\n");

		    return 3;

	   } else {
		   printf("Invalid Command.\n");
		   displayCommands();
        return 0;
	   }



	} else {
           printf("Invalid Command.\n");
	   displayCommands();
	   return 0;
	}

} else {
   printf("Invalid Command.\n");
   displayCommands();
   return 0;
}
    
    return 0;
    

} // end arguments



void displayCommands(){
 printf("Not enough arguments.\nform: ./des [-encrypt] [-k] [key] [-txt] [file_path]\n");
 printf("form: ./des [--genKey]\n");
 printf("form: ./des [-encrypt] [-k] [key] [-in] [terminal_input]\n");
 printf("form: ./des [-encrypt] [-rand] [-txt] [file_path]\n");
 printf("form: ./des [-encrypt] [-rand] [-in] [terminal_input]\n");
 printf("form: ./des [-decrypt] [-k] [key] [-in] [terminal_input]\n");
 printf("form: ./des [-decrypt] [-k] [key] [-txt] [file_path]\n");
}
