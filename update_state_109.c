/* File: "update_state_109.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 106",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_106[0]);
*/
SBool update_state_109(const SBool *queue_106,
                       const SWord32 ptr_106)
{
  const SBool   s0 = queue_106[0];
  return s0;
}
