/* File: "update_state_3793.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3790",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3790[0]);
*/
SBool update_state_3793(const SBool *queue_3790,
                        const SWord32 ptr_3790)
{
  const SBool   s0 = queue_3790[0];
  return s0;
}