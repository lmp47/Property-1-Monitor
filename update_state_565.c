/* File: "update_state_565.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 562",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_562[0]);
*/
SBool update_state_565(const SBool *queue_562,
                       const SWord32 ptr_562)
{
  const SBool   s0 = queue_562[0];
  return s0;
}
