/* File: "update_state_4910.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4907",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4907[0]);
*/
SBool update_state_4910(const SBool *queue_4907,
                        const SWord32 ptr_4907)
{
  const SBool   s0 = queue_4907[0];
  return s0;
}
