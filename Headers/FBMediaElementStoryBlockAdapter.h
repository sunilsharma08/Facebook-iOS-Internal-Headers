//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBDocumentElementStoryBlockAdapter.h"

@class NSDictionary;
@protocol FBQueriedDocumentElementFieldsProtocol;

@interface FBMediaElementStoryBlockAdapter : FBDocumentElementStoryBlockAdapter
{
    id <FBQueriedDocumentElementFieldsProtocol> _mediaElement;
    NSDictionary *_presentationAttributes;
}

+ (BOOL)canAdaptDataModel:(id)arg1;
- (void).cxx_destruct;
- (id)presentationAttributes;
- (id)initWithMediaElement:(id)arg1;

@end

