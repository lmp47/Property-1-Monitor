/* File: "update_state_337.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 334",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_334[0]);
*/
SBool update_state_337(const SBool *queue_334,
                       const SWord32 ptr_334)
{
  const SBool   s0 = queue_334[0];
  return s0;
}
