/* File: "update_state_3281.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3278",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3278[0]);
*/
SBool update_state_3281(const SBool *queue_3278,
                        const SWord32 ptr_3278)
{
  const SBool   s0 = queue_3278[0];
  return s0;
}
