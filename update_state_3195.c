/* File: "update_state_3195.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3192",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3192[0]);
*/
SInt64 update_state_3195(const SInt64 *queue_3192,
                         const SWord32 ptr_3192)
{
  const SInt64  s0 = queue_3192[0];
  return s0;
}
