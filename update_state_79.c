/* File: "update_state_79.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 76",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_76[0]);
*/
SBool update_state_79(const SBool *queue_76, const SWord32 ptr_76)
{
  const SBool   s0 = queue_76[0];
  return s0;
}
