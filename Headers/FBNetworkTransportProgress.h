//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBNetworkTransportProgress : NSObject
{
    BOOL _complete;
    float _progress;
}

@property(readonly, nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
- (id)initWithProgress:(float)arg1 complete:(BOOL)arg2;

@end

