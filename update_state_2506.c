/* File: "update_state_2506.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2503",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2503[0]);
*/
SBool update_state_2506(const SBool *queue_2503,
                        const SWord32 ptr_2503)
{
  const SBool   s0 = queue_2503[0];
  return s0;
}
