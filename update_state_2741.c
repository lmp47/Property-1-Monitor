/* File: "update_state_2741.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2738",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2738[0]);
*/
SBool update_state_2741(const SBool *queue_2738,
                        const SWord32 ptr_2738)
{
  const SBool   s0 = queue_2738[0];
  return s0;
}
