// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Ad Experience Report API (adexperiencereport/v1)
// Description:
//   View Ad Experience Report data, and get a list of sites that have a
//   significant number of annoying ads.
// Documentation:
//   https://developers.google.com/ad-experience-report/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAdExperienceReport_PlatformSummary;
@class GTLRAdExperienceReport_SiteSummaryResponse;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRAdExperienceReport_PlatformSummary.betterAdsStatus

/**
 *  Failing.
 *
 *  Value: "FAILING"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_BetterAdsStatus_Failing;
/**
 *  Passing.
 *
 *  Value: "PASSING"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_BetterAdsStatus_Passing;
/**
 *  Not reviewed.
 *
 *  Value: "UNKNOWN"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_BetterAdsStatus_Unknown;
/**
 *  Warning.
 *
 *  Value: "WARNING"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_BetterAdsStatus_Warning;

// ----------------------------------------------------------------------------
// GTLRAdExperienceReport_PlatformSummary.filterStatus

/**
 *  Ad filtering is off.
 *
 *  Value: "OFF"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_FilterStatus_Off;
/**
 *  Ad filtering is on.
 *
 *  Value: "ON"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_FilterStatus_On;
/**
 *  Ad filtering is paused.
 *
 *  Value: "PAUSED"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_FilterStatus_Paused;
/**
 *  Ad filtering is pending.
 *
 *  Value: "PENDING"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_FilterStatus_Pending;
/**
 *  N/A.
 *
 *  Value: "UNKNOWN"
 */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_FilterStatus_Unknown;

// ----------------------------------------------------------------------------
// GTLRAdExperienceReport_PlatformSummary.region

/** Value: "REGION_A" */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_Region_RegionA;
/** Value: "REGION_B" */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_Region_RegionB;
/** Value: "REGION_C" */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_Region_RegionC;
/** Value: "REGION_UNKNOWN" */
GTLR_EXTERN NSString * const kGTLRAdExperienceReport_PlatformSummary_Region_RegionUnknown;

/**
 *  Summary of the ad experience rating of a site for a specific platform.
 */
@interface GTLRAdExperienceReport_PlatformSummary : GTLRObject

/**
 *  The status of the site reviewed for the Better Ads Standards.
 *
 *  Likely values:
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_BetterAdsStatus_Failing
 *        Failing. (Value: "FAILING")
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_BetterAdsStatus_Passing
 *        Passing. (Value: "PASSING")
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_BetterAdsStatus_Unknown
 *        Not reviewed. (Value: "UNKNOWN")
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_BetterAdsStatus_Warning
 *        Warning. (Value: "WARNING")
 */
@property(nonatomic, copy, nullable) NSString *betterAdsStatus;

/** The date on which ad filtering begins. */
@property(nonatomic, strong, nullable) GTLRDateTime *enforcementTime;

/**
 *  The ad filtering status of the site.
 *
 *  Likely values:
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_FilterStatus_Off Ad
 *        filtering is off. (Value: "OFF")
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_FilterStatus_On Ad
 *        filtering is on. (Value: "ON")
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_FilterStatus_Paused Ad
 *        filtering is paused. (Value: "PAUSED")
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_FilterStatus_Pending Ad
 *        filtering is pending. (Value: "PENDING")
 *    @arg @c kGTLRAdExperienceReport_PlatformSummary_FilterStatus_Unknown N/A.
 *        (Value: "UNKNOWN")
 */
@property(nonatomic, copy, nullable) NSString *filterStatus;

/** The last time that the site changed status. */
@property(nonatomic, strong, nullable) GTLRDateTime *lastChangeTime;

/** The assigned regions for the site and platform. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *region;

/** A link that leads to a full ad experience report. */
@property(nonatomic, copy, nullable) NSString *reportUrl;

/**
 *  Whether the site is currently under review.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *underReview;

@end


/**
 *  Response message for GetSiteSummary.
 *  Do not confuse with same message in google.chrome.abusiveexperiencereport.v1
 */
@interface GTLRAdExperienceReport_SiteSummaryResponse : GTLRObject

/** Summary for the desktop review of the site. */
@property(nonatomic, strong, nullable) GTLRAdExperienceReport_PlatformSummary *desktopSummary;

/** Summary for the mobile review of the site. */
@property(nonatomic, strong, nullable) GTLRAdExperienceReport_PlatformSummary *mobileSummary;

/** The name of the site reviewed. */
@property(nonatomic, copy, nullable) NSString *reviewedSite;

@end


/**
 *  Response message for ListViolatingSites.
 */
@interface GTLRAdExperienceReport_ViolatingSitesResponse : GTLRObject

/** A list of summaries of violating sites. */
@property(nonatomic, strong, nullable) NSArray<GTLRAdExperienceReport_SiteSummaryResponse *> *violatingSites;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
