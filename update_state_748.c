/* File: "update_state_748.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 745",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_745[0]);
*/
SBool update_state_748(const SBool *queue_745,
                       const SWord32 ptr_745)
{
  const SBool   s0 = queue_745[0];
  return s0;
}
