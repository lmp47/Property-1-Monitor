/* File: "update_state_577.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 574",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_574[0]);
*/
SBool update_state_577(const SBool *queue_574,
                       const SWord32 ptr_574)
{
  const SBool   s0 = queue_574[0];
  return s0;
}