/* File: "update_state_40.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 37",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_37[0]);
*/
SBool update_state_40(const SBool *queue_37, const SWord32 ptr_37)
{
  const SBool   s0 = queue_37[0];
  return s0;
}
