/* File: "update_state_670.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 667",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_667[0]);
*/
SBool update_state_670(const SBool *queue_667,
                       const SWord32 ptr_667)
{
  const SBool   s0 = queue_667[0];
  return s0;
}
