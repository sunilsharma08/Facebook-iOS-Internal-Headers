//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemPerson;
@protocol FBProfileVideoObserver;

@interface FBProfileVideoObservation : NSObject
{
    id <FBProfileVideoObserver> _observer;
    FBMemPerson *_person;
}

@property(readonly, nonatomic) FBMemPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) __weak id <FBProfileVideoObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 person:(id)arg2;

@end

