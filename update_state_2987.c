/* File: "update_state_2987.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2984",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2984[0]);
*/
SBool update_state_2987(const SBool *queue_2984,
                        const SWord32 ptr_2984)
{
  const SBool   s0 = queue_2984[0];
  return s0;
}
