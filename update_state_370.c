/* File: "update_state_370.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 367",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_367[0]);
*/
SBool update_state_370(const SBool *queue_367,
                       const SWord32 ptr_367)
{
  const SBool   s0 = queue_367[0];
  return s0;
}
