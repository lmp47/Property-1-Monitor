/* File: "update_state_4399.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4396",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4396[0]);
*/
SBool update_state_4399(const SBool *queue_4396,
                        const SWord32 ptr_4396)
{
  const SBool   s0 = queue_4396[0];
  return s0;
}
