/* File: "update_state_55.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 52",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_52[0]);
*/
SBool update_state_55(const SBool *queue_52, const SWord32 ptr_52)
{
  const SBool   s0 = queue_52[0];
  return s0;
}
