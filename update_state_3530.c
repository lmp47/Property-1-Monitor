/* File: "update_state_3530.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3527",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3527[0]);
*/
SBool update_state_3530(const SBool *queue_3527,
                        const SWord32 ptr_3527)
{
  const SBool   s0 = queue_3527[0];
  return s0;
}
