/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2018 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_yangmiyuwo.h"

/* If you declare any globals in php_yangmiyuwo.h uncomment this:
ZEND_DECLARE_MODULE_GLOBALS(yangmiyuwo)
*/

/* True global resources - no need for thread safety here */
static int le_yangmiyuwo;

ZEND_BEGIN_ARG_INFO(arginfo_maiev,0)
	ZEND_ARG_INFO(0,scale)
ZEND_END_ARG_INFO()

/* {{{ PHP_INI
 */
/* Remove comments and fill if you need to have entries in php.ini
PHP_INI_BEGIN()
    STD_PHP_INI_ENTRY("yangmiyuwo.global_value",      "42", PHP_INI_ALL, OnUpdateLong, global_value, zend_yangmiyuwo_globals, yangmiyuwo_globals)
    STD_PHP_INI_ENTRY("yangmiyuwo.global_string", "foobar", PHP_INI_ALL, OnUpdateString, global_string, zend_yangmiyuwo_globals, yangmiyuwo_globals)
PHP_INI_END()
*/
/* }}} */

PHP_FUNCTION(maiev)
{
	zend_long new_scale;
	ZEND_PARSE_PARAMETERS_START(1,1)
		Z_PARAM_LONG(new_scale)
	ZEND_PARSE_PARAMETERS_END();

	RETVAL_LONG(new_scale);
}

/* Remove the following function when you have successfully modified config.m4
   so that your module can be compiled into PHP, it exists only for testing
   purposes. */

/* Every user-visible function in PHP should document itself in the source */
/* {{{ proto string confirm_yangmiyuwo_compiled(string arg)
   Return a string to confirm that the module is compiled in */
PHP_FUNCTION(confirm_yangmiyuwo_compiled)
{
	char *arg = NULL;
	size_t arg_len, len;
	zend_string *strg;

	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &arg, &arg_len) == FAILURE) {
		return;
	}

	strg = strpprintf(0, "Congratulations! You have successfully modified ext/%.78s/config.m4. Module %.78s is now compiled into PHP.", "yangmiyuwo", arg);

	RETURN_STR(strg);
}
/* }}} */
/* The previous line is meant for vim and emacs, so it can correctly fold and
   unfold functions in source code. See the corresponding marks just before
   function definition, where the functions purpose is also documented. Please
   follow this convention for the convenience of others editing your code.
*/


/* {{{ php_yangmiyuwo_init_globals
 */
/* Uncomment this function if you have INI entries
static void php_yangmiyuwo_init_globals(zend_yangmiyuwo_globals *yangmiyuwo_globals)
{
	yangmiyuwo_globals->global_value = 0;
	yangmiyuwo_globals->global_string = NULL;
}
*/
/* }}} */

/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(yangmiyuwo)
{
	/* If you have INI entries, uncomment these lines
	REGISTER_INI_ENTRIES();
	*/
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(yangmiyuwo)
{
	/* uncomment this line if you have INI entries
	UNREGISTER_INI_ENTRIES();
	*/
	return SUCCESS;
}
/* }}} */

/* Remove if there's nothing to do at request start */
/* {{{ PHP_RINIT_FUNCTION
 */
PHP_RINIT_FUNCTION(yangmiyuwo)
{
#if defined(COMPILE_DL_YANGMIYUWO) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	return SUCCESS;
}
/* }}} */

/* Remove if there's nothing to do at request end */
/* {{{ PHP_RSHUTDOWN_FUNCTION
 */
PHP_RSHUTDOWN_FUNCTION(yangmiyuwo)
{
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(yangmiyuwo)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "yangmiyuwo support", "enabled");
	php_info_print_table_end();

	/* Remove comments if you have entries in php.ini
	DISPLAY_INI_ENTRIES();
	*/
}
<<<<<<< HEAD

=======
>>>>>>> 082fd2ea121ad885a75e76a32b2375033d759d43
/* }}} */

/* {{{ yangmiyuwo_functions[]
 *
 * Every user visible function must have an entry in yangmiyuwo_functions[].
 */
const zend_function_entry yangmiyuwo_functions[] = {
	PHP_FE(confirm_yangmiyuwo_compiled,	NULL)		/* For testing, remove later. */
<<<<<<< HEAD
	PHP_FE(maiev,	arginfo_maiev)		/* For testing, remove later. */
=======
>>>>>>> 082fd2ea121ad885a75e76a32b2375033d759d43
	PHP_FE_END	/* Must be the last line in yangmiyuwo_functions[] */
};
/* }}} */

<<<<<<< HEAD

=======
>>>>>>> 082fd2ea121ad885a75e76a32b2375033d759d43
/* {{{ yangmiyuwo_module_entry
 */
zend_module_entry yangmiyuwo_module_entry = {
	STANDARD_MODULE_HEADER,
	"yangmiyuwo",
	yangmiyuwo_functions,
	PHP_MINIT(yangmiyuwo),
	PHP_MSHUTDOWN(yangmiyuwo),
	PHP_RINIT(yangmiyuwo),		/* Replace with NULL if there's nothing to do at request start */
	PHP_RSHUTDOWN(yangmiyuwo),	/* Replace with NULL if there's nothing to do at request end */
	PHP_MINFO(yangmiyuwo),
	PHP_YANGMIYUWO_VERSION,
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_YANGMIYUWO
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(yangmiyuwo)
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
