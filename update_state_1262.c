/* File: "update_state_1262.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1259",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1259[0]);
*/
SBool update_state_1262(const SBool *queue_1259,
                        const SWord32 ptr_1259)
{
  const SBool   s0 = queue_1259[0];
  return s0;
}
