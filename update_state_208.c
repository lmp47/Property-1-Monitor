/* File: "update_state_208.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 205",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_205[0]);
*/
SBool update_state_208(const SBool *queue_205,
                       const SWord32 ptr_205)
{
  const SBool   s0 = queue_205[0];
  return s0;
}
