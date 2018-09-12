// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   PageSpeed Insights API (pagespeedonline/v4)
// Description:
//   Analyzes the performance of a web page and provides tailored suggestions to
//   make that page faster.
// Documentation:
//   https://developers.google.com/speed/docs/insights/v4/getting-started

#import "GTLRPagespeedonlineQuery.h"

#import "GTLRPagespeedonlineObjects.h"

// ----------------------------------------------------------------------------
// Constants

// strategy
NSString * const kGTLRPagespeedonlineStrategyDesktop = @"desktop";
NSString * const kGTLRPagespeedonlineStrategyMobile  = @"mobile";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRPagespeedonlineQuery

@dynamic fields;

@end

@implementation GTLRPagespeedonlineQuery_PagespeedapiRunpagespeed

@dynamic filterThirdPartyResources, locale, rule, screenshot, snapshots,
         strategy, url, utmCampaign, utmSource;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"filterThirdPartyResources" : @"filter_third_party_resources",
    @"utmCampaign" : @"utm_campaign",
    @"utmSource" : @"utm_source"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rule" : [NSString class]
  };
  return map;
}

+ (instancetype)queryWithUrl:(NSString *)url {
  NSString *pathURITemplate = @"runPagespeed";
  GTLRPagespeedonlineQuery_PagespeedapiRunpagespeed *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.url = url;
  query.expectedObjectClass = [GTLRPagespeedonline_PagespeedApiPagespeedResponseV4 class];
  query.loggingName = @"pagespeedonline.pagespeedapi.runpagespeed";
  return query;
}

@end
