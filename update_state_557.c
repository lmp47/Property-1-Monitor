/* File: "update_state_557.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 554",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_554[0]);
*/
SBool update_state_557(const SBool *queue_554,
                       const SWord32 ptr_554)
{
  const SBool   s0 = queue_554[0];
  return s0;
}
