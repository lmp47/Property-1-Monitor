/* File: "update_state_805.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 802",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_802[0]);
*/
SBool update_state_805(const SBool *queue_802,
                       const SWord32 ptr_802)
{
  const SBool   s0 = queue_802[0];
  return s0;
}
