/* File: "update_state_4966.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4963",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4963[0]);
*/
SBool update_state_4966(const SBool *queue_4963,
                        const SWord32 ptr_4963)
{
  const SBool   s0 = queue_4963[0];
  return s0;
}
