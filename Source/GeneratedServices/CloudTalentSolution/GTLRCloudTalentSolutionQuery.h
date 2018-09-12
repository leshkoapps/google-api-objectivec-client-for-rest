// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Talent Solution API (jobs/v3)
// Description:
//   Cloud Talent Solution provides the capability to create, read, update, and
//   delete job postings, as well as search jobs based on keywords and filters.
// Documentation:
//   https://cloud.google.com/talent-solution/job-search/docs/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudTalentSolution_BatchDeleteJobsRequest;
@class GTLRCloudTalentSolution_CreateCompanyRequest;
@class GTLRCloudTalentSolution_CreateJobRequest;
@class GTLRCloudTalentSolution_SearchJobsRequest;
@class GTLRCloudTalentSolution_UpdateCompanyRequest;
@class GTLRCloudTalentSolution_UpdateJobRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// jobView

/** Value: "JOB_VIEW_FULL" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionJobViewJobViewFull;
/** Value: "JOB_VIEW_ID_ONLY" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionJobViewJobViewIdOnly;
/** Value: "JOB_VIEW_MINIMAL" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionJobViewJobViewMinimal;
/** Value: "JOB_VIEW_SMALL" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionJobViewJobViewSmall;
/** Value: "JOB_VIEW_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionJobViewJobViewUnspecified;

// ----------------------------------------------------------------------------
// scope

/** Value: "COMPLETION_SCOPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionScopeCompletionScopeUnspecified;
/** Value: "PUBLIC" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionScopePublic;
/** Value: "TENANT" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionScopeTenant;

// ----------------------------------------------------------------------------
// type

/** Value: "COMBINED" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionTypeCombined;
/** Value: "COMPANY_NAME" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionTypeCompanyName;
/** Value: "COMPLETION_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionTypeCompletionTypeUnspecified;
/** Value: "JOB_TITLE" */
GTLR_EXTERN NSString * const kGTLRCloudTalentSolutionTypeJobTitle;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Cloud Talent Solution query classes.
 */
@interface GTLRCloudTalentSolutionQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a new company entity.
 *
 *  Method: jobs.projects.companies.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsCompaniesCreate : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsCompaniesCreateWithObject:parent:]

/**
 *  Required.
 *  Resource name of the project under which the company is created.
 *  The format is "projects/{project_id}", for example,
 *  "projects/api-test-project".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Company.
 *
 *  Creates a new company entity.
 *
 *  @param object The @c GTLRCloudTalentSolution_CreateCompanyRequest to include
 *    in the query.
 *  @param parent Required.
 *    Resource name of the project under which the company is created.
 *    The format is "projects/{project_id}", for example,
 *    "projects/api-test-project".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsCompaniesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudTalentSolution_CreateCompanyRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes specified company.
 *
 *  Method: jobs.projects.companies.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsCompaniesDelete : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsCompaniesDeleteWithname:]

/**
 *  Required.
 *  The resource name of the company to be deleted.
 *  The format is "projects/{project_id}/companies/{company_id}", for example,
 *  "projects/api-test-project/companies/foo".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Empty.
 *
 *  Deletes specified company.
 *
 *  @param name Required.
 *    The resource name of the company to be deleted.
 *    The format is "projects/{project_id}/companies/{company_id}", for example,
 *    "projects/api-test-project/companies/foo".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsCompaniesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Retrieves specified company.
 *
 *  Method: jobs.projects.companies.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsCompaniesGet : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsCompaniesGetWithname:]

/**
 *  Required.
 *  The resource name of the company to be retrieved.
 *  The format is "projects/{project_id}/companies/{company_id}", for example,
 *  "projects/api-test-project/companies/foo".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Company.
 *
 *  Retrieves specified company.
 *
 *  @param name Required.
 *    The resource name of the company to be retrieved.
 *    The format is "projects/{project_id}/companies/{company_id}", for example,
 *    "projects/api-test-project/companies/foo".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsCompaniesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists all companies associated with the service account.
 *
 *  Method: jobs.projects.companies.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsCompaniesList : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsCompaniesListWithparent:]

/**
 *  Optional.
 *  The maximum number of companies to be returned, at most 100.
 *  Default is 100 if a non-positive number is provided.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional.
 *  The starting indicator from which to return results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required.
 *  Resource name of the project under which the company is created.
 *  The format is "projects/{project_id}", for example,
 *  "projects/api-test-project".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Optional.
 *  Set to true if the companies requested must have open jobs.
 *  Defaults to false.
 *  If true, at most page_size of companies are fetched, among which
 *  only those with open jobs are returned.
 */
@property(nonatomic, assign) BOOL requireOpenJobs;

