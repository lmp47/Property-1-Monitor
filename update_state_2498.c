/* File: "update_state_2498.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2495",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2495[0]);
*/
SBool update_state_2498(const SBool *queue_2495,
                        const SWord32 ptr_2495)
{
  const SBool   s0 = queue_2495[0];
  return s0;
}