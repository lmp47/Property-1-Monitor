/* File: "update_state_3377.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3374",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3374[0]);
*/
SBool update_state_3377(const SBool *queue_3374,
                        const SWord32 ptr_3374)
{
  const SBool   s0 = queue_3374[0];
  return s0;
}
