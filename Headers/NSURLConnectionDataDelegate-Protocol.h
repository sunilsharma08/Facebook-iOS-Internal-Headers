//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSURLConnectionDelegate-Protocol.h"

@class NSCachedURLResponse, NSData, NSInputStream, NSURLConnection, NSURLRequest, NSURLResponse;

@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>

@optional
- (void)connectionDidFinishLoading:(NSURLConnection *)arg1;
- (NSCachedURLResponse *)connection:(NSURLConnection *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2;
- (void)connection:(NSURLConnection *)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (NSInputStream *)connection:(NSURLConnection *)arg1 needNewBodyStream:(NSURLRequest *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (NSURLRequest *)connection:(NSURLConnection *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

