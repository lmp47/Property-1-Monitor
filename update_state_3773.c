/* File: "update_state_3773.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3770",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3770[0]);
*/
SBool update_state_3773(const SBool *queue_3770,
                        const SWord32 ptr_3770)
{
  const SBool   s0 = queue_3770[0];
  return s0;
}
