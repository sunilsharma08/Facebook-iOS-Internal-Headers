//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBConsistentLookasideInconsistencyFixingExpanderNative : NSObject
{
    unsigned int _features;
}

- (void)_expandMemPhoto:(id)arg1 inObjectContext:(id)arg2 intoBlock:(CDUnknownBlockType)arg3;
- (void)_updatePhotoMappingForStory:(id)arg1 inObjectContext:(id)arg2;
- (void)_expandMemFeedStory:(id)arg1 inObjectContext:(id)arg2 intoBlock:(CDUnknownBlockType)arg3;
- (id)_selectedFieldsFromStory:(id)arg1;
- (void)expandModel:(id)arg1 inObjectContext:(id)arg2 intoBlock:(CDUnknownBlockType)arg3;
- (id)initWithFeatures:(unsigned int)arg1;
- (id)init;

@end

