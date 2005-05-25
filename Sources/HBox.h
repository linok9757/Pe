/*	$Id$
	
	Copyright 1996, 1997, 1998, 2002
	        Hekkelman Programmatuur B.V.  All rights reserved.
	
	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:
	1. Redistributions of source code must retain the above copyright notice,
	   this list of conditions and the following disclaimer.
	2. Redistributions in binary form must reproduce the above copyright notice,
	   this list of conditions and the following disclaimer in the documentation
	   and/or other materials provided with the distribution.
	3. All advertising materials mentioning features or use of this software
	   must display the following acknowledgement:
	   
	    This product includes software developed by Hekkelman Programmatuur B.V.
	
	4. The name of Hekkelman Programmatuur B.V. may not be used to endorse or
	   promote products derived from this software without specific prior
	   written permission.
	
	THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
	INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
	FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
	AUTHORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
	EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
	PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
	OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
	WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
	OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
	ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 	

	Created: 10/15/97 11:08:12
*/

#ifndef HBOX_H
#define HBOX_H

#include <Box.h>

#include "HLibHekkel.h"

class IMPEXP_LIBHEKKEL HBox : public BBox {
public:
		HBox(BRect bounds,
				const char *name = NULL,
				uint32 resizeFlags = B_FOLLOW_LEFT | B_FOLLOW_TOP,
				uint32 flags = B_WILL_DRAW | B_FRAME_EVENTS |
								B_NAVIGABLE_JUMP,
				border_style border = B_FANCY_BORDER)
		: BBox(bounds, name, resizeFlags, flags, border) {};
		HBox(BView* view, const char *name = NULL,
				uint32 resizingMode = B_FOLLOW_LEFT|B_FOLLOW_TOP,
				uint32 flags = B_WILL_DRAW|B_FRAME_EVENTS|B_NAVIGABLE_JUMP,
				border_style border = B_FANCY_BORDER);
		
virtual	void Draw(BRect update);
		float Left(void) { return Frame().left; }
		float Right(void) { return Frame().right; }
		float Top(void) { return Frame().top; }
		float Bottom(void) { return Frame().bottom; }
		float Width(void) { return Frame().Width(); }
		float Height(void) { return Frame().Height(); }
		void ResizeWidth(float Width) { ResizeTo(Width, Height()); }
		void ResizeHeight(float Height) { ResizeTo(Width(), Height); }
};

#endif // HBOX_H
