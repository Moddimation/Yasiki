/*
 * Define _INLINE to be a weak symbol. This is used by
 * cmath so that the symbols will be defined inside
 * MSL, as well as being available as an inline for the
 * user. Also see ctype.c for another example of this
 * sw 010918
 */

#undef _INLINE
#define _INLINE WEAKFUNC
#include <math.h>

/*
 * This file replaces all the calls to the single
 * precision functions with their inline counterparts
 * in <cmath>, and <math_ppc.h>
 * By using the _INLINE and WEAKFUNC method
 * above, it allows the user needing the symbol to be
 * defined from previous builds to still get that symbol
 * Users rebuilding, will pick up the inline version.
 * The symbol is only weakly defined in MSL.
 * sw 010918
 */
