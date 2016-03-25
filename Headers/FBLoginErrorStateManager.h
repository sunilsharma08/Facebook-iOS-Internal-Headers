//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface FBLoginErrorStateManager : NSObject
{
    NSError *_error;
    NSString *_correctLoginIdentifier;
    NSString *_errorURL;
    unsigned int _incorrectPasswordCount;
}

@property(nonatomic) unsigned int incorrectPasswordCount; // @synthesize incorrectPasswordCount=_incorrectPasswordCount;
@property(copy, nonatomic) NSString *errorURL; // @synthesize errorURL=_errorURL;
@property(copy, nonatomic) NSString *correctLoginIdentifier; // @synthesize correctLoginIdentifier=_correctLoginIdentifier;
- (void).cxx_destruct;
- (void)_getFallbackLoginErrorStrings;
- (void)clearIncorrectPasswordCount;
- (void)updateWithError:(id)arg1;

@end