/**
 *  Fetches a @c GTLRCloudTalentSolution_ListCompaniesResponse.
 *
 *  Lists all companies associated with the service account.
 *
 *  @param parent Required.
 *    Resource name of the project under which the company is created.
 *    The format is "projects/{project_id}", for example,
 *    "projects/api-test-project".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsCompaniesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates specified company. Company names can't be updated. To update a
 *  company name, delete the company and all jobs associated with it, and only
 *  then re-create them.
 *
 *  Method: jobs.projects.companies.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsCompaniesPatch : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsCompaniesPatchWithObject:name:]

/**
 *  Required during company update.
 *  The resource name for a company. This is generated by the service when a
 *  company is created.
 *  The format is "projects/{project_id}/companies/{company_id}", for example,
 *  "projects/api-test-project/companies/foo".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Company.
 *
 *  Updates specified company. Company names can't be updated. To update a
 *  company name, delete the company and all jobs associated with it, and only
 *  then re-create them.
 *
 *  @param object The @c GTLRCloudTalentSolution_UpdateCompanyRequest to include
 *    in the query.
 *  @param name Required during company update.
 *    The resource name for a company. This is generated by the service when a
 *    company is created.
 *    The format is "projects/{project_id}/companies/{company_id}", for example,
 *    "projects/api-test-project/companies/foo".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsCompaniesPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudTalentSolution_UpdateCompanyRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Completes the specified prefix with keyword suggestions.
 *  Intended for use by a job search auto-complete search box.
 *
 *  Method: jobs.projects.complete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsComplete : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsCompleteWithname:]

/**
 *  Optional.
 *  If provided, restricts completion to specified company.
 *  The format is "projects/{project_id}/companies/{company_id}", for example,
 *  "projects/api-test-project/companies/foo".
 */
@property(nonatomic, copy, nullable) NSString *companyName;

/**
 *  Required.
 *  The language of the query. This is
 *  the BCP-47 language code, such as "en-US" or "sr-Latn".
 *  For more information, see
 *  [Tags for Identifying Languages](https://tools.ietf.org/html/bcp47).
 *  For CompletionType.JOB_TITLE type, only open jobs with same
 *  language_code are returned.
 *  For CompletionType.COMPANY_NAME type,
 *  only companies having open jobs with same language_code are
 *  returned.
 *  For CompletionType.COMBINED type, only open jobs with same
 *  language_code or companies having open jobs with same
 *  language_code are returned.
 *  The maximum number of allowed characters is 255.
 */
@property(nonatomic, copy, nullable) NSString *languageCode;

/**
 *  Required.
 *  Resource name of project the completion is performed within.
 *  The format is "projects/{project_id}", for example,
 *  "projects/api-test-project".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required.
 *  Completion result count.
 *  The maximum allowed page size is 10.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Required.
 *  The query used to generate suggestions.
 *  The maximum number of allowed characters is 255.
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Optional.
 *  The scope of the completion. The defaults is CompletionScope.PUBLIC.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudTalentSolutionScopeCompletionScopeUnspecified Value
 *        "COMPLETION_SCOPE_UNSPECIFIED"
 *    @arg @c kGTLRCloudTalentSolutionScopeTenant Value "TENANT"
 *    @arg @c kGTLRCloudTalentSolutionScopePublic Value "PUBLIC"
 */
@property(nonatomic, copy, nullable) NSString *scope;

/**
 *  Optional.
 *  The completion topic. The default is CompletionType.COMBINED.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudTalentSolutionTypeCompletionTypeUnspecified Value
 *        "COMPLETION_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRCloudTalentSolutionTypeJobTitle Value "JOB_TITLE"
 *    @arg @c kGTLRCloudTalentSolutionTypeCompanyName Value "COMPANY_NAME"
 *    @arg @c kGTLRCloudTalentSolutionTypeCombined Value "COMBINED"
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  Fetches a @c GTLRCloudTalentSolution_CompleteQueryResponse.
 *
 *  Completes the specified prefix with keyword suggestions.
 *  Intended for use by a job search auto-complete search box.
 *
 *  @param name Required.
 *    Resource name of project the completion is performed within.
 *    The format is "projects/{project_id}", for example,
 *    "projects/api-test-project".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsComplete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Deletes a list of Jobs by filter.
 *
 *  Method: jobs.projects.jobs.batchDelete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsJobsBatchDelete : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsJobsBatchDeleteWithObject:parent:]

/**
 *  Required.
 *  The resource name of the project under which the job is created.
 *  The format is "projects/{project_id}", for example,
 *  "projects/api-test-project".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Empty.
 *
 *  Deletes a list of Jobs by filter.
 *
 *  @param object The @c GTLRCloudTalentSolution_BatchDeleteJobsRequest to
 *    include in the query.
 *  @param parent Required.
 *    The resource name of the project under which the job is created.
 *    The format is "projects/{project_id}", for example,
 *    "projects/api-test-project".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsJobsBatchDelete
 */
