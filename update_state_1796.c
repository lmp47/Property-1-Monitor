/* File: "update_state_1796.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1793",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1793[0]);
*/
SBool update_state_1796(const SBool *queue_1793,
                        const SWord32 ptr_1793)
{
  const SBool   s0 = queue_1793[0];
  return s0;
}