/* File: "update_state_458.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 455",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_455[0]);
*/
SBool update_state_458(const SBool *queue_455,
                       const SWord32 ptr_455)
{
  const SBool   s0 = queue_455[0];
  return s0;
}
