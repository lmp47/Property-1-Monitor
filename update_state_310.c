/* File: "update_state_310.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 307",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_307[0]);
*/
SBool update_state_310(const SBool *queue_307,
                       const SWord32 ptr_307)
{
  const SBool   s0 = queue_307[0];
  return s0;
}