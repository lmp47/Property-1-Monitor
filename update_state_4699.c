/* File: "update_state_4699.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4696",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4696[0]);
*/
SBool update_state_4699(const SBool *queue_4696,
                        const SWord32 ptr_4696)
{
  const SBool   s0 = queue_4696[0];
  return s0;
}
