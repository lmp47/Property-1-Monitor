/* File: "update_state_590.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 587",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_587[0]);
*/
SBool update_state_590(const SBool *queue_587,
                       const SWord32 ptr_587)
{
  const SBool   s0 = queue_587[0];
  return s0;
}
