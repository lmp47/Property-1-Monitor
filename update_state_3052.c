/* File: "update_state_3052.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3049",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3049[0]);
*/
SBool update_state_3052(const SBool *queue_3049,
                        const SWord32 ptr_3049)
{
  const SBool   s0 = queue_3049[0];
  return s0;
}
