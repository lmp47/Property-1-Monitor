/* File: "update_state_3331.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3328",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3328[0]);
*/
SBool update_state_3331(const SBool *queue_3328,
                        const SWord32 ptr_3328)
{
  const SBool   s0 = queue_3328[0];
  return s0;
}
