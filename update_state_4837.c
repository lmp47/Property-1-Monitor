/* File: "update_state_4837.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4834",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4834[0]);
*/
SBool update_state_4837(const SBool *queue_4834,
                        const SWord32 ptr_4834)
{
  const SBool   s0 = queue_4834[0];
  return s0;
}
