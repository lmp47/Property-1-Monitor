/* File: "update_state_5117.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5114",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5114[0]);
*/
SBool update_state_5117(const SBool *queue_5114,
                        const SWord32 ptr_5114)
{
  const SBool   s0 = queue_5114[0];
  return s0;
}