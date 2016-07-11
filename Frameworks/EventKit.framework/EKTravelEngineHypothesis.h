/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngineHypothesis : NSObject <NSSecureCoding> {
    NSDate * _aggressiveDepartureDate;
    double  _aggressiveTravelTime;
    NSDate * _conservativeDepartureDate;
    double  _conservativeTravelTime;
    unsigned long long  _currentTrafficDensity;
    double  _estimatedTravelTime;
    NSString * _routeName;
    NSDate * _suggestedDepartureDate;
    bool  _supportsLiveTraffic;
    NSString * _trafficDensityDescription;
    int  _transportType;
    long long  _travelState;
}

@property (nonatomic, retain) NSDate *aggressiveDepartureDate;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic, retain) NSDate *conservativeDepartureDate;
@property (nonatomic) double conservativeTravelTime;
@property (nonatomic) unsigned long long currentTrafficDensity;
@property (nonatomic, readonly) NSDate *effectiveDepartureDate;
@property (nonatomic, readonly) double effectiveTravelTime;
@property (nonatomic) double estimatedTravelTime;
@property (nonatomic, retain) NSString *routeName;
@property (nonatomic, retain) NSDate *suggestedDepartureDate;
@property (nonatomic) bool supportsLiveTraffic;
@property (nonatomic, retain) NSString *trafficDensityDescription;
@property (nonatomic) int transportType;
@property (nonatomic) long long travelState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_shouldResolveEffectiveDepartureDateAndTravelTimeToConservativeDepartureDateAndTravelTime;
- (bool)_shouldResolveEffectiveDepartureDateToConservativeDepartureDate;
- (bool)_shouldResolveEffectiveTravelTimeToConservativeTravelTime;
- (id)aggressiveDepartureDate;
- (double)aggressiveTravelTime;
- (id)conservativeDepartureDate;
- (double)conservativeTravelTime;
- (unsigned long long)currentTrafficDensity;
- (id)description;
- (id)effectiveDepartureDate;
- (double)effectiveTravelTime;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedTravelTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKGEORouteHypothesis:(id)arg1;
- (id)initWithGEORouteHypothesis:(id)arg1;
- (id)initWithSyntheticGEORouteHypothesis:(id)arg1;
- (id)routeName;
- (void)setAggressiveDepartureDate:(id)arg1;
- (void)setAggressiveTravelTime:(double)arg1;
- (void)setConservativeDepartureDate:(id)arg1;
- (void)setConservativeTravelTime:(double)arg1;
- (void)setCurrentTrafficDensity:(unsigned long long)arg1;
- (void)setEstimatedTravelTime:(double)arg1;
- (void)setRouteName:(id)arg1;
- (void)setSuggestedDepartureDate:(id)arg1;
- (void)setSupportsLiveTraffic:(bool)arg1;
- (void)setTrafficDensityDescription:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelState:(long long)arg1;
- (id)suggestedDepartureDate;
- (bool)supportsLiveTraffic;
- (id)trafficDensityDescription;
- (int)transportType;
- (long long)travelState;

@end