/* File: "update_state_619.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 616",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_616[0]);
*/
SBool update_state_619(const SBool *queue_616,
                       const SWord32 ptr_616)
{
  const SBool   s0 = queue_616[0];
  return s0;
}
