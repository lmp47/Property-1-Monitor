/* File: "update_state_34.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 31",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_31[0]);
*/
SBool update_state_34(const SBool *queue_31, const SWord32 ptr_31)
{
  const SBool   s0 = queue_31[0];
  return s0;
}
