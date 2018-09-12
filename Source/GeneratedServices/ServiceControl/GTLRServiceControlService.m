// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Control API (servicecontrol/v1)
// Description:
//   Google Service Control provides control plane functionality to managed
//   services, such as logging, monitoring, and status checks.
// Documentation:
//   https://cloud.google.com/service-control/

#import "GTLRServiceControl.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeServiceControl              = @"https://www.googleapis.com/auth/servicecontrol";
NSString * const kGTLRAuthScopeServiceControlCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRServiceControlService
//

@implementation GTLRServiceControlService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://servicecontrol.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
