/* File: "update_state_29.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 26",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_26[0]);
*/
SBool update_state_29(const SBool *queue_26, const SWord32 ptr_26)
{
  const SBool   s0 = queue_26[0];
  return s0;
}