+ (instancetype)queryWithObject:(GTLRCloudTalentSolution_BatchDeleteJobsRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a new job.
 *  Typically, the job becomes searchable within 10 seconds, but it may take
 *  up to 5 minutes.
 *
 *  Method: jobs.projects.jobs.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsJobsCreate : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsJobsCreateWithObject:parent:]

/**
 *  Required.
 *  The resource name of the project under which the job is created.
 *  The format is "projects/{project_id}", for example,
 *  "projects/api-test-project".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Job.
 *
 *  Creates a new job.
 *  Typically, the job becomes searchable within 10 seconds, but it may take
 *  up to 5 minutes.
 *
 *  @param object The @c GTLRCloudTalentSolution_CreateJobRequest to include in
 *    the query.
 *  @param parent Required.
 *    The resource name of the project under which the job is created.
 *    The format is "projects/{project_id}", for example,
 *    "projects/api-test-project".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsJobsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudTalentSolution_CreateJobRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes the specified job.
 *  Typically, the job becomes unsearchable within 10 seconds, but it may take
 *  up to 5 minutes.
 *
 *  Method: jobs.projects.jobs.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsJobsDelete : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsJobsDeleteWithname:]

/**
 *  Required.
 *  The resource name of the job to be deleted.
 *  The format is "projects/{project_id}/jobs/{job_id}",
 *  for example, "projects/api-test-project/jobs/1234".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Empty.
 *
 *  Deletes the specified job.
 *  Typically, the job becomes unsearchable within 10 seconds, but it may take
 *  up to 5 minutes.
 *
 *  @param name Required.
 *    The resource name of the job to be deleted.
 *    The format is "projects/{project_id}/jobs/{job_id}",
 *    for example, "projects/api-test-project/jobs/1234".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsJobsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Retrieves the specified job, whose status is OPEN or recently EXPIRED
 *  within the last 90 days.
 *
 *  Method: jobs.projects.jobs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsJobsGet : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsJobsGetWithname:]

/**
 *  Required.
 *  The resource name of the job to retrieve.
 *  The format is "projects/{project_id}/jobs/{job_id}",
 *  for example, "projects/api-test-project/jobs/1234".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Job.
 *
 *  Retrieves the specified job, whose status is OPEN or recently EXPIRED
 *  within the last 90 days.
 *
 *  @param name Required.
 *    The resource name of the job to retrieve.
 *    The format is "projects/{project_id}/jobs/{job_id}",
 *    for example, "projects/api-test-project/jobs/1234".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsJobsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists jobs by filter.
 *
 *  Method: jobs.projects.jobs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsJobsList : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsJobsListWithparent:]

/**
 *  Required.
 *  The filter string specifies the jobs to be enumerated.
 *  Supported operator: =, AND
 *  The fields eligible for filtering are:
 *  * `companyName` (Required)
 *  * `requisitionId` (Optional)
 *  Sample Query:
 *  * companyName = "projects/api-test-project/companies/123"
 *  * companyName = "projects/api-test-project/companies/123" AND requisitionId
 *  = "req-1"
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Optional.
 *  The desired job attributes returned for jobs in the
 *  search response. Defaults to JobView.JOB_VIEW_FULL if no value is
 *  specified.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudTalentSolutionJobViewJobViewUnspecified Value
 *        "JOB_VIEW_UNSPECIFIED"
 *    @arg @c kGTLRCloudTalentSolutionJobViewJobViewIdOnly Value
 *        "JOB_VIEW_ID_ONLY"
 *    @arg @c kGTLRCloudTalentSolutionJobViewJobViewMinimal Value
 *        "JOB_VIEW_MINIMAL"
 *    @arg @c kGTLRCloudTalentSolutionJobViewJobViewSmall Value "JOB_VIEW_SMALL"
 *    @arg @c kGTLRCloudTalentSolutionJobViewJobViewFull Value "JOB_VIEW_FULL"
 */
@property(nonatomic, copy, nullable) NSString *jobView;

