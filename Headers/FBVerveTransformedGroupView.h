//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerveGroupView.h"

@interface FBVerveTransformedGroupView : FBVerveGroupView
{
    CDStruct_225388b8 _transform;
}

+ (Class)FBVerve_getProperties:(CDStruct_183601bc **)arg1 count:(unsigned int *)arg2;
- (BOOL)clipsContents;
- (id)copyNodeWithFlags:(unsigned int)arg1;
- (CDStruct_225388b8)groupTransform;
@property(nonatomic) CDStruct_225388b8 transform; // @synthesize transform=_transform;
- (id)init;
- (Class)factoryViewClass;

@end

