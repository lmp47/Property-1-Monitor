/* File: "update_state_325.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 322",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_322[0]);
*/
SBool update_state_325(const SBool *queue_322,
                       const SWord32 ptr_322)
{
  const SBool   s0 = queue_322[0];
  return s0;
}
