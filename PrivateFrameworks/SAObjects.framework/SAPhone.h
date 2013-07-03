/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAPhone : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * favoriteFacetime;
@property(copy) NSNumber * favoriteFacetimeAudio;
@property(copy) NSNumber * favoriteVoice;
@property(copy) NSString * label;
@property(copy) NSString * number;

+ (id)phone;
+ (id)phoneWithDictionary:(id)arg1 context:(id)arg2;

- (void)setFavoriteVoice:(id)arg1;
- (id)favoriteVoice;
- (void)setFavoriteFacetimeAudio:(id)arg1;
- (id)favoriteFacetimeAudio;
- (void)setFavoriteFacetime:(id)arg1;
- (id)favoriteFacetime;
- (id)encodedClassName;
- (id)number;
- (void)setNumber:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)groupIdentifier;

@end