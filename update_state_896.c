/* File: "update_state_896.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 893",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_893[0]);
*/
SBool update_state_896(const SBool *queue_893,
                       const SWord32 ptr_893)
{
  const SBool   s0 = queue_893[0];
  return s0;
}
