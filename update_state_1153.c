/* File: "update_state_1153.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1150",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1150[0]);
*/
SBool update_state_1153(const SBool *queue_1150,
                        const SWord32 ptr_1150)
{
  const SBool   s0 = queue_1150[0];
  return s0;
}
