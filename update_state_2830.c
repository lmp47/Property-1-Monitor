/* File: "update_state_2830.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2827",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2827[0]);
*/
SBool update_state_2830(const SBool *queue_2827,
                        const SWord32 ptr_2827)
{
  const SBool   s0 = queue_2827[0];
  return s0;
}
