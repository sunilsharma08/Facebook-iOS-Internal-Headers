//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSNumber, NSURLRequest, NSURLResponse;
@protocol RCTURLRequestHandler;

@interface RCTActiveURLRequest : NSObject
{
    BOOL _incrementalUpdates;
    NSNumber *_requestID;
    NSURLRequest *_request;
    id <RCTURLRequestHandler> _handler;
    NSURLResponse *_response;
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(nonatomic) BOOL incrementalUpdates; // @synthesize incrementalUpdates=_incrementalUpdates;
@property(retain, nonatomic) id <RCTURLRequestHandler> handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSNumber *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (id)init;

@end

