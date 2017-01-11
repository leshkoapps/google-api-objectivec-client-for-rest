// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Container Builder API (cloudbuild/v1)
// Description:
//   Builds container images in the cloud.
// Documentation:
//   https://cloud.google.com/container-builder/docs/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudBuild_Build;
@class GTLRCloudBuild_BuildOptions;
@class GTLRCloudBuild_BuildStep;
@class GTLRCloudBuild_BuildTrigger;
@class GTLRCloudBuild_BuiltImage;
@class GTLRCloudBuild_FileHashes;
@class GTLRCloudBuild_Hash;
@class GTLRCloudBuild_Operation;
@class GTLRCloudBuild_Operation_Metadata;
@class GTLRCloudBuild_Operation_Response;
@class GTLRCloudBuild_RepoSource;
@class GTLRCloudBuild_Results;
@class GTLRCloudBuild_Source;
@class GTLRCloudBuild_SourceProvenance;
@class GTLRCloudBuild_SourceProvenance_FileHashes;
@class GTLRCloudBuild_Status;
@class GTLRCloudBuild_Status_Details_Item;
@class GTLRCloudBuild_StorageSource;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudBuild_Build.status

/**
 *  Build was canceled by a user.
 *
 *  Value: "CANCELLED"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Build_Status_Cancelled;
/**
 *  Build failed to complete successfully.
 *
 *  Value: "FAILURE"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Build_Status_Failure;
/**
 *  Build failed due to an internal cause.
 *
 *  Value: "INTERNAL_ERROR"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Build_Status_InternalError;
/**
 *  Build is queued; work has not yet begun.
 *
 *  Value: "QUEUED"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Build_Status_Queued;
/**
 *  Status of the build is unknown.
 *
 *  Value: "STATUS_UNKNOWN"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Build_Status_StatusUnknown;
/**
 *  Build finished successfully.
 *
 *  Value: "SUCCESS"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Build_Status_Success;
/**
 *  Build took longer than was allowed.
 *
 *  Value: "TIMEOUT"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Build_Status_Timeout;
/**
 *  Build is being executed.
 *
 *  Value: "WORKING"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Build_Status_Working;

// ----------------------------------------------------------------------------
// GTLRCloudBuild_BuildOptions.requestedVerifyOption

/**
 *  Not a verifiable build. (default)
 *
 *  Value: "NOT_VERIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_BuildOptions_RequestedVerifyOption_NotVerified;
/**
 *  Verified build.
 *
 *  Value: "VERIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_BuildOptions_RequestedVerifyOption_Verified;

// ----------------------------------------------------------------------------
// GTLRCloudBuild_BuildOptions.sourceProvenanceHash

/** Value: "NONE" */
GTLR_EXTERN NSString * const kGTLRCloudBuild_BuildOptions_SourceProvenanceHash_None;
/** Value: "SHA256" */
GTLR_EXTERN NSString * const kGTLRCloudBuild_BuildOptions_SourceProvenanceHash_Sha256;

// ----------------------------------------------------------------------------
// GTLRCloudBuild_Hash.type

/**
 *  No hash requested.
 *
 *  Value: "NONE"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Hash_Type_None;
/**
 *  Use a sha256 hash.
 *
 *  Value: "SHA256"
 */
GTLR_EXTERN NSString * const kGTLRCloudBuild_Hash_Type_Sha256;

/**
 *  A build resource in the Container Builder API.
 *  At a high level, a Build describes where to find source code, how to build
 *  it (for example, the builder image to run on the source), and what tag to
 *  apply to the built image when it is pushed to Google Container Registry.
 *  Fields can include the following variables which will be expanded when the
 *  build is created:
 *  - $PROJECT_ID: the project ID of the build.
 *  - $BUILD_ID: the autogenerated ID of the build.
 *  - $REPO_NAME: the source repository name specified by RepoSource.
 *  - $BRANCH_NAME: the branch name specified by RepoSource.
 *  - $TAG_NAME: the tag name specified by RepoSource.
 *  - $REVISION_ID or $COMMIT_SHA: the commit SHA specified by RepoSource or
 *  resolved from the specified branch or tag.
 */
@interface GTLRCloudBuild_Build : GTLRObject

/**
 *  The ID of the BuildTrigger that triggered this build, if it was
 *  triggered automatically.
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *buildTriggerId;

/**
 *  Time at which the request to create the build was received.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Time at which execution of the build was finished.
 *  The difference between finish_time and start_time is the duration of the
 *  build's execution.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRDateTime *finishTime;

/**
 *  Unique identifier of the build.
 *  \@OutputOnly
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  A list of images to be pushed upon the successful completion of all build
 *  steps.
 *  The images will be pushed using the builder service account's credentials.
 *  The digests of the pushed images will be stored in the Build resource's
 *  results field.
 *  If any of the images fail to be pushed, the build is marked FAILURE.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *images;

/**
 *  Google Cloud Storage bucket where logs should be written (see
 *  [Bucket Name
 *  Requirements](https://cloud.google.com/storage/docs/bucket-naming#requirements)).
 *  Logs file names will be of the format `${logs_bucket}/log-${build_id}.txt`.
 */
