/* File: "update_state_49.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 46",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_46[0]);
*/
SBool update_state_49(const SBool *queue_46, const SWord32 ptr_46)
{
  const SBool   s0 = queue_46[0];
  return s0;
}
