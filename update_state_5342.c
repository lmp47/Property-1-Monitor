/* File: "update_state_5342.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5339",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5339[0]);
*/
SBool update_state_5342(const SBool *queue_5339,
                        const SWord32 ptr_5339)
{
  const SBool   s0 = queue_5339[0];
  return s0;
}
