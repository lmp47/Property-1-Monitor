/* File: "update_state_1709.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1706",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1706[0]);
*/
SBool update_state_1709(const SBool *queue_1706,
                        const SWord32 ptr_1706)
{
  const SBool   s0 = queue_1706[0];
  return s0;
}