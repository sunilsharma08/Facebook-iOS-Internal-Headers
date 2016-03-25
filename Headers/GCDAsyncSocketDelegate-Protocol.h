//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class GCDAsyncSocket, NSData, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GCDAsyncSocketDelegate

@optional
- (void)socket:(GCDAsyncSocket *)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)socketDidSecure:(GCDAsyncSocket *)arg1;
- (void)socketDidDisconnect:(GCDAsyncSocket *)arg1 withError:(NSError *)arg2;
- (void)socketDidCloseReadStream:(GCDAsyncSocket *)arg1;
- (double)socket:(GCDAsyncSocket *)arg1 shouldTimeoutWriteWithTag:(long)arg2 elapsed:(double)arg3 bytesDone:(unsigned int)arg4;
- (double)socket:(GCDAsyncSocket *)arg1 shouldTimeoutReadWithTag:(long)arg2 elapsed:(double)arg3 bytesDone:(unsigned int)arg4;
- (void)socket:(GCDAsyncSocket *)arg1 didWritePartialDataOfLength:(unsigned int)arg2 tag:(long)arg3;
- (void)socket:(GCDAsyncSocket *)arg1 didWriteDataWithTag:(long)arg2;
- (void)socket:(GCDAsyncSocket *)arg1 didReadPartialDataOfLength:(unsigned int)arg2 tag:(long)arg3;
- (void)socket:(GCDAsyncSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long)arg3;
- (void)socket:(GCDAsyncSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (void)socket:(GCDAsyncSocket *)arg1 didAcceptNewSocket:(GCDAsyncSocket *)arg2;
- (NSObject<OS_dispatch_queue> *)newSocketQueueForConnectionFromAddress:(NSData *)arg1 onSocket:(GCDAsyncSocket *)arg2;
@end

