/* File: "update_state_22.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 19",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_19[0]);
*/
SBool update_state_22(const SBool *queue_19, const SWord32 ptr_19)
{
  const SBool   s0 = queue_19[0];
  return s0;
}
