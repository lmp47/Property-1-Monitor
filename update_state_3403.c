/* File: "update_state_3403.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3400",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3400[0]);
*/
SBool update_state_3403(const SBool *queue_3400,
                        const SWord32 ptr_3400)
{
  const SBool   s0 = queue_3400[0];
  return s0;
}
