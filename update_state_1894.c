/* File: "update_state_1894.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1891",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1891[0]);
*/
SBool update_state_1894(const SBool *queue_1891,
                        const SWord32 ptr_1891)
{
  const SBool   s0 = queue_1891[0];
  return s0;
}
