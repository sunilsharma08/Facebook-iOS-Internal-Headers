//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNuxServerContext-Protocol.h"

@class FBContactPoint, NSString;

@interface FBAccountConfirmationNUXContext : NSObject <FBNuxServerContext>
{
    FBContactPoint *_contactPoint;
}

@property(readonly, nonatomic) FBContactPoint *contactPoint; // @synthesize contactPoint=_contactPoint;
- (void).cxx_destruct;
- (void)parseParameters:(id)arg1;
- (id)initWithNuxParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

