/* File: "update_state_2630.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2627",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2627[0]);
*/
SBool update_state_2630(const SBool *queue_2627,
                        const SWord32 ptr_2627)
{
  const SBool   s0 = queue_2627[0];
  return s0;
}
