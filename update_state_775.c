/* File: "update_state_775.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 772",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_772[0]);
*/
SBool update_state_775(const SBool *queue_772,
                       const SWord32 ptr_772)
{
  const SBool   s0 = queue_772[0];
  return s0;
}
