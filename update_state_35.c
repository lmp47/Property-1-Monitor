/* File: "update_state_35.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 32",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_32[0]);
*/
SBool update_state_35(const SBool *queue_32, const SWord32 ptr_32)
{
  const SBool   s0 = queue_32[0];
  return s0;
}
