//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBBylineNodeDelegate-Protocol.h"
#import "FBIntentForwardingBlockController-Protocol.h"
#import "FBRichStoryBlockController-Protocol.h"

@class ASDisplayNode, FBRichStoryBlockDisplayContext, FBRichStoryEntityMetadata, FBUserSession, NSString;
@protocol FBBylineNode, FBIntentHandler;

@interface FBMetadataBlockController : NSObject <FBBylineNodeDelegate, FBRichStoryBlockController, FBIntentForwardingBlockController>
{
    ASDisplayNode<FBBylineNode> *_bylineNode;
    unsigned int _dateFormat;
    FBRichStoryBlockDisplayContext *_displayContext;
    FBRichStoryEntityMetadata *_metadata;
    FBUserSession *_session;
    int _style;
    id <FBIntentHandler> intentHandler;
}

+ (id)layoutForStoryBlock:(id)arg1 constrainingSize:(struct CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4;
+ (id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4;
+ (BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2;
@property(nonatomic) __weak id <FBIntentHandler> intentHandler; // @synthesize intentHandler;
- (void).cxx_destruct;
- (void)bylineNode:(id)arg1 didTapProfilePictureAtIndex:(unsigned int)arg2;
- (void)handleIntent:(id)arg1;
- (id)richStoryRenderable;
- (id)initWithMetadata:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

