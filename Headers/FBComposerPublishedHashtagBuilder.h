//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBComposerPublishedHashtagBuilder : NSObject
{
    NSString *_textOfHashtag;
    struct _NSRange _rangeOfHashtagInAllText;
}

+ (id)composerPublishedHashtagFromExistingComposerPublishedHashtag:(id)arg1;
+ (id)composerPublishedHashtag;
- (void).cxx_destruct;
- (id)withRangeOfHashtagInAllText:(struct _NSRange)arg1;
- (id)withTextOfHashtag:(id)arg1;
- (id)build;

@end

