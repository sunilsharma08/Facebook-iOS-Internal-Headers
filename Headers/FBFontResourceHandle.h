//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FBFontResourceHandle : NSObject
{
    NSString *_name;
    NSArray *_fontHandles;
}

@property(readonly, copy, nonatomic) NSArray *fontHandles; // @synthesize fontHandles=_fontHandles;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 fontHandles:(id)arg2;

@end

