/* File: "update_state_4774.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4771",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4771[0]);
*/
SBool update_state_4774(const SBool *queue_4771,
                        const SWord32 ptr_4771)
{
  const SBool   s0 = queue_4771[0];
  return s0;
}