/**
 *  Optional.
 *  The maximum number of jobs to be returned per page of results.
 *  If job_view is set to JobView.JOB_VIEW_ID_ONLY, the maximum allowed
 *  page size is 1000. Otherwise, the maximum allowed page size is 100.
 *  Default is 100 if empty or a number < 1 is specified.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional.
 *  The starting point of a query result.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required.
 *  The resource name of the project under which the job is created.
 *  The format is "projects/{project_id}", for example,
 *  "projects/api-test-project".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTalentSolution_ListJobsResponse.
 *
 *  Lists jobs by filter.
 *
 *  @param parent Required.
 *    The resource name of the project under which the job is created.
 *    The format is "projects/{project_id}", for example,
 *    "projects/api-test-project".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsJobsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates specified job.
 *  Typically, updated contents become visible in search results within 10
 *  seconds, but it may take up to 5 minutes.
 *
 *  Method: jobs.projects.jobs.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsJobsPatch : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsJobsPatchWithObject:name:]

/**
 *  Required during job update.
 *  The resource name for the job. This is generated by the service when a
 *  job is created.
 *  The format is "projects/{project_id}/jobs/{job_id}",
 *  for example, "projects/api-test-project/jobs/1234".
 *  Use of this field in job queries and API calls is preferred over the use of
 *  requisition_id since this value is unique.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudTalentSolution_Job.
 *
 *  Updates specified job.
 *  Typically, updated contents become visible in search results within 10
 *  seconds, but it may take up to 5 minutes.
 *
 *  @param object The @c GTLRCloudTalentSolution_UpdateJobRequest to include in
 *    the query.
 *  @param name Required during job update.
 *    The resource name for the job. This is generated by the service when a
 *    job is created.
 *    The format is "projects/{project_id}/jobs/{job_id}",
 *    for example, "projects/api-test-project/jobs/1234".
 *    Use of this field in job queries and API calls is preferred over the use
 *    of
 *    requisition_id since this value is unique.
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsJobsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudTalentSolution_UpdateJobRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Searches for jobs using the provided SearchJobsRequest.
 *  This call constrains the visibility of jobs
 *  present in the database, and only returns jobs that the caller has
 *  permission to search against.
 *
 *  Method: jobs.projects.jobs.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsJobsSearch : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsJobsSearchWithObject:parent:]

/**
 *  Required.
 *  The resource name of the project to search within.
 *  The format is "projects/{project_id}", for example,
 *  "projects/api-test-project".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTalentSolution_SearchJobsResponse.
 *
 *  Searches for jobs using the provided SearchJobsRequest.
 *  This call constrains the visibility of jobs
 *  present in the database, and only returns jobs that the caller has
 *  permission to search against.
 *
 *  @param object The @c GTLRCloudTalentSolution_SearchJobsRequest to include in
 *    the query.
 *  @param parent Required.
 *    The resource name of the project to search within.
 *    The format is "projects/{project_id}", for example,
 *    "projects/api-test-project".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsJobsSearch
 */
+ (instancetype)queryWithObject:(GTLRCloudTalentSolution_SearchJobsRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Searches for jobs using the provided SearchJobsRequest.
 *  This API call is intended for the use case of targeting passive job
 *  seekers (for example, job seekers who have signed up to receive email
 *  alerts about potential job opportunities), and has different algorithmic
 *  adjustments that are targeted to passive job seekers.
 *  This call constrains the visibility of jobs
 *  present in the database, and only returns jobs the caller has
 *  permission to search against.
 *
 *  Method: jobs.projects.jobs.searchForAlert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudTalentSolution
 *    @c kGTLRAuthScopeCloudTalentSolutionCloudPlatform
 */
@interface GTLRCloudTalentSolutionQuery_ProjectsJobsSearchForAlert : GTLRCloudTalentSolutionQuery
// Previous library name was
//   +[GTLQueryCloudTalentSolution queryForProjectsJobsSearchForAlertWithObject:parent:]

/**
 *  Required.
 *  The resource name of the project to search within.
 *  The format is "projects/{project_id}", for example,
 *  "projects/api-test-project".
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudTalentSolution_SearchJobsResponse.
 *
 *  Searches for jobs using the provided SearchJobsRequest.
 *  This API call is intended for the use case of targeting passive job
 *  seekers (for example, job seekers who have signed up to receive email
 *  alerts about potential job opportunities), and has different algorithmic
 *  adjustments that are targeted to passive job seekers.
 *  This call constrains the visibility of jobs
 *  present in the database, and only returns jobs the caller has
 *  permission to search against.
 *
 *  @param object The @c GTLRCloudTalentSolution_SearchJobsRequest to include in
 *    the query.
 *  @param parent Required.
 *    The resource name of the project to search within.
 *    The format is "projects/{project_id}", for example,
 *    "projects/api-test-project".
 *
 *  @return GTLRCloudTalentSolutionQuery_ProjectsJobsSearchForAlert
 */
+ (instancetype)queryWithObject:(GTLRCloudTalentSolution_SearchJobsRequest *)object
                         parent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
