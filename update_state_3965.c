/* File: "update_state_3965.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3962",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3962[0]);
*/
SBool update_state_3965(const SBool *queue_3962,
                        const SWord32 ptr_3962)
{
  const SBool   s0 = queue_3962[0];
  return s0;
}
