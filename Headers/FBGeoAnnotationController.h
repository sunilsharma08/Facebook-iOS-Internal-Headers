//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBExpandableAnnotationController-Protocol.h"

@class FBMapNode, FBRichStoryBlockDisplayContext, FBRichStoryGeoAnnotation, FBUserSession, NSString;

@interface FBGeoAnnotationController : NSObject <FBExpandableAnnotationController>
{
    FBRichStoryGeoAnnotation *_annotation;
    FBRichStoryBlockDisplayContext *_displayContext;
    FBMapNode *_mapNode;
    FBUserSession *_session;
}

+ (struct CGSize)sizeForAnnotation:(id)arg1 constrainingSize:(struct CGSize)arg2 displayContext:(id)arg3;
- (void).cxx_destruct;
- (void)willCollapse;
- (void)willExpand;
- (id)renderable;
- (id)initWithAnnotation:(id)arg1 session:(id)arg2 displayContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

