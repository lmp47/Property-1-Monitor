/* File: "update_state_442.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 439",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_439[0]);
*/
SBool update_state_442(const SBool *queue_439,
                       const SWord32 ptr_439)
{
  const SBool   s0 = queue_439[0];
  return s0;
}
