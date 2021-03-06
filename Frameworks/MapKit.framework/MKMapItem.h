/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItem : NSObject <GEOURLSerializable> {
    _MKMapItemPlaceAttribution * _attribution;
    <GEOMapItemTransitInfo> * _defaultTransitInfo;
    <NSObject> * _didResolveAttributionToken;
    NSString * _firstLocalizedCategoryName;
    <GEOMapItem> * _geoMapItem;
    bool  _isCurrentLocation;
    bool  _isPlaceHolder;
    bool  _isTransitInfoUpdated;
    bool  _isTransitItem;
    MKMapItemMetadata * _metadata;
    NSString * _name;
    NSString * _phoneNumber;
    _MKMapItemPhotosAttribution * _photosAttribution;
    GEOPlace * _place;
    _MKPlaceReservationInfo * _reservationInfo;
    _MKMapItemReviewsAttribution * _reviewsAttribution;
    NSString * _shortAddress;
    NSTimeZone * _timeZone;
    <GEOTransitAttribution> * _updatedTransitAttribution;
    <GEOMapItemTransitInfo> * _updatedTransitInfo;
    NSURL * _url;
}

@property (getter=_acceptsApplePay, nonatomic, readonly) bool acceptsApplePay;
@property (getter=_attribution, nonatomic, readonly) _MKMapItemPlaceAttribution *attribution;
@property (getter=_businessClaim, nonatomic, readonly) GEOPDBusinessClaim *businessClaim;
@property (getter=_coordinate, nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_detourInfo, nonatomic, readonly) GEOMapItemDetourInfo *detourInfo;
@property (getter=_disambiguationName, nonatomic, readonly) NSString *disambiguationName;
@property (getter=_displayMapRegion, nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (getter=_encyclopedicInfo, nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (getter=_externalTransitStationCode, nonatomic, readonly) NSData *externalTransitStationCode;
@property (getter=_firstLocalizedCategoryName, nonatomic, readonly) NSString *firstLocalizedCategoryName;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property (nonatomic, readonly) NSString *formattedNumberOfReviews;
@property (nonatomic, readonly) NSString *formattedNumberOfReviewsIncludingProvider;
@property (getter=_geoAddress, nonatomic, readonly) GEOAddress *geoAddress;
@property (getter=_geoFenceMapRegion, nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (getter=_geoMapItem, nonatomic, readonly) <GEOMapItemPrivate> *geoMapItem;
@property (getter=_goodForKids, nonatomic, readonly) bool goodForKids;
@property (getter=_handle, nonatomic, readonly) NSData *handle;
@property (getter=_hasAcceptsApplePayAmenity, nonatomic, readonly) bool hasAcceptsApplePayAmenity;
@property (getter=_hasAnyAmenities, nonatomic, readonly) bool hasAnyAmenities;
@property (getter=_hasBusinessClaim, nonatomic, readonly) bool hasBusinessClaim;
@property (getter=_hasCorrectedHomeWorkCoordinate, nonatomic, readonly) bool hasCorrectedHomeWorkCoordinate;
@property (getter=_hasDelivery, nonatomic, readonly) bool hasDelivery;
@property (getter=_hasDeliveryAmenity, nonatomic, readonly) bool hasDeliveryAmenity;
@property (getter=_hasDisplayableAmenities, readonly) bool hasDisplayableAmenities;
@property (getter=_hasEncyclopedicInfo, nonatomic, readonly) bool hasEncyclopedicInfo;
@property (getter=_hasFlyover, nonatomic, readonly) bool hasFlyover;
@property (getter=_hasGoodForKidsAmenity, nonatomic, readonly) bool hasGoodForKidsAmenity;
@property (getter=_hasLocalizedOperatingHours, nonatomic, readonly) bool hasLocalizedOperatingHours;
@property (getter=_hasMUID, nonatomic, readonly) bool hasMUID;
@property (getter=_hasOperatingHours, nonatomic, readonly) bool hasOperatingHours;
@property (getter=_hasPriceRange, nonatomic, readonly) bool hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) bool hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) bool hasResultProviderID;
@property (getter=_hasTakesReservationsAmenity, nonatomic, readonly) bool hasTakesReservationsAmenity;
@property (getter=_hasTransit, nonatomic, readonly) bool hasTransit;
@property (getter=_hasTransitDisplayName, nonatomic, readonly) bool hasTransitDisplayName;
@property (getter=_hasTransitLabels, nonatomic, readonly) bool hasTransitLabels;
@property (getter=_hasUserRatingScore, nonatomic, readonly) bool hasUserRatingScore;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCurrentLocation;
@property (getter=_isEmptyContactMapItem, readonly) bool isEmptyContactMapItem;
@property (nonatomic, readonly) bool isPlaceHolder;
@property (getter=_isTransitItem, nonatomic) bool isTransitItem;
@property (getter=_localizedOperatingHours, nonatomic, readonly) NSString *localizedOperatingHours;
@property (nonatomic, readonly) MKMapItemMetadata *metadata;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (nonatomic, copy) NSString *name;
@property (getter=_needsAttribution, nonatomic, readonly) bool needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned long long openingHoursOptions;
@property (nonatomic, copy) NSString *phoneNumber;
@property (getter=_phoneNumberOptsOutOfAds, nonatomic, readonly) bool phoneNumberOptsOutOfAds;
@property (getter=_photosAttribution, nonatomic, readonly) _MKMapItemPhotosAttribution *photosAttribution;
@property (nonatomic, readonly) GEOPlace *place;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (nonatomic, readonly) MKPlacemark *placemark;
@property (getter=_poiPinpointURLString, nonatomic, readonly) NSString *poiPinpointURLString;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (getter=_priceRangeString, nonatomic, readonly) NSString *priceRangeString;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (nonatomic, retain) _MKPlaceReservationInfo *reservationInfo;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_reviews, nonatomic, readonly) NSArray *reviews;
@property (getter=_reviewsAttribution, nonatomic, readonly) _MKMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_reviewsDisplayName, nonatomic, readonly) NSString *reviewsDisplayName;
@property (nonatomic, readonly) NSString *reviewsProviderDisplayName;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (getter=_shortAddress, nonatomic, readonly) NSString *shortAddress;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (getter=_takesReservations, nonatomic, readonly) bool takesReservations;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (getter=_tips, nonatomic, readonly) NSArray *tips;
@property (getter=_transitAttribution, nonatomic, readonly) <GEOTransitAttribution> *transitAttribution;
@property (getter=_transitDisplayName, nonatomic, readonly) NSString *transitDisplayName;
@property (getter=_transitInfo, nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;
@property (nonatomic, retain) NSURL *url;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;
@property (nonatomic, readonly) NSString *yelpID;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_deserializeResourceOptionsFromURL:(id)arg1 error:(out id*)arg2;
+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
+ (id)_itemWithAddressBookRef:(void*)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithContact:(id)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (id)_launchOptionsFromResourceOptionsDictionary:(id)arg1;
+ (id)_launchOptionsWithOptions:(id)arg1;
+ (void)_mapItemFromHandle:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(id /* block */)arg2;
+ (bool)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2;
+ (void)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)_sharedSessionURLForPunchoutURL:(id)arg1;
+ (id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg1;
+ (id)_urlForMapItemHandles:(id)arg1 options:(id)arg2;
+ (id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1;
+ (id)contactsAddressKeysForGeoAddressKeys;
+ (id)launchOptionsFromURL:(id)arg1;
+ (id)mapItemForCurrentLocation;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 currentLocation:(bool)arg3;
+ (id)mapItemsFromURL:(id)arg1 options:(id*)arg2;
+ (bool)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (bool)_acceptsApplePay;
- (id)_activityURL:(bool)arg1;
- (id)_addressFormattedAsAddressDictionary;
- (id)_addressFormattedAsCity;
- (id)_addressFormattedAsMultilineAddress;
- (id)_addressFormattedAsName;
- (id)_addressFormattedAsShortenedAddress;
- (id)_addressFormattedAsSinglelineAddress;
- (id)_addressFormattedAsTitlesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_addressFormattedAsWeatherDisplayName;
- (id)_addressOrNil:(id)arg1;
- (id)_attribution;
- (id)_attributionFor:(id)arg1 sourceStringFormat:(id)arg2 moreSourceStringFormat:(id)arg3 imageTintColor:(id)arg4;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 isSnippetLogo:(bool)arg4;
- (id)_businessClaim;
- (bool)_canGetDirections;
- (struct CLLocationCoordinate2D { double x1; double x2; })_coordinate;
- (unsigned long long)_customIconID;
- (id)_detourInfo;
- (id)_disambiguationName;
- (id)_displayMapRegion;
- (id)_encyclopedicInfo;
- (id)_externalTransitStationCode;
- (id)_firstLocalizedCategoryName;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (id)_fullAddressWithMultiline:(bool)arg1;
- (id)_geoAddress;
- (id)_geoFenceMapRegion;
- (id)_geoMapItem;
- (id)_getBusiness;
- (bool)_goodForKids;
- (id)_handle;
- (bool)_hasAcceptsApplePayAmenity;
- (bool)_hasAnyAmenities;
- (bool)_hasBusinessClaim;
- (bool)_hasCorrectedHomeWorkCoordinate;
- (bool)_hasDelivery;
- (bool)_hasDeliveryAmenity;
- (bool)_hasDisplayableAmenities;
- (bool)_hasEncyclopedicInfo;
- (bool)_hasFlyover;
- (bool)_hasGoodForKidsAmenity;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasLocalizedOperatingHours;
- (bool)_hasMUID;
- (bool)_hasOperatingHours;
- (bool)_hasPriceRange;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasRestaurantExtensionInfo;
- (bool)_hasResultProviderID;
- (bool)_hasTakesReservationsAmenity;
- (bool)_hasTransit;
- (bool)_hasTransitDisplayName;
- (bool)_hasTransitLabels;
- (bool)_hasUserRatingScore;
- (id)_initWithLabelMarker:(id)arg1;
- (bool)_isBusinessClosed;
- (bool)_isEmptyContactMapItem;
- (bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (bool)_isTransitItem;
- (id)_localizedBusinessHoursWithCurrentOpeningHoursOptions;
- (id)_localizedBusinessHoursWithOptions:(unsigned long long)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedOperatingHours;
- (id)_mapsDataString;
- (unsigned long long)_muid;
- (bool)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (bool)_phoneNumberOptsOutOfAds;
- (id)_photosAttribution;
- (id)_placeCardContact;
- (id)_placeDataAsData;
- (id)_poiPinpointURLString;
- (id)_poiSurveyURLString;
- (id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg1;
- (id)_priceRangeString;
- (id)_providerURL;
- (int)_recommendedTransportType;
- (void)_refreshAttribution;
- (unsigned long long)_restaurantExtensionModeForFirstProvider;
- (id)_restaurantLink_firstProviderDisplayName;
- (id)_restaurantLink_firstProviderIdentifier;
- (id)_restaurantLink_firstProviderPlaceIdentifier;
- (id)_restaurantLink_firstVendorID;
- (bool)_restaurantLink_hasFeatureType:(unsigned long long)arg1;
- (id)_restaurantLink_overridenBundleIDsForVendorIDs;
- (int)_resultProviderID;
- (id)_reviewForIdentifier:(id)arg1;
- (id)_reviews;
- (id)_reviewsAttribution;
- (id)_reviewsDisplayName;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_shortAddress;
- (id)_styleAttributes;
- (bool)_takesReservations;
- (id)_tips;
- (id)_transitAttribution;
- (id)_transitDisplayName;
- (id)_transitInfo;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (id)_vendorID;
- (id)_weatherDisplayName;
- (id)_webURL;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedNumberOfReviews;
- (id)formattedNumberOfReviewsIncludingProvider;
- (id)formattedNumberOfReviewsIncludingProvider:(bool)arg1 formatter:(id)arg2;
- (unsigned long long)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(bool)arg2;
- (id)initWithGeoMapItemAsCurrentLocation:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(bool)arg2;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceHolder;
- (id)metadata;
- (id)name;
- (bool)openInMapsWithLaunchOptions:(id)arg1;
- (void)openInMapsWithLaunchOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)phoneNumber;
- (id)place;
- (id)placemark;
- (id)reservationInfo;
- (id)reviewsProviderDisplayName;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setIsTransitItem:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setReservationInfo:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sharingURL;
- (id)thumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 annotationView:(id)arg2;
- (id)timeZone;
- (void)updateTransitInfoWithMapItem:(id)arg1;
- (id)url;
- (id)urlRepresentation;
- (id)yelpID;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)businessCategories;

@end
