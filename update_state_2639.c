/* File: "update_state_2639.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2636",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2636[0]);
*/
SBool update_state_2639(const SBool *queue_2636,
                        const SWord32 ptr_2636)
{
  const SBool   s0 = queue_2636[0];
  return s0;
}
