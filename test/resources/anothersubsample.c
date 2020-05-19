/* Generated by           cobc 3.1-dev.0 */
/* Generated from         anothersubsample.cbl */
/* Generated at           May 13 2020 22:42:08 */
/* GnuCOBOL build date    Apr 28 2020 22:46:23 */
/* GnuCOBOL package date  Apr 28 2020 12:55:27 UTC */
/* Compile command        cobc -C anothersample.cbl anothersubsample.cbl */

#include <stdio.h>
#include <string.h>
#define  COB_KEYWORD_INLINE __inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"anothersubsample.cbl"
#define  COB_PACKAGE_VERSION		"3.1-dev"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"May 13 2020 22:42:08"
#define  COB_MODULE_DATE		20200513
#define  COB_MODULE_TIME		224208

/* Global variables */
#include "anothersubsample.c.h"

/* Function prototypes */

int		anothersubsample (cob_u8_t *);
static int		anothersubsample_ (const int, cob_u8_t *);
static void		anothersubsample_module_init (cob_module *module);

/* Functions */

/* PROGRAM-ID 'anothersubsample' */

/* ENTRY 'anothersubsample' */

int
anothersubsample (cob_u8_t *b_8)
{
  /* Get current number of call parameters,
     if the parameter count is unknown, set it to all */
  if (cob_get_global_ptr ()->cob_current_module) {
  	cob_call_params = cob_get_global_ptr ()->cob_call_params;
  } else {
  	cob_call_params = 1;
  };

  return anothersubsample_ (0, b_8);
}

static int
anothersubsample_ (const int entry, cob_u8_t *b_8)
{
  /* Program local variables */
  #include "anothersubsample.c.l.h"

  /* Start of function code */

  /* CANCEL callback */
  if (unlikely(entry < 0)) {
  	if (entry == -10)
  		goto P_dump;
  	if (entry == -20)
  		goto P_clear_decimal;
  	goto P_cancel;
  }

  /* Check initialized, check module allocated, */
  /* set global pointer, */
  /* push module stack, save call parameter count */
  if (cob_module_global_enter (&module, &cob_glob_ptr, 0, entry, 0))
  	return -1;

  /* Set address of module parameter list */
  module->cob_procedure_params = cob_procedure_params;

  /* Set frame stack pointer */
  frame_ptr = frame_stack;
  frame_ptr->perform_through = 0;
  frame_ptr->return_address_ptr = &&P_cgerror;

  /* Initialize rest of program */
  if (unlikely(initialized == 0)) {
  	goto P_initialize;
  }
  P_ret_initialize:

  /* Increment module active */
  module->module_active++;

  /* Set not passed parameter pointers to NULL */
  switch (cob_call_params) {
  case 0:
  	b_8 = NULL;
  /* Fall through */
  default:
  	break; 
  }

  /* Initialize ANY LENGTH parameters */
  if (cob_call_params > 0 && module->next && module->next->cob_procedure_params[0])
    f_8.size = module->next->cob_procedure_params[0]->size;
  f_8.data = b_8;
  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 8         : Entry     anothersubsample        : anothersubsample.cbl */
  l_2:;

  /* Line: 9         : DISPLAY            : anothersubsample.cbl */
  cob_display (0, 1, 1, COB_SET_DATA (f_8, b_8));

  /* Program exit */

  /* Decrement module active count */
  if (module->module_active) {
  	module->module_active--;
  }

  /* Pop module stack */
  cob_module_leave (module);

  /* Program return */
  return b_2;
  P_cgerror:
  	cob_fatal_error (COB_FERROR_CODEGEN);


  /* Program initialization */
  P_initialize:

  cob_check_version (COB_SOURCE_FILE, COB_PACKAGE_VERSION, COB_PATCH_LEVEL);

  anothersubsample_module_init (module);

  module->crt_status = NULL;

  /* Initialize cancel callback */
  cob_set_cancel (module);

  /* Initialize WORKING-STORAGE */
  b_2 = 0;

  if (0 == 1) goto P_cgerror;
  initialized = 1;
  goto P_ret_initialize;

  P_dump:
  return 0;


  /* CANCEL callback handling */
  P_cancel:

  if (!initialized)
  	return 0;
  if (module && module->module_active)
  	cob_fatal_error (COB_FERROR_CANCEL);

  b_2 = 0;
  cob_module_free (&module);

  initialized = 0;

  P_clear_decimal:

  return 0;

}

/* End PROGRAM-ID 'anothersubsample' */

/* Initialize module structure for anothersubsample */
static void anothersubsample_module_init (cob_module *module)
{
  module->module_name = "anothersubsample";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())anothersubsample;
  module->module_cancel.funcptr = (void *(*)())anothersubsample_;
  module->module_ref_count = NULL;
  module->module_path = &cob_module_path;
  module->module_active = 0;
  module->module_date = COB_MODULE_DATE;
  module->module_time = COB_MODULE_TIME;
  module->module_type = 0;
  module->module_param_cnt = 1;
  module->ebcdic_sign = 0;
  module->decimal_point = '.';
  module->currency_symbol = '$';
  module->numeric_separator = ',';
  module->flag_filename_mapping = 1;
  module->flag_binary_truncate = 1;
  module->flag_pretty_display = 1;
  module->flag_host_sign = 0;
  module->flag_no_phys_canc = 0;
  module->flag_main = 0;
  module->flag_fold_call = 0;
  module->flag_exit_program = 0;
  module->flag_debug_trace = 0;
  module->flag_dump_ready = 0;
  module->module_stmt = 0;
  module->module_sources = NULL;
}

/* End functions */
