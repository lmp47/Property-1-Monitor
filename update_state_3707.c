/* File: "update_state_3707.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3704",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3704[0]);
*/
SBool update_state_3707(const SBool *queue_3704,
                        const SWord32 ptr_3704)
{
  const SBool   s0 = queue_3704[0];
  return s0;
}
