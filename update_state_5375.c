/* File: "update_state_5375.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5372",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5372[0]);
*/
SBool update_state_5375(const SBool *queue_5372,
                        const SWord32 ptr_5372)
{
  const SBool   s0 = queue_5372[0];
  return s0;
}
