/* File: "update_state_1000.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 997",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_997[0]);
*/
SBool update_state_1000(const SBool *queue_997,
                        const SWord32 ptr_997)
{
  const SBool   s0 = queue_997[0];
  return s0;
}
