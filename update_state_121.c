/* File: "update_state_121.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 118",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_118[0]);
*/
SBool update_state_121(const SBool *queue_118,
                       const SWord32 ptr_118)
{
  const SBool   s0 = queue_118[0];
  return s0;
}
