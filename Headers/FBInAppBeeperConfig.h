//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBInAppBeeperConfig : NSObject
{
    BOOL _backgroundBlur;
    int _priority;
    int _statusBarStyle;
    double _dismissalDelay;
}

@property(nonatomic) BOOL backgroundBlur; // @synthesize backgroundBlur=_backgroundBlur;
@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) double dismissalDelay; // @synthesize dismissalDelay=_dismissalDelay;
- (id)init;

@end