@property(nonatomic, copy, nullable) NSString *logsBucket;

/**
 *  URL to logs for this build in Google Cloud Logging.
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *logUrl;

/** Special options for this build. */
@property(nonatomic, strong, nullable) GTLRCloudBuild_BuildOptions *options;

/**
 *  ID of the project.
 *  \@OutputOnly.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Results of the build.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_Results *results;

/** Describes where to find the source files to build. */
@property(nonatomic, strong, nullable) GTLRCloudBuild_Source *source;

/**
 *  A permanent fixed identifier for source.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_SourceProvenance *sourceProvenance;

/**
 *  Time at which execution of the build was started.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/**
 *  Status of the build.
 *  \@OutputOnly
 *
 *  Likely values:
 *    @arg @c kGTLRCloudBuild_Build_Status_Cancelled Build was canceled by a
 *        user. (Value: "CANCELLED")
 *    @arg @c kGTLRCloudBuild_Build_Status_Failure Build failed to complete
 *        successfully. (Value: "FAILURE")
 *    @arg @c kGTLRCloudBuild_Build_Status_InternalError Build failed due to an
 *        internal cause. (Value: "INTERNAL_ERROR")
 *    @arg @c kGTLRCloudBuild_Build_Status_Queued Build is queued; work has not
 *        yet begun. (Value: "QUEUED")
 *    @arg @c kGTLRCloudBuild_Build_Status_StatusUnknown Status of the build is
 *        unknown. (Value: "STATUS_UNKNOWN")
 *    @arg @c kGTLRCloudBuild_Build_Status_Success Build finished successfully.
 *        (Value: "SUCCESS")
 *    @arg @c kGTLRCloudBuild_Build_Status_Timeout Build took longer than was
 *        allowed. (Value: "TIMEOUT")
 *    @arg @c kGTLRCloudBuild_Build_Status_Working Build is being executed.
 *        (Value: "WORKING")
 */
@property(nonatomic, copy, nullable) NSString *status;

/**
 *  Customer-readable message about the current status.
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *statusDetail;

/** Describes the operations to be performed on the workspace. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBuild_BuildStep *> *steps;

/**
 *  Amount of time that this build should be allowed to run, to second
 *  granularity. If this amount of time elapses, work on the build will cease
 *  and the build status will be TIMEOUT.
 *  Default time is ten minutes.
 */
@property(nonatomic, strong, nullable) GTLRDuration *timeout;

@end


/**
 *  Metadata for build operations.
 */
@interface GTLRCloudBuild_BuildOperationMetadata : GTLRObject

/** The build that the operation is tracking. */
@property(nonatomic, strong, nullable) GTLRCloudBuild_Build *build;

@end


/**
 *  Optional arguments to enable specific features of builds.
 */
@interface GTLRCloudBuild_BuildOptions : GTLRObject

/**
 *  Requested verifiability options.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudBuild_BuildOptions_RequestedVerifyOption_NotVerified Not
 *        a verifiable build. (default) (Value: "NOT_VERIFIED")
 *    @arg @c kGTLRCloudBuild_BuildOptions_RequestedVerifyOption_Verified
 *        Verified build. (Value: "VERIFIED")
 */
@property(nonatomic, copy, nullable) NSString *requestedVerifyOption;

/** Requested hash for SourceProvenance. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *sourceProvenanceHash;

@end


/**
 *  BuildStep describes a step to perform in the build pipeline.
 */
@interface GTLRCloudBuild_BuildStep : GTLRObject

/**
 *  A list of arguments that will be presented to the step when it is started.
 *  If the image used to run the step's container has an entrypoint, these args
 *  will be used as arguments to that entrypoint. If the image does not define
 *  an entrypoint, the first element in args will be used as the entrypoint,
 *  and the remainder will be used as arguments.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *args;

/**
 *  Working directory (relative to project source root) to use when running
 *  this operation's container.
 */
@property(nonatomic, copy, nullable) NSString *dir;

/**
 *  Optional entrypoint to be used instead of the build step image's default
 *  If unset, the image's default will be used.
 */
@property(nonatomic, copy, nullable) NSString *entrypoint;

