/* File: "update_state_467.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 464",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_464[0]);
*/
SBool update_state_467(const SBool *queue_464,
                       const SWord32 ptr_464)
{
  const SBool   s0 = queue_464[0];
  return s0;
}