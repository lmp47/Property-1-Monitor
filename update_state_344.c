/* File: "update_state_344.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 341",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_341[0]);
*/
SBool update_state_344(const SBool *queue_341,
                       const SWord32 ptr_341)
{
  const SBool   s0 = queue_341[0];
  return s0;
}
