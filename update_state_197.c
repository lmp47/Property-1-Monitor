/* File: "update_state_197.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 194",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_194[0]);
*/
SBool update_state_197(const SBool *queue_194,
                       const SWord32 ptr_194)
{
  const SBool   s0 = queue_194[0];
  return s0;
}
