//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBRtmpSession, NSError, NSString;

@protocol FBRtmpSessionDelegate <NSObject>
- (void)rtmpSession:(FBRtmpSession *)arg1 didDropPackets:(shared_ptr_896bc00e)arg2 dropReason:(NSString *)arg3;
- (void)rtmpSessionWriteDidTimeout:(FBRtmpSession *)arg1;
- (void)rtmpSessionWillReconnect:(FBRtmpSession *)arg1;
- (void)rtmpSessionDidFail:(FBRtmpSession *)arg1 withError:(NSError *)arg2;
- (void)rtmpSessionDidFinish:(FBRtmpSession *)arg1;
- (void)rtmpSessionDidStart:(FBRtmpSession *)arg1;
@end

