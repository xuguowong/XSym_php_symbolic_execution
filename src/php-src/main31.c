#include <stdio.h>
#include "phli.h"
void php3_addslashes(INTERNAL_FUNCTION_PARAMETERS);
int main(int argc, char *argv[]) { 
	char *result_dir = "/data/phli/results/php3_addslashes";
    HashTable *ht;
    pval *return_value = phli_construct_pval_string("arg_1");
    HashTable *list;
    HashTable *plist;
    php3_addslashes(ht, return_value, list, plist);
    phli_print_string(return_value->value.str.val, return_value->value.str.len, result_dir);

}
