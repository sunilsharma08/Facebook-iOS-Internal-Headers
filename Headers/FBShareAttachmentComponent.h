//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBStoryAttachmentRenderingComponent-Protocol.h"

@class NSString;

@interface FBShareAttachmentComponent : CKCompositeComponent <FBStoryAttachmentRenderingComponent>
{
}

+ (id)newWithAttachment:(id)arg1 options:(unsigned int)arg2 parentStory:(id)arg3 storyInsets:(struct UIEdgeInsets)arg4 eventBus:(id)arg5 toolbox:(id)arg6;
+ (id)supportedStyles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

