#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>
#include "input.h"
#include "output.h"

/*
 * - stdin identifies the standard input of the program and is normally associated
 * with the terminal window. All standard I/O functions that perform input and do not take
 * a file pointer as an argument get their input from stdin.
 * - stdout refers to the standard output, which is normally also associated with the terminal window.
 * - stderr identifies the standard error file
 * where the most of the error messages produced by the system are written and is 
 * also normally associated with the terminal window.
 * */
 
/*
 * fgets is used for reading entire lines of data from a file/stream (file get string)
 * WHEN THIS LINE DO NOT CONTAIN NULL CHARACTER!
 * has similat behavior to gets. Accept two additionnal arguments
 * 1) The number of characters to read
 * 2) An input stream (when specified as stdin, same behavior as gets())
 * char *fgets(char *buffer, int n, FILE*stream)
 * a) buffer is a pointer to a character array where the line that is read in will be stored
 * b) n is an integer value that represents the maximum number of characters to be stored into buffer, including the NULL character
 * c) stream is the pointer to object that identifies the stream where characters are read from
 * usually used with a file stream, however, standard input stream is also acceptable
 * 
 * UNRELIABLE: gets,fgets,scanf
 * BETTER TO USE: getline()
 * example: ssize_t getline(char **buffer, size_t *size, FILE *stream);
 */
 
 /*
  * puts function
  * The puts function is used to write a line to the output screen.
  * The most convenient function for printing a simple message on standard output
  * Automatically appends a newline.
  * 
  * It is simpler than printf, since you do not need to include a newline character
  * 
  * The puts function is safe and simple, but not very flexible as it does not give us an option of formatting
  * our string
  * 
  * int puts(const char *string)
  */
  
  /*
   * fputs function => same as puts but with a parameter to the file
   */
   
   /*
    * Formatting functions
    * 
    * sprintf: it is used to write formatted output to a string
    * when using sprintf(), you can combine several data variables into a character array
    * instead of printing on the console, you store output to a char buffer (convert)
    * 
    * int sprintf(char *string, const char *format,...)
    * sprintf(string, "%d%c%f", value,c,flt);
    * 
    * IT IS UNSAFE because it doesn't check the length of the destination buffer.
    * overflow can lead to unexpected results
    */
    
    /*
     * fprintf: is provided to perform the same operation as printf(), but, on a file
     * It takes an additionnal argument: the file pointer that identifies the file to
     * wich the data is to be written to.
     * 
     * int fprintf(FILE *stream,const char *format, ...)
     * 
     * example: fprintf(outFile,"my number is %d\n",555);
     * 
     * fprintf and stderr: The reason stderr exists is so that error messages can be logged to a
     * device or file other than where the normal output is written
     * particularly desirable when the program's output is redirected to a file
     * 
     * The normal output is written into the file, but, any system arror messages still appear in
     * your window
     * 
     * You might want to write your own error message to stderr for this reason
     * if((inFile = fopen("data","r"))==NULL)
     * {
     *  fprintf(stderr,"Can't open data for reading.\n");
     * }
     */
     
     /*
      * fscanf: is provided to perform the same operations as scanf() function, but, on a file
      * used to read formatted input (set of characters) from a file
      * most of the arguments of this function are the same as scanf() function
      * takes an additionnal argument, which is the FILE pointer that identifies the file to wich
      * the data is to be read.
      * 
      * int fscanf(FILE *fp, const char *format [,argument,...]);
      * 
      * example: fscanf(myFile,"%i",&i);
      * reads in the next integer value from the file "myFile" and stores it in the variable i
      */
      
      /*
       * sscanf function: allows you to read formatted data from a string rather than standard input or keyboard
       * int sscanf(const char *str, const char *control_string[arg_1, arg_2, ...]);
       * returns the number of items read from the string and -1 if an error is encountered
       */
       
       /*
        * fflush: The fflush() function is used to flush/clean a file or buffer
        * causes any unwritten data in the output buffer to be sent to the output file
        * this process is called flushing a buffer
        * cleans the buffer (making empty) if it has been loaded with any other data already
        * 
        * int fflush(File *fp)
        * fflush(buffer);
        * 
        * buffer is a temporary variable or pointer which loads/points to the data
        * If the file is a null pointer, all output buffers are flushed
        * 
        * The effect of using fflush() on an input stream is undefined.
        * 
        * You can use it with an update stream (any of the read/write modes), provided that the most recent
        * operation using the stream was not input
        */

int main(int argc, char **argv)
{
    /*Read input file*/
    //inputRead(argc,argv);
    /*Write output file*/
    //outputWrite();
    
    /******************
     * getline example 1
     ******************/
    char *buffer = NULL;
    size_t bufsize = 32;
    size_t characters;
    buffer = (char *)malloc(bufsize * sizeof(char));
    if(buffer == NULL)
    {
        exit(1);
    }
    printf("Type something: ");
    characters = getline(&buffer,&bufsize,stdin);
    
    printf("%zu characters were read.\n", characters);
    printf("You typed: '%s'\n", buffer);
    
    /*****************
     * getline example 2
     ********************/
    char buffer2[32];
    char *b = buffer2;
    size_t bufsize2 = 32;
    size_t characters2;
    
    printf("Type something: ");
    characters2 = getline(&b,&bufsize2,stdin);
    
    printf("%zu characters were read.\n", characters2);
    printf("You typed: '%s'\n", buffer2);
    
    /*****************
     * puts example 1
     ********************/
    char string[40];
    strcpy(string,"Hello, how are you");
    puts(string);
    
    /*****************
     * puts example 2
     ********************/
    FILE *fp = NULL;
    fp = fopen("somefile.txt","w");
    
    if(fp == NULL)
    {
        exit(1);
    }
    
    fputs("Hello there",fp);
    fclose(fp);
    
    /*****************
     * sprintf example 1
     ********************/
     char string2[100];
     int w1=10, w2=20, w3=0;
     w3=w1+w2;
     sprintf(string2, "Sum of %d and %d is %d",w1,w2,w3);
     puts(string2);
     
     
     return 0;
}
