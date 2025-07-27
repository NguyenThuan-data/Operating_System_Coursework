// Student Name: Thuan Nguyen 23194073

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

// Declare the ps_running function to prevent errors from using an undeclared function
int
main(int argc, char *argv[])
{
    if(argc == 1) {
        // If no arguments are given, call the ps() function to display all processes
        ps();
    } else if(argc == 2 && strcmp(argv[1], "-r") == 0) {
        // If the argument is "-r", call the ps_running() function to display only running processes
        ps_running();
    } else {
        // If any other argument is provided, show an error message
        printf("Wrong command option\n");
    }
    exit(0);
}
