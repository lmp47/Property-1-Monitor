/* File: "update_state_584.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 581",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_581[0]);
*/
SBool update_state_584(const SBool *queue_581,
                       const SWord32 ptr_581)
{
  const SBool   s0 = queue_581[0];
  return s0;
}
