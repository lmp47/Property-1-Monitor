/* File: "update_state_656.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 653",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_653[0]);
*/
SBool update_state_656(const SBool *queue_653,
                       const SWord32 ptr_653)
{
  const SBool   s0 = queue_653[0];
  return s0;
}
