#include "stdio.h"
#include "phli.h"
char* _php3_escapeshellcmd(char*);
int main(int argc, char* argv[]) {
char *result_dir="/data/phli/results/_php3_escapeshellcmd/";
char* arg_0=phli_create_char_array("arg_0");
char* result;
result=_php3_escapeshellcmd(arg_0);
}