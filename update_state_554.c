/* File: "update_state_554.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 551",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_551[0]);
*/
SBool update_state_554(const SBool *queue_551,
                       const SWord32 ptr_551)
{
  const SBool   s0 = queue_551[0];
  return s0;
}
