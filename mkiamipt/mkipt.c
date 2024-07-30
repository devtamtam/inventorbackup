#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){


    if(argc!=1||argc!=2){
        printf("Usage:mkipt filename" );
    }
    else if (argc==2){
    {
        // argv[1] is the new filename --> argv[1].ipt   
        // ask destination directory  to copy the delautfile.ipt to
        system("copy "C:\Command\mkiamipt\defaltfiles\default.ipt"  DestinationPath\argv[1] ");// 
    }

    else if (argc==1){
        // ask filename
        //ask destination directory
        system("copy "C:\Command\...." DestinationPath\newfilename");//


    }
    
    printf("new file is created to "the path"");

    return 0;
}