/* File: "update_state_148.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 145",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_145[0]);
*/
SBool update_state_148(const SBool *queue_145,
                       const SWord32 ptr_145)
{
  const SBool   s0 = queue_145[0];
  return s0;
}
