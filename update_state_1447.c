/* File: "update_state_1447.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1444",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1444[0]);
*/
SBool update_state_1447(const SBool *queue_1444,
                        const SWord32 ptr_1444)
{
  const SBool   s0 = queue_1444[0];
  return s0;
}
