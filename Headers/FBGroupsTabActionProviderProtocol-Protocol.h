//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FBGroupsTabActionProviderProtocol <NSObject>

@optional
- (void)didTapGroupsFooter;
- (void)didTapEventsFooter;
- (void)didTapGroupsHeader;
- (void)didTapEventsHeader;
- (void)didTapCreateGroup;
- (void)didTapCreateEvent;
- (void)didTapGroupID:(NSString *)arg1;
- (void)didTapEventID:(NSString *)arg1;
@end

