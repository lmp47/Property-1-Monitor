/* File: "update_state_4968.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4965",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4965[0]);
*/
SInt64 update_state_4968(const SInt64 *queue_4965,
                         const SWord32 ptr_4965)
{
  const SInt64  s0 = queue_4965[0];
  return s0;
}
