/* File: "update_state_224.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 221",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_221[0]);
*/
SBool update_state_224(const SBool *queue_221,
                       const SWord32 ptr_221)
{
  const SBool   s0 = queue_221[0];
  return s0;
}
