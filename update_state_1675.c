/* File: "update_state_1675.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1672",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1672[0]);
*/
SBool update_state_1675(const SBool *queue_1672,
                        const SWord32 ptr_1672)
{
  const SBool   s0 = queue_1672[0];
  return s0;
}
