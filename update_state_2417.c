/* File: "update_state_2417.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2414",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2414[0]);
*/
SBool update_state_2417(const SBool *queue_2414,
                        const SWord32 ptr_2414)
{
  const SBool   s0 = queue_2414[0];
  return s0;
}
