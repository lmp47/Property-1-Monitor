/* File: "update_state_5177.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5174",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5174[0]);
*/
SBool update_state_5177(const SBool *queue_5174,
                        const SWord32 ptr_5174)
{
  const SBool   s0 = queue_5174[0];
  return s0;
}
