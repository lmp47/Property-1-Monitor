/* File: "update_state_5033.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5030",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5030[0]);
*/
SBool update_state_5033(const SBool *queue_5030,
                        const SWord32 ptr_5030)
{
  const SBool   s0 = queue_5030[0];
  return s0;
}