/* File: "update_state_4940.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4937",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4937[0]);
*/
SBool update_state_4940(const SBool *queue_4937,
                        const SWord32 ptr_4937)
{
  const SBool   s0 = queue_4937[0];
  return s0;
}
