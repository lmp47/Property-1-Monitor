/* File: "update_state_469.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 466",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_466[0]);
*/
SBool update_state_469(const SBool *queue_466,
                       const SWord32 ptr_466)
{
  const SBool   s0 = queue_466[0];
  return s0;
}