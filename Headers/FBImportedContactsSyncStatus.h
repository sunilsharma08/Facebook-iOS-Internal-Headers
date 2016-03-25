//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface FBImportedContactsSyncStatus : FBValueObject <NSCopying>
{
    unsigned int _numberOfContactsAttemptedToMatch;
    NSArray *_importedSyncPersons;
}

@property(readonly, copy, nonatomic) NSArray *importedSyncPersons; // @synthesize importedSyncPersons=_importedSyncPersons;
@property(readonly, nonatomic) unsigned int numberOfContactsAttemptedToMatch; // @synthesize numberOfContactsAttemptedToMatch=_numberOfContactsAttemptedToMatch;
- (void).cxx_destruct;
- (id)initWithNumberOfContactsAttemptedToMatch:(unsigned int)arg1 importedSyncPersons:(id)arg2;

@end

