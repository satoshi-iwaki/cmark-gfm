#ifndef CMARK_GFM_EMOJI_H
#define CMARK_GFM_EMOJI_H

#include "cmark-gfm-core-extensions.h"

extern cmark_node_type CMARK_NODE_EMOJI;
cmark_syntax_extension *create_emoji_extension(void);

#endif
