//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBComposerPublisherData, FBCompositionModelBundle;

@interface FBComposerPublicationBuilder : NSObject
{
    FBComposerPublisherData *_publisherData;
    FBCompositionModelBundle *_compositionModelBundle;
}

+ (id)aComposerPublicationFromExistingComposerPublication:(id)arg1;
+ (id)aComposerPublication;
- (void).cxx_destruct;
- (id)withCompositionModelBundle:(id)arg1;
- (id)withPublisherData:(id)arg1;
- (id)build;

@end

