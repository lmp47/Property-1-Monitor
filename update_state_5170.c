/* File: "update_state_5170.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5167",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5167[0]);
*/
SBool update_state_5170(const SBool *queue_5167,
                        const SWord32 ptr_5167)
{
  const SBool   s0 = queue_5167[0];
  return s0;
}