/**
 *  A list of environment variable definitions to be used when running a step.
 *  The elements are of the form "KEY=VALUE" for the environment variable "KEY"
 *  being given the value "VALUE".
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *env;

/**
 *  Optional unique identifier for this build step, used in wait_for to
 *  reference this build step as a dependency.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The name of the container image that will run this particular build step.
 *  If the image is already available in the host's Docker daemon's cache, it
 *  will be run directly. If not, the host will attempt to pull the image
 *  first, using the builder service account's credentials if necessary.
 *  The Docker daemon's cache will already have the latest versions of all of
 *  the officially supported build steps
 *  (https://github.com/GoogleCloudPlatform/cloud-builders). The Docker daemon
 *  will also have cached many of the layers for some popular images, like
 *  "ubuntu", "debian", but they will be refreshed at the time you attempt to
 *  use them.
 *  If you built an image in a previous build step, it will be stored in the
 *  host's Docker daemon's cache and is available to use as the name for a
 *  later build step.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The ID(s) of the step(s) that this build step depends on.
 *  This build step will not start until all the build steps in wait_for
 *  have completed successfully. If wait_for is empty, this build step will
 *  start when all previous build steps in the Build.Steps list have completed
 *  successfully.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *waitFor;

@end


/**
 *  Configuration for an automated build in response to source repository
 *  changes.
 */
@interface GTLRCloudBuild_BuildTrigger : GTLRObject

/** Contents of the build template. */
@property(nonatomic, strong, nullable) GTLRCloudBuild_Build *build;

/**
 *  Time when the trigger was created.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Human-readable description of this trigger.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  If true, the trigger will never result in a build.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *disabled;

/**
 *  Path, from the source root, to a file whose contents is used for the
 *  template.
 */
@property(nonatomic, copy, nullable) NSString *filename;

/**
 *  Unique identifier of the trigger.
 *  \@OutputOnly
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Template describing the types of source changes to trigger a build.
 *  Branch and tag names in trigger templates are interpreted as regular
 *  expressions. Any branch or tag change that matches that regular expression
 *  will trigger a build.
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_RepoSource *triggerTemplate;

@end


/**
 *  BuiltImage describes an image built by the pipeline.
 */
@interface GTLRCloudBuild_BuiltImage : GTLRObject

/** Docker Registry 2.0 digest. */
@property(nonatomic, copy, nullable) NSString *digest;

/**
 *  Name used to push the container image to Google Container Registry, as
 *  presented to `docker push`.
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Request to cancel an ongoing build.
 */
@interface GTLRCloudBuild_CancelBuildRequest : GTLRObject
@end


/**
 *  The request message for Operations.CancelOperation.
 */
@interface GTLRCloudBuild_CancelOperationRequest : GTLRObject
@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudBuild_Empty : GTLRObject
@end


/**
 *  Container message for hashes of byte content of files, used in
 *  SourceProvenance messages to verify integrity of source input to the build.
 */
@interface GTLRCloudBuild_FileHashes : GTLRObject

/** Collection of file hashes. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBuild_Hash *> *fileHash;

@end


/**
 *  Container message for hash values.
 */
@interface GTLRCloudBuild_Hash : GTLRObject

/**
 *  The type of hash that was performed.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudBuild_Hash_Type_None No hash requested. (Value: "NONE")
 *    @arg @c kGTLRCloudBuild_Hash_Type_Sha256 Use a sha256 hash. (Value:
 *        "SHA256")
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  The hash value.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  Response including listed builds.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "builds" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudBuild_ListBuildsResponse : GTLRCollectionObject

/**
 *  Builds will be sorted by create_time, descending.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBuild_Build *> *builds;

/** Token to receive the next page of results. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response containing existing BuildTriggers.
 */
@interface GTLRCloudBuild_ListBuildTriggersResponse : GTLRObject

/** BuildTriggers for the project, sorted by create_time descending. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBuild_BuildTrigger *> *triggers;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudBuild_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBuild_Operation *> *operations;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudBuild_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If true, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudBuild_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should have the format of `operations/some/unique/name`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudBuild_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudBuild_Operation_Response : GTLRObject
@end


/**
 *  RepoSource describes the location of the source in a Google Cloud Source
 *  Repository.
 */
@interface GTLRCloudBuild_RepoSource : GTLRObject

/** Name of the branch to build. */
@property(nonatomic, copy, nullable) NSString *branchName;

/** Explicit commit SHA to build. */
@property(nonatomic, copy, nullable) NSString *commitSha;

/**
 *  ID of the project that owns the repo. If omitted, the project ID requesting
 *  the build is assumed.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

/** Name of the repo. If omitted, the name "default" is assumed. */
@property(nonatomic, copy, nullable) NSString *repoName;

/** Name of the tag to build. */
@property(nonatomic, copy, nullable) NSString *tagName;

@end


/**
 *  Results describes the artifacts created by the build pipeline.
 */
@interface GTLRCloudBuild_Results : GTLRObject

/**
 *  List of build step digests, in order corresponding to build step indices.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *buildStepImages;

/** Images that were built as a part of the build. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBuild_BuiltImage *> *images;

@end


/**
 *  Source describes the location of the source in a supported storage
 *  service.
 */
@interface GTLRCloudBuild_Source : GTLRObject

/** If provided, get source from this location in a Cloud Repo. */
@property(nonatomic, strong, nullable) GTLRCloudBuild_RepoSource *repoSource;

/**
 *  If provided, get the source from this location in in Google Cloud
 *  Storage.
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_StorageSource *storageSource;

@end


/**
 *  Provenance of the source. Ways to find the original source, or verify that
 *  some source was used for this build.
 */
@interface GTLRCloudBuild_SourceProvenance : GTLRObject

/**
 *  Hash(es) of the build source, which can be used to verify that the original
 *  source integrity was maintained in the build. Note that FileHashes will
 *  only be populated if BuildOptions has requested a SourceProvenanceHash.
 *  The keys to this map are file paths used as build source and the values
 *  contain the hash values for those files.
 *  If the build source came in a single package such as a gzipped tarfile
 *  (.tar.gz), the FileHash will be for the single path to that file.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_SourceProvenance_FileHashes *fileHashes;

/**
 *  A copy of the build's source.repo_source, if exists, with any
 *  revisions resolved.
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_RepoSource *resolvedRepoSource;

/**
 *  A copy of the build's source.storage_source, if exists, with any
 *  generations resolved.
 */
@property(nonatomic, strong, nullable) GTLRCloudBuild_StorageSource *resolvedStorageSource;

@end


/**
 *  Hash(es) of the build source, which can be used to verify that the original
 *  source integrity was maintained in the build. Note that FileHashes will
 *  only be populated if BuildOptions has requested a SourceProvenanceHash.
 *  The keys to this map are file paths used as build source and the values
 *  contain the hash values for those files.
 *  If the build source came in a single package such as a gzipped tarfile
 *  (.tar.gz), the FileHash will be for the single path to that file.
 *  \@OutputOnly
 *
 *  @note This class is documented as having more properties of
 *        GTLRCloudBuild_FileHashes. Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudBuild_SourceProvenance_FileHashes : GTLRObject
@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different
 *  programming environments, including REST APIs and RPC APIs. It is used by
 *  [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message,
 *  and error details. The error code should be an enum value of
 *  google.rpc.Code, but it may accept additional error codes if needed. The
 *  error message should be a developer-facing English message that helps
 *  developers *understand* and *resolve* the error. If a localized user-facing
 *  error message is needed, put the localized message in the error details or
 *  localize it in the client. The optional error details may contain arbitrary
 *  information about the error. There is a predefined set of error detail types
 *  in the package `google.rpc` which can be used for common error conditions.
 *  # Language mapping
 *  The `Status` message is the logical representation of the error model, but
 *  it
 *  is not necessarily the actual wire format. When the `Status` message is
 *  exposed in different client libraries and different wire protocols, it can
 *  be
 *  mapped differently. For example, it will likely be mapped to some exceptions
 *  in Java, but more likely mapped to some error codes in C.
 *  # Other uses
 *  The error model and the `Status` message can be used in a variety of
 *  environments, either with or without APIs, to provide a
 *  consistent developer experience across different environments.
 *  Example uses of this error model include:
 *  - Partial errors. If a service needs to return partial errors to the client,
 *  it may embed the `Status` in the normal response to indicate the partial
 *  errors.
 *  - Workflow errors. A typical workflow has multiple steps. Each step may
 *  have a `Status` message for error reporting purpose.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRCloudBuild_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There will be a
 *  common set of message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBuild_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudBuild_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudBuild_Status_Details_Item : GTLRObject
@end


/**
 *  StorageSource describes the location of the source in an archive file in
 *  Google Cloud Storage.
 */
@interface GTLRCloudBuild_StorageSource : GTLRObject

/**
 *  Google Cloud Storage bucket containing source (see
 *  [Bucket Name
 *  Requirements](https://cloud.google.com/storage/docs/bucket-naming#requirements)).
 */
@property(nonatomic, copy, nullable) NSString *bucket;

/**
 *  Google Cloud Storage generation for the object. If the generation is
 *  omitted, the latest generation will be used.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *generation;

/**
 *  Google Cloud Storage object containing source.
 *  This object must be a gzipped archive file (.tar.gz) containing source to
 *  build.
 */
@property(nonatomic, copy, nullable) NSString *object;

@end

NS_ASSUME_NONNULL_END
