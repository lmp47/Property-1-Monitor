/* File: "update_state_3926.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3923",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3923[0]);
*/
SBool update_state_3926(const SBool *queue_3923,
                        const SWord32 ptr_3923)
{
  const SBool   s0 = queue_3923[0];
  return s0;
}
