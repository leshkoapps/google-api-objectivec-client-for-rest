// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Classroom API (classroom/v1)
// Description:
//   Manages classes, rosters, and invitations in Google Classroom.
// Documentation:
//   https://developers.google.com/classroom/

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
// Authorization scopes

/**
 *  Authorization scope: View and manage announcements in Google Classroom
 *
 *  Value "https://www.googleapis.com/auth/classroom.announcements"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomAnnouncements;
/**
 *  Authorization scope: View announcements in Google Classroom
 *
 *  Value "https://www.googleapis.com/auth/classroom.announcements.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomAnnouncementsReadonly;
/**
 *  Authorization scope: Manage your Google Classroom classes
 *
 *  Value "https://www.googleapis.com/auth/classroom.courses"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomCourses;
/**
 *  Authorization scope: View your Google Classroom classes
 *
 *  Value "https://www.googleapis.com/auth/classroom.courses.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomCoursesReadonly;
/**
 *  Authorization scope: Manage your course work and view your grades in Google
 *  Classroom
 *
 *  Value "https://www.googleapis.com/auth/classroom.coursework.me"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomCourseworkMe;
/**
 *  Authorization scope: View your course work and grades in Google Classroom
 *
 *  Value "https://www.googleapis.com/auth/classroom.coursework.me.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomCourseworkMeReadonly;
/**
 *  Authorization scope: Manage course work and grades for students in the
 *  Google Classroom classes you teach and view the course work and grades for
 *  classes you administer
 *
 *  Value "https://www.googleapis.com/auth/classroom.coursework.students"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomCourseworkStudents;
/**
 *  Authorization scope: View course work and grades for students in the Google
 *  Classroom classes you teach or administer
 *
 *  Value "https://www.googleapis.com/auth/classroom.coursework.students.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomCourseworkStudentsReadonly;
/**
 *  Authorization scope: View your Google Classroom guardians
 *
 *  Value "https://www.googleapis.com/auth/classroom.guardianlinks.me.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomGuardianlinksMeReadonly;
/**
 *  Authorization scope: View and manage guardians for students in your Google
 *  Classroom classes
 *
 *  Value "https://www.googleapis.com/auth/classroom.guardianlinks.students"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomGuardianlinksStudents;
/**
 *  Authorization scope: View guardians for students in your Google Classroom
 *  classes
 *
 *  Value "https://www.googleapis.com/auth/classroom.guardianlinks.students.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomGuardianlinksStudentsReadonly;
/**
 *  Authorization scope: View the email addresses of people in your classes
 *
 *  Value "https://www.googleapis.com/auth/classroom.profile.emails"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomProfileEmails;
/**
 *  Authorization scope: View the profile photos of people in your classes
 *
 *  Value "https://www.googleapis.com/auth/classroom.profile.photos"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomProfilePhotos;
/**
 *  Authorization scope: Receive notifications about your Google Classroom data
 *
 *  Value "https://www.googleapis.com/auth/classroom.push-notifications"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomPushNotifications;
/**
 *  Authorization scope: Manage your Google Classroom class rosters
 *
 *  Value "https://www.googleapis.com/auth/classroom.rosters"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomRosters;
/**
 *  Authorization scope: View your Google Classroom class rosters
 *
 *  Value "https://www.googleapis.com/auth/classroom.rosters.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomRostersReadonly;
/**
 *  Authorization scope: View your course work and grades in Google Classroom
 *
 *  Value "https://www.googleapis.com/auth/classroom.student-submissions.me.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomStudentSubmissionsMeReadonly;
/**
 *  Authorization scope: View course work and grades for students in the Google
 *  Classroom classes you teach or administer
 *
 *  Value "https://www.googleapis.com/auth/classroom.student-submissions.students.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeClassroomStudentSubmissionsStudentsReadonly;

// ----------------------------------------------------------------------------
//   GTLRClassroomService
//

/**
 *  Service for executing Google Classroom API queries.
 *
 *  Manages classes, rosters, and invitations in Google Classroom.
 */
@interface GTLRClassroomService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRClassroomQuery.h. The query can the be sent with GTLRService's execute
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
