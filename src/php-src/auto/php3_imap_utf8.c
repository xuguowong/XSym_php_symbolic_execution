#include "stdio.h"
#include "phli.h"
void php3_imap_utf8(INTERNAL_FUNCTION_PARAMETERS);
int main(int argc, char* argv[]) {
char *result_dir="/data/phli/results/php3_imap_utf8/";
HashTable *ht;
HashTable *list;
HashTable *plist;
pval *return_value=phli_construct_pval_string("arg_1");
php3_imap_utf8(ht, return_value, list, plist);
}