/* File: "update_state_940.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 937",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_937[0]);
*/
SBool update_state_940(const SBool *queue_937,
                       const SWord32 ptr_937)
{
  const SBool   s0 = queue_937[0];
  return s0;
}
