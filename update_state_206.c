/* File: "update_state_206.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 203",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_203[0]);
*/
SBool update_state_206(const SBool *queue_203,
                       const SWord32 ptr_203)
{
  const SBool   s0 = queue_203[0];
  return s0;
}
