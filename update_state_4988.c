/* File: "update_state_4988.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4985",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4985[0]);
*/
SBool update_state_4988(const SBool *queue_4985,
                        const SWord32 ptr_4985)
{
  const SBool   s0 = queue_4985[0];
  return s0;
}