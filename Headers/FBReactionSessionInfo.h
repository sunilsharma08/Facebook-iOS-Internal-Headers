//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBReactionSessionInfo : NSObject
{
    NSString *_reactionSessionId;
    NSString *_surface;
}

@property(readonly, copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(readonly, copy, nonatomic) NSString *reactionSessionId; // @synthesize reactionSessionId=_reactionSessionId;
- (void).cxx_destruct;
- (id)initWithReactionSessionId:(id)arg1 surface:(id)arg2;
- (id)init;

@end

