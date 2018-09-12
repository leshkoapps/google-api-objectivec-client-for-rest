// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Key Management Service (KMS) API (cloudkms/v1)
// Description:
//   Cloud KMS allows you to keep cryptographic keys in one central cloud
//   service, for direct use by other cloud resources and applications. With
//   Cloud KMS you are the ultimate custodian of your data, you can manage
//   encryption in the cloud the same way you do on-premises, and you have a
//   provable and monitorable root of trust over your data.
// Documentation:
//   https://cloud.google.com/kms/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scope

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudKMSCloudPlatform;

// ----------------------------------------------------------------------------
//   GTLRCloudKMSService
//

/**
 *  Service for executing Cloud Key Management Service (KMS) API queries.
 *
 *  Cloud KMS allows you to keep cryptographic keys in one central cloud
 *  service, for direct use by other cloud resources and applications. With
 *  Cloud KMS you are the ultimate custodian of your data, you can manage
 *  encryption in the cloud the same way you do on-premises, and you have a
 *  provable and monitorable root of trust over your data.
 */
@interface GTLRCloudKMSService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCloudKMSQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
