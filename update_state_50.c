/* File: "update_state_50.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 47",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_47[0]);
*/
SBool update_state_50(const SBool *queue_47, const SWord32 ptr_47)
{
  const SBool   s0 = queue_47[0];
  return s0;
}
