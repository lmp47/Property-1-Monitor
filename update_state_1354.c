/* File: "update_state_1354.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1351",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1351[0]);
*/
SBool update_state_1354(const SBool *queue_1351,
                        const SWord32 ptr_1351)
{
  const SBool   s0 = queue_1351[0];
  return s0;
}
