#include "stdio.h"
#include "phli.h"
void php3_posix_setuid(INTERNAL_FUNCTION_PARAMETERS);
int main(int argc, char* argv[]) {
char *result_dir="/data/phli/results/php3_posix_setuid/";
HashTable *ht;
HashTable *list;
HashTable *plist;
pval *return_value=phli_construct_pval_string("arg_1");
php3_posix_setuid(ht, return_value, list, plist);
}