/* File: "update_state_155.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 152",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_152[0]);
*/
SBool update_state_155(const SBool *queue_152,
                       const SWord32 ptr_152)
{
  const SBool   s0 = queue_152[0];
  return s0;
}