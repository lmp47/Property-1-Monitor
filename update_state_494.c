/* File: "update_state_494.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 491",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_491[0]);
*/
SBool update_state_494(const SBool *queue_491,
                       const SWord32 ptr_491)
{
  const SBool   s0 = queue_491[0];
  return s0;
}
