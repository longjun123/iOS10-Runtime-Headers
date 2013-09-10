/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSLock;

@interface VKTilePool : VKTileKeyMap  {
    NSLock *_lock;
}


- (id)initWithMapType:(int)arg1;
- (id)init;
- (void)setObject:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)removeObjectForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)objectForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)removeAllObjects;
- (int)count;
- (void)dealloc;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;

@end