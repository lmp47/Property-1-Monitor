/* File: "update_state_4964.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4961",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4961[0]);
*/
SBool update_state_4964(const SBool *queue_4961,
                        const SWord32 ptr_4961)
{
  const SBool   s0 = queue_4961[0];
  return s0;
}