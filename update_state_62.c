/* File: "update_state_62.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 59",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_59[0]);
*/
SBool update_state_62(const SBool *queue_59, const SWord32 ptr_59)
{
  const SBool   s0 = queue_59[0];
  return s0;
}
