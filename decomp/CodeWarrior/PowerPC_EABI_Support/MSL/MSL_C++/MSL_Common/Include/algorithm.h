/* Metrowerks Standard Library
 * Copyright ÃÂ¯ÃÂ½C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/03/08 20:52:40 $
 * $Revision: 1.13 $
 */

// algorithm.h          hh 971206 filename changed from algorithm

#ifndef _ALGORITHM_H              // hh 971206 include guards added
#    define _ALGORITHM_H

#    include <algorithm>

#    ifndef _MSL_NO_CPP_NAMESPACE // hh 971206 backward compatibility

#        ifdef min
#            undef min
#        endif

#        ifdef max
#            undef max
#        endif

using std::adjacent_find;
using std::binary_search;
using std::copy;
using std::copy_backward;
using std::count;
using std::count_if;
using std::equal;
using std::equal_range;
using std::fill;
using std::fill_n;
using std::find;
using std::find_end;
using std::find_first_of;
using std::find_if;
using std::for_each;
using std::generate;
using std::generate_n;
using std::includes;
using std::inplace_merge;
using std::iter_swap;
using std::lexicographical_compare;
using std::lower_bound;
using std::make_heap;
using std::max;
using std::max_element;
using std::merge;
using std::min;
using std::min_element;
using std::mismatch;
using std::next_permutation;
using std::nth_element;
using std::partial_sort;
using std::partial_sort_copy;
using std::partition;
using std::pop_heap;
using std::prev_permutation;
using std::push_heap;
using std::random_shuffle;
using std::remove;
using std::remove_copy;
using std::remove_copy_if;
using std::remove_if;
using std::replace;
using std::replace_copy;
using std::replace_copy_if;
using std::replace_if;
using std::reverse;
using std::reverse_copy;
using std::rotate;
using std::rotate_copy;
using std::search;
using std::search_n;
using std::set_difference;
using std::set_intersection;
using std::set_symmetric_difference;
using std::set_union;
using std::sort;
using std::sort_heap;
using std::stable_partition;
using std::stable_sort;
using std::swap;
using std::swap_ranges;
using std::transform;
using std::unique;
using std::unique_copy;
using std::upper_bound;
#    endif

#endif                            // _ALGORITHM_H

// hh 971206 filename changed from algorithm to algorithm.h
// hh 971206 include guards added
// hh 971206 backward compatibility "using" added
// hh 990120 changed namespace flag name
// hh 991112 modified using policy
// hh 010301 Protected min and max from macro abuse.
