/* File: "update_state_3902.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3899",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3899[0]);
*/
SBool update_state_3902(const SBool *queue_3899,
                        const SWord32 ptr_3899)
{
  const SBool   s0 = queue_3899[0];
  return s0;
}