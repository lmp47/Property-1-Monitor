/* File: "update_state_902.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 899",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_899[0]);
*/
SBool update_state_902(const SBool *queue_899,
                       const SWord32 ptr_899)
{
  const SBool   s0 = queue_899[0];
  return s0;
}
