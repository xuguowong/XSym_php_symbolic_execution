#include "stdio.h"
#include "phli.h"
void set_swap(int);
int main(int argc, char* argv[]) {
char *result_dir="/data/phli/results/set_swap/";
long* arg_0=phli_create_long("arg_0");
set_swap(*arg_0);
}