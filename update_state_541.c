/* File: "update_state_541.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 538",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_538[0]);
*/
SBool update_state_541(const SBool *queue_538,
                       const SWord32 ptr_538)
{
  const SBool   s0 = queue_538[0];
  return s0;
}
