/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSCoreManagedObjectID : NSManagedObjectID  {
}

+ (void)_storeDeallocated;
+ (id)_storeInfo1;
+ (void)_setStoreInfo1:(id)arg1;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned int)arg2;
+ (unsigned int)allocateBatch:(id*)arg1 count:(unsigned int)arg2;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (void)_release_1;
+ (id)_retain_1;
+ (char *)generatedNameSuffix;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (void)release;
+ (id)retain;
+ (void)initialize;
+ (int)version;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)URIRepresentation;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (id)entity;
- (BOOL)isTemporaryID;
- (id)persistentStore;
- (id)entityName;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;

@end