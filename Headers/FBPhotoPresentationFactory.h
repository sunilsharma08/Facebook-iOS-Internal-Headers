//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBPhotoPresentationFactory : NSObject
{
    CDUnknownBlockType _creationBlock;
}

+ (id)sharedFactory;
- (void).cxx_destruct;
- (BOOL)setCreationBlock:(CDUnknownBlockType)arg1;
- (id)photoPresentationViewControllerWithContext:(id)arg1;

@end

