//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CKComponentDeciding-Protocol.h"
#import "CKComponentProvider-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"

@class NSString;

@interface FBReactionComponentProvider : NSObject <CKComponentProvider, CKComponentDeciding, FBComponentTableViewDataSourceCellConfigProvider>
{
}

+ (id)componentToolboxForReactionAdapterContext:(id)arg1;
+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (id)componentCompliantModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

