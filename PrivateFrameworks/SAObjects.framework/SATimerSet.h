/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SATimerObject;

@interface SATimerSet : SADomainCommand  {
}

@property(retain) SATimerObject * timer;

+ (id)setWithDictionary:(id)arg1 context:(id)arg2;
+ (id)set;

- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setTimer:(id)arg1;
- (id)timer;
- (id)groupIdentifier;

@end