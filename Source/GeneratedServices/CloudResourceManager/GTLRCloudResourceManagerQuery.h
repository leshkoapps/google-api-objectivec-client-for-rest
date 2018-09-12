// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Resource Manager API (cloudresourcemanager/v2)
// Description:
//   The Google Cloud Resource Manager API provides methods for creating,
//   reading, and updating project metadata.
// Documentation:
//   https://cloud.google.com/resource-manager

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudResourceManager_Folder;
@class GTLRCloudResourceManager_GetIamPolicyRequest;
@class GTLRCloudResourceManager_MoveFolderRequest;
@class GTLRCloudResourceManager_SearchFoldersRequest;
@class GTLRCloudResourceManager_SetIamPolicyRequest;
@class GTLRCloudResourceManager_TestIamPermissionsRequest;
@class GTLRCloudResourceManager_UndeleteFolderRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Resource Manager query classes.
 */
@interface GTLRCloudResourceManagerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a Folder in the resource hierarchy.
 *  Returns an Operation which can be used to track the progress of the
 *  folder creation workflow.
 *  Upon success the Operation.response field will be populated with the
 *  created Folder.
 *  In order to succeed, the addition of this new Folder must not violate
 *  the Folder naming, height or fanout constraints.
 *  + The Folder's display_name must be distinct from all other Folder's that
 *  share its parent.
 *  + The addition of the Folder must not cause the active Folder hierarchy
 *  to exceed a height of 4. Note, the full active + deleted Folder hierarchy
 *  is allowed to reach a height of 8; this provides additional headroom when
 *  moving folders that contain deleted folders.
 *  + The addition of the Folder must not cause the total number of Folders
 *  under its parent to exceed 100.
 *  If the operation fails due to a folder constraint violation, some errors
 *  may be returned by the CreateFolder request, with status code
 *  FAILED_PRECONDITION and an error description. Other folder constraint
 *  violations will be communicated in the Operation, with the specific
 *  PreconditionFailure returned via the details list in the Operation.error
 *  field.
 *  The caller must have `resourcemanager.folders.create` permission on the
 *  identified parent.
 *
 *  Method: cloudresourcemanager.folders.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_FoldersCreate : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersCreateWithObject:]

/**
 *  The resource name of the new Folder's parent.
 *  Must be of the form `folders/{folder_id}` or `organizations/{org_id}`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudResourceManager_Operation.
 *
 *  Creates a Folder in the resource hierarchy.
 *  Returns an Operation which can be used to track the progress of the
 *  folder creation workflow.
 *  Upon success the Operation.response field will be populated with the
 *  created Folder.
 *  In order to succeed, the addition of this new Folder must not violate
 *  the Folder naming, height or fanout constraints.
 *  + The Folder's display_name must be distinct from all other Folder's that
 *  share its parent.
 *  + The addition of the Folder must not cause the active Folder hierarchy
 *  to exceed a height of 4. Note, the full active + deleted Folder hierarchy
 *  is allowed to reach a height of 8; this provides additional headroom when
 *  moving folders that contain deleted folders.
 *  + The addition of the Folder must not cause the total number of Folders
 *  under its parent to exceed 100.
 *  If the operation fails due to a folder constraint violation, some errors
 *  may be returned by the CreateFolder request, with status code
 *  FAILED_PRECONDITION and an error description. Other folder constraint
 *  violations will be communicated in the Operation, with the specific
 *  PreconditionFailure returned via the details list in the Operation.error
 *  field.
 *  The caller must have `resourcemanager.folders.create` permission on the
 *  identified parent.
 *
 *  @param object The @c GTLRCloudResourceManager_Folder to include in the
 *    query.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_Folder *)object;

@end

/**
 *  Requests deletion of a Folder. The Folder is moved into the
 *  DELETE_REQUESTED state
 *  immediately, and is deleted approximately 30 days later. This method may
 *  only be called on an empty Folder in the
 *  ACTIVE state, where a Folder is empty if
 *  it doesn't contain any Folders or Projects in the
 *  ACTIVE state.
 *  The caller must have `resourcemanager.folders.delete` permission on the
 *  identified folder.
 *
 *  Method: cloudresourcemanager.folders.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_FoldersDelete : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersDeleteWithname:]

/**
 *  the resource name of the Folder to be deleted.
 *  Must be of the form `folders/{folder_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudResourceManager_Folder.
 *
 *  Requests deletion of a Folder. The Folder is moved into the
 *  DELETE_REQUESTED state
 *  immediately, and is deleted approximately 30 days later. This method may
 *  only be called on an empty Folder in the
 *  ACTIVE state, where a Folder is empty if
 *  it doesn't contain any Folders or Projects in the
 *  ACTIVE state.
 *  The caller must have `resourcemanager.folders.delete` permission on the
 *  identified folder.
 *
 *  @param name the resource name of the Folder to be deleted.
 *    Must be of the form `folders/{folder_id}`.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Retrieves a Folder identified by the supplied resource name.
 *  Valid Folder resource names have the format `folders/{folder_id}`
 *  (for example, `folders/1234`).
 *  The caller must have `resourcemanager.folders.get` permission on the
 *  identified folder.
 *
 *  Method: cloudresourcemanager.folders.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_FoldersGet : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersGetWithname:]

/**
 *  The resource name of the Folder to retrieve.
 *  Must be of the form `folders/{folder_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudResourceManager_Folder.
 *
 *  Retrieves a Folder identified by the supplied resource name.
 *  Valid Folder resource names have the format `folders/{folder_id}`
 *  (for example, `folders/1234`).
 *  The caller must have `resourcemanager.folders.get` permission on the
 *  identified folder.
 *
 *  @param name The resource name of the Folder to retrieve.
 *    Must be of the form `folders/{folder_id}`.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a Folder. The returned policy may be
 *  empty if no such policy or resource exists. The `resource` field should
 *  be the Folder's resource name, e.g. "folders/1234".
 *  The caller must have `resourcemanager.folders.getIamPolicy` permission
 *  on the identified folder.
 *
 *  Method: cloudresourcemanager.folders.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_FoldersGetIamPolicy : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudResourceManager_Policy.
 *
 *  Gets the access control policy for a Folder. The returned policy may be
 *  empty if no such policy or resource exists. The `resource` field should
 *  be the Folder's resource name, e.g. "folders/1234".
 *  The caller must have `resourcemanager.folders.getIamPolicy` permission
 *  on the identified folder.
 *
 *  @param object The @c GTLRCloudResourceManager_GetIamPolicyRequest to include
 *    in the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Lists the Folders that are direct descendants of supplied parent resource.
 *  List provides a strongly consistent view of the Folders underneath
 *  the specified parent resource.
 *  List returns Folders sorted based upon the (ascending) lexical ordering
 *  of their display_name.
 *  The caller must have `resourcemanager.folders.list` permission on the
 *  identified parent.
 *
 *  Method: cloudresourcemanager.folders.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_FoldersList : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersList]

/**
 *  The maximum number of Folders to return in the response.
 *  This field is optional.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to `ListFolders`
 *  that indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The resource name of the Organization or Folder whose Folders are
 *  being listed.
 *  Must be of the form `folders/{folder_id}` or `organizations/{org_id}`.
 *  Access to this method is controlled by checking the
 *  `resourcemanager.folders.list` permission on the `parent`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Controls whether Folders in the
 *  DELETE_REQUESTED
 *  state should be returned. Defaults to false. This field is optional.
 */
@property(nonatomic, assign) BOOL showDeleted;

/**
 *  Fetches a @c GTLRCloudResourceManager_ListFoldersResponse.
 *
 *  Lists the Folders that are direct descendants of supplied parent resource.
 *  List provides a strongly consistent view of the Folders underneath
 *  the specified parent resource.
 *  List returns Folders sorted based upon the (ascending) lexical ordering
 *  of their display_name.
 *  The caller must have `resourcemanager.folders.list` permission on the
 *  identified parent.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Moves a Folder under a new resource parent.
 *  Returns an Operation which can be used to track the progress of the
 *  folder move workflow.
 *  Upon success the Operation.response field will be populated with the
 *  moved Folder.
 *  Upon failure, a FolderOperationError categorizing the failure cause will
 *  be returned - if the failure occurs synchronously then the
 *  FolderOperationError will be returned via the Status.details field
 *  and if it occurs asynchronously then the FolderOperation will be returned
 *  via the the Operation.error field.
 *  In addition, the Operation.metadata field will be populated with a
 *  FolderOperation message as an aid to stateless clients.
 *  Folder moves will be rejected if they violate either the naming, height
 *  or fanout constraints described in the
 *  CreateFolder documentation.
 *  The caller must have `resourcemanager.folders.move` permission on the
 *  folder's current and proposed new parent.
 *
 *  Method: cloudresourcemanager.folders.move
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_FoldersMove : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersMoveWithObject:name:]

/**
 *  The resource name of the Folder to move.
 *  Must be of the form folders/{folder_id}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudResourceManager_Operation.
 *
 *  Moves a Folder under a new resource parent.
 *  Returns an Operation which can be used to track the progress of the
 *  folder move workflow.
 *  Upon success the Operation.response field will be populated with the
 *  moved Folder.
 *  Upon failure, a FolderOperationError categorizing the failure cause will
 *  be returned - if the failure occurs synchronously then the
 *  FolderOperationError will be returned via the Status.details field
 *  and if it occurs asynchronously then the FolderOperation will be returned
 *  via the the Operation.error field.
 *  In addition, the Operation.metadata field will be populated with a
 *  FolderOperation message as an aid to stateless clients.
 *  Folder moves will be rejected if they violate either the naming, height
 *  or fanout constraints described in the
 *  CreateFolder documentation.
 *  The caller must have `resourcemanager.folders.move` permission on the
 *  folder's current and proposed new parent.
 *
 *  @param object The @c GTLRCloudResourceManager_MoveFolderRequest to include
 *    in the query.
 *  @param name The resource name of the Folder to move.
 *    Must be of the form folders/{folder_id}
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersMove
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_MoveFolderRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Updates a Folder, changing its display_name.
 *  Changes to the folder display_name will be rejected if they violate either
 *  the display_name formatting rules or naming constraints described in
 *  the CreateFolder documentation.
 *  The Folder's display name must start and end with a letter or digit,
 *  may contain letters, digits, spaces, hyphens and underscores and can be
 *  no longer than 30 characters. This is captured by the regular expression:
 *  [\\p{L}\\p{N}]([\\p{L}\\p{N}_- ]{0,28}[\\p{L}\\p{N}])?.
 *  The caller must have `resourcemanager.folders.update` permission on the
 *  identified folder.
 *  If the update fails due to the unique name constraint then a
 *  PreconditionFailure explaining this violation will be returned
 *  in the Status.details field.
 *
 *  Method: cloudresourcemanager.folders.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_FoldersPatch : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersPatchWithObject:name:]

/**
 *  Output only. The resource name of the Folder.
 *  Its format is `folders/{folder_id}`, for example: "folders/1234".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fields to be updated.
 *  Only the `display_name` can be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudResourceManager_Folder.
 *
 *  Updates a Folder, changing its display_name.
 *  Changes to the folder display_name will be rejected if they violate either
 *  the display_name formatting rules or naming constraints described in
 *  the CreateFolder documentation.
 *  The Folder's display name must start and end with a letter or digit,
 *  may contain letters, digits, spaces, hyphens and underscores and can be
 *  no longer than 30 characters. This is captured by the regular expression:
 *  [\\p{L}\\p{N}]([\\p{L}\\p{N}_- ]{0,28}[\\p{L}\\p{N}])?.
 *  The caller must have `resourcemanager.folders.update` permission on the
 *  identified folder.
 *  If the update fails due to the unique name constraint then a
 *  PreconditionFailure explaining this violation will be returned
 *  in the Status.details field.
 *
 *  @param object The @c GTLRCloudResourceManager_Folder to include in the
 *    query.
 *  @param name Output only. The resource name of the Folder.
 *    Its format is `folders/{folder_id}`, for example: "folders/1234".
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_Folder *)object
                           name:(NSString *)name;

@end

/**
 *  Search for folders that match specific filter criteria.
 *  Search provides an eventually consistent view of the folders a user has
 *  access to which meet the specified filter criteria.
 *  This will only return folders on which the caller has the
 *  permission `resourcemanager.folders.get`.
 *
 *  Method: cloudresourcemanager.folders.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_FoldersSearch : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersSearchWithObject:]

/**
 *  Fetches a @c GTLRCloudResourceManager_SearchFoldersResponse.
 *
 *  Search for folders that match specific filter criteria.
 *  Search provides an eventually consistent view of the folders a user has
 *  access to which meet the specified filter criteria.
 *  This will only return folders on which the caller has the
 *  permission `resourcemanager.folders.get`.
 *
 *  @param object The @c GTLRCloudResourceManager_SearchFoldersRequest to
 *    include in the query.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersSearch
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_SearchFoldersRequest *)object;

@end

/**
 *  Sets the access control policy on a Folder, replacing any existing policy.
 *  The `resource` field should be the Folder's resource name, e.g.
 *  "folders/1234".
 *  The caller must have `resourcemanager.folders.setIamPolicy` permission
 *  on the identified folder.
 *
 *  Method: cloudresourcemanager.folders.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_FoldersSetIamPolicy : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudResourceManager_Policy.
 *
 *  Sets the access control policy on a Folder, replacing any existing policy.
 *  The `resource` field should be the Folder's resource name, e.g.
 *  "folders/1234".
 *  The caller must have `resourcemanager.folders.setIamPolicy` permission
 *  on the identified folder.
 *
 *  @param object The @c GTLRCloudResourceManager_SetIamPolicyRequest to include
 *    in the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified Folder.
 *  The `resource` field should be the Folder's resource name,
 *  e.g. "folders/1234".
 *  There are no permissions required for making this API call.
 *
 *  Method: cloudresourcemanager.folders.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_FoldersTestIamPermissions : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudResourceManager_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified Folder.
 *  The `resource` field should be the Folder's resource name,
 *  e.g. "folders/1234".
 *  There are no permissions required for making this API call.
 *
 *  @param object The @c GTLRCloudResourceManager_TestIamPermissionsRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Cancels the deletion request for a Folder. This method may only be
 *  called on a Folder in the
 *  DELETE_REQUESTED state.
 *  In order to succeed, the Folder's parent must be in the
 *  ACTIVE state.
 *  In addition, reintroducing the folder into the tree must not violate
 *  folder naming, height and fanout constraints described in the
 *  CreateFolder documentation.
 *  The caller must have `resourcemanager.folders.undelete` permission on the
 *  identified folder.
 *
 *  Method: cloudresourcemanager.folders.undelete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_FoldersUndelete : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForFoldersUndeleteWithObject:name:]

/**
 *  The resource name of the Folder to undelete.
 *  Must be of the form `folders/{folder_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudResourceManager_Folder.
 *
 *  Cancels the deletion request for a Folder. This method may only be
 *  called on a Folder in the
 *  DELETE_REQUESTED state.
 *  In order to succeed, the Folder's parent must be in the
 *  ACTIVE state.
 *  In addition, reintroducing the folder into the tree must not violate
 *  folder naming, height and fanout constraints described in the
 *  CreateFolder documentation.
 *  The caller must have `resourcemanager.folders.undelete` permission on the
 *  identified folder.
 *
 *  @param object The @c GTLRCloudResourceManager_UndeleteFolderRequest to
 *    include in the query.
 *  @param name The resource name of the Folder to undelete.
 *    Must be of the form `folders/{folder_id}`.
 *
 *  @return GTLRCloudResourceManagerQuery_FoldersUndelete
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_UndeleteFolderRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: cloudresourcemanager.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_OperationsGet : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudResourceManager_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudResourceManagerQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
