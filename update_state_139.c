/* File: "update_state_139.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 136",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_136[0]);
*/
SBool update_state_139(const SBool *queue_136,
                       const SWord32 ptr_136)
{
  const SBool   s0 = queue_136[0];
  return s0;
}
