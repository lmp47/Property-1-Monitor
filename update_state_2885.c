/* File: "update_state_2885.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2882",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2882[0]);
*/
SBool update_state_2885(const SBool *queue_2882,
                        const SWord32 ptr_2882)
{
  const SBool   s0 = queue_2882[0];
  return s0;
}
