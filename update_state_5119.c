/* File: "update_state_5119.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5116",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5116[0]);
*/
SBool update_state_5119(const SBool *queue_5116,
                        const SWord32 ptr_5116)
{
  const SBool   s0 = queue_5116[0];
  return s0;
}
