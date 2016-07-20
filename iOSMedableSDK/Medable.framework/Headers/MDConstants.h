//
//  MDConstants.h
//  iOSMedableSDK
//

//  Copyright (c) 2014 Medable. All rights reserved.
//


#pragma mark - Environment
extern NSString* const kConfigurationKey;
extern NSString* const kEnvironmentsFileName;
extern NSString* const kBaseURLKey;
extern NSString* const kAPIPrefixKey;
extern NSString* const kProtocolKey;
extern NSString* const kOrgKey;
extern NSString* const kOrgsKey;

#pragma mark - APIClient
extern NSString* const kMedableClientKey;
extern NSString* const kMedableKey;
extern NSString* const kOrganizationKey;
extern NSString* const kClientKeyKey;
extern NSString* const kMedableCSRFKey;
extern NSString* const kAcceptHeaderKey;
extern NSString* const kAcceptApplicationJsonKey;
extern NSString* const kAcceptLanguageKey;
extern NSString* const kAuthKey;
extern NSString* const kLoginKey;
extern NSString* const kLogoutKey;
extern NSString* const kRequestPasswordResetKey;
extern NSString* const kResetPasswordKey;
extern NSString* const kUpdatePasswordKey;
extern NSString* const kResendVerificationKey;
extern NSString* const kResultKey;
extern NSString* const kFaultKey;
extern NSString* const kIdKey;
extern NSString* const kBundlesKey;
extern NSString* const kBundleVersionKey;
extern NSString* const kBundleUrlKey;
extern NSString* const kRegisterKey;
extern NSString* const kPasswordKey;
extern NSString* const kCurrentKey;
extern NSString* const kLocationKey;
extern NSString* const kNotificationTokenKey;
extern NSString* const kSpecialty;
extern NSString* const kOrganization;
extern NSString* const kNotificationsKey;
extern NSString* const kPatientConnectedKey;
extern NSString* const kLocationNameKey;
extern NSString* const kSingleUseKey;
extern NSString* const kVerificationTokenKey;
extern NSString* const kRoleKey;
extern NSString* const kRolesKey;
extern NSString* const kRoleProvider;
extern NSString* const kBodyKey;
extern NSString* const kDocumentsKey;
extern NSString* const kLimitKey;
extern NSString* const kSkipKey;
extern NSString* const kSortKey;
extern NSString* const kWhereKey;
extern NSString* const kShowKey;
extern NSString* const kRangeStartKey;
extern NSString* const kRangeEndKey;
extern NSString* const kRangeFieldKey;
extern NSString* const kPreviousKey;
extern NSString* const kAscendingKey;
extern NSString* const kAccountRolesKey;
extern NSString* const kTokenKey;
extern NSString* const kHttpGetKey;
extern NSString* const kHttpPostKey;
extern NSString* const kHttpPutKey;
extern NSString* const kHttpDeleteKey;
extern NSString* const kHttpPatchKey;
extern NSString* const kParticipantsKey;
extern NSString* const kFilterCallerKey;
extern NSString* const kFilterCallerOnUrlParameter;
extern NSString* const kInvitationsUrlParameter;
extern NSString* const kSentInvitationsUrlParameter;
extern NSString* const kHasPatientParameter;
extern NSString* const kFavoritesKey;
extern NSString* const kTargetKey;
extern NSString* const kTargetsKey;
extern NSString* const kTargetedKey;
extern NSString* const kMimeTypeImageJpeg;
extern NSString* const kMimeTypeImagePng;
extern NSString* const kMimeTypeApplicationOctet;
extern NSString* const kTransferKey;
extern NSString* const kConnectKey;
extern NSString* const kAccessLevelKey;
extern NSString* const kIncludeKey;
extern NSString* const kAllKey;
extern NSString* const kExpandKey;
extern NSString* const kPathsKey;
extern NSString* const kSearchKey;
extern NSString* const kPatientKey;
extern NSString* const kFileKey;
extern NSString* const kOriginalKey;
extern NSString* const kOverlayKey;
extern NSString* const k__post___Key;
extern NSString* const k__body___Key;
extern NSString* const kAttachmentsKey;
extern NSString* const kLastBundleVersion;
extern NSString* const kLastSchemasVersion;
extern NSString* const kDataKey;
extern NSString* const kHasMoreKey;
extern NSString* const kExpiresAtKey;
extern NSString* const kApplyKey;
extern NSString* const kLockedKey;
extern NSString* const kMeKey;
extern NSString* const kStartingAfterKey;
extern NSString* const kEndingBeforeKey;
extern NSString* const kGreaterThanOperator;
extern NSString* const kGreaterThanOrEqualOperator;
extern NSString* const kLessThanOperator;
extern NSString* const kLessThanOrEqualOperator;
extern NSString* const kInOperator;
extern NSString* const kAndOperator;
extern NSString* const kOrOperator;
extern NSString* const kRegexOperator;
extern NSString* const kAllOperator;
extern NSString* const kSizeOperator;
extern NSString* const kElementMatchOperator;

#pragma mark - Bundle
extern NSString* const kVersionKey;
extern NSString* const kLocaleKey;
extern NSString* const kFaultsKey;
extern NSString* const kDiagnosisKey;
extern NSString* const kDiagnosesKey;
extern NSString* const kTreatmentsKey;
extern NSString* const kStringsKey;
extern NSString* const kExclusiveKey;

#pragma mark - Tutorial
extern NSString* const kTutorialProgressFileName;
extern NSString* const kScreensKey;
extern NSString* const kActionsKey;
extern NSString* const kTutorialsKey;
extern NSString* const kTutorialStepRoleFilter;
extern NSString* const kTutorialStepSpotRect;
extern NSString* const kTutorialStepHoleShape;
extern NSString* const kTutorialStepTayAnywhereDismiss;
extern NSString* const kTutorialStepText;
extern NSString* const kTutorialStepSelectorString;
extern NSString* const kTutorialStepDisplayed;
extern NSString* const kTutorialStepChained;

#pragma mark - Custom Classes
extern NSString* const kCreateKey;
extern NSString* const kReadKey;
extern NSString* const kUpdateKey;
extern NSString* const kDeleteKey;
extern NSString* const kPullKey;
extern NSString* const kPushKey;
extern NSString* const kDateOnlyKey;
extern NSString* const kDefinitionKey;
extern NSString* const kShareChainKey;
extern NSString* const kTaggableKey;
extern NSString* const kAllowConnections;
extern NSString* const kAllowKey;
extern NSString* const kDefaultAclKey;
extern NSString* const kAllowsTransfersKey;
extern NSString* const kCreateAclKey;
extern NSString* const kFeedConfigKey;
extern NSString* const kContextVersionKey;
extern NSString* const kExtensionKey;
extern NSString* const kPropertiesKey;
extern NSString* const kProcessorsKey;
extern NSString* const kCreatableKey;
extern NSString* const kReadableKey;
extern NSString* const kOptionalKey;
extern NSString* const kSearchableKey;
extern NSString* const kWritableKey;
extern NSString* const kRemovableKey;
extern NSString* const kPathKey;
extern NSString* const kETagKey;
extern NSString* const kAclKey;
extern NSString* const kDependenciesKey;
extern NSString* const kArrayKey;
extern NSString* const kVirtualKey;
extern NSString* const kValidatorsKey;
extern NSString* const kDocKey;
extern NSString* const kPrimitiveBaseKey;
extern NSString* const kPrimitiveBooleanKey;
extern NSString* const kPrimitiveAnyKey;
extern NSString* const kPrimitiveDateKey;
extern NSString* const kPrimitiveDocumentKey;
extern NSString* const kPrimitiveFileKey;
extern NSString* const kPrimitiveNumberKey;
extern NSString* const kPrimitiveObjectIdKey;
extern NSString* const kPrimitiveReferenceKey;
extern NSString* const kPrimitiveStringKey;
extern NSString* const kPrimitiveSetKey;
extern NSString* const kCUnderscorePrefix;
extern NSString* const kActiveKey;
extern NSString* const kPostTypeKey;
extern NSString* const kPostTypeKey;
extern NSString* const kMinItemsKey;
extern NSString* const kMaxItemsKey;
extern NSString* const kAllowCommentsKey;
extern NSString* const kMinCommentItemsKey;
extern NSString* const kArchiveKey;
extern NSString* const kArchivedKey;
extern NSString* const kArchiveDateKey;
extern NSString* const kArchiverKey;
extern NSString* const kTrackViewsKey;
extern NSString* const kEditableKey;
extern NSString* const kDeletableKey;
extern NSString* const kContextReadAclKey;
extern NSString* const kPostCreateAclKey;
extern NSString* const kPostInstanceAclKey;
extern NSString* const kMinRequiredKey;
extern NSString* const kMaxAllowedKey;
extern NSString* const kCanPullKey;
extern NSString* const kWriteOnCreateKey;
extern NSString* const kCanPushKey;
extern NSString* const kMaxShiftKey;
extern NSString* const kFiltersKey;
extern NSString* const kPublicKey;
extern NSString* const kArrayKey;
extern NSString* const kUniqueValuesKey;
extern NSString* const kMinItemsKey;
extern NSString* const kMaxItemsKey;
extern NSString* const kTrimKey;
extern NSString* const kLowercaseKey;
extern NSString* const kUppercaseKey;
extern NSString* const kExtensibleKey;
extern NSString* const kExtendedKey;
extern NSString* const kCustomKey;

#pragma mark - Contexts
extern NSString* const kAccountContext;
extern NSString* const kConversationContext;
extern NSString* const kTeamContext;
extern NSString* const kOrgContext;
extern NSString* const kPatientContext;

extern NSString* const kPluralAccountContext;
extern NSString* const kPluralConversationContext;
extern NSString* const kPluralTeamContext;
extern NSString* const kPluralOrgContext;
extern NSString* const kPluralPatientContext;

#pragma mark - Native Ids
extern NSString* const kNativeIdAccount;
extern NSString* const kNativeIdConversation;
extern NSString* const kNativeIdOrg;
extern NSString* const kNativeIdSchema;
extern NSString* const kNativeIdScript;
extern NSString* const kNativeIdObject;
extern NSString* const kNativeIdPatientFile;
extern NSString* const kNativeIdTeam;

#pragma mark - Account
extern NSString* const kStatusKey;
extern NSString* const kLoggedInKey;
extern NSString* const kFirstNameKey;
extern NSString* const kLastNameKey;
extern NSString* const kMobileKey;
extern NSString* const kPhoneKey;
extern NSString* const kGenderKey;
extern NSString* const kShortMalePlaceholder;
extern NSString* const kShortFemalePlaceholder;
extern NSString* const kShortOtherGenderPlaceholder;
extern NSString* const kMaleString;
extern NSString* const kFemaleString;
extern NSString* const kUnspecifiedString;
extern NSString* const kAgeKey;
extern NSString* const kDOBKey;
extern NSString* const kProfileKey;
extern NSString* const kSpecialtyKey;
extern NSString* const kAffiliationKey;
extern NSString* const kNPIKey;
extern NSString* const kStateKey;
extern NSString* const kNumberKey;
extern NSString* const kLicenseKey;
extern NSString* const kUnverifiedKey;
extern NSString* const kVerifiedKey;
extern NSString* const kVerifyingKey;
extern NSString* const kBirthdayKey;
extern NSString* const kInvitationRequiredKey;
extern NSString* const kActivationRequiredKey;
extern NSString* const kConnectionAccessKey;
extern NSString* const kCreatedKey;
extern NSString* const kUpdatedKey;
extern NSString* const kUpdaterKey;
extern NSString* const kFavoriteKey;
extern NSString* const kKeyKey;
extern NSString* const kSharedKey;
extern NSString* const kTeamsKey;
extern NSString* const kActivateKey;
extern NSString* const kVerifyKey;
extern NSString* const kPublicKey;
extern NSString* const kProviderKey;
extern NSString* const kProviderKey;
extern NSString* const kAdministratorKey;
extern NSString* const kDeveloperKey;
extern NSString* const kAdminKey;
extern NSString* const kFractionCompletedKey;
extern NSString* const kContentTypeFieldKey;

#pragma mark - Data Encryption
extern NSString* const kClientKeyVirtual;
extern NSString* const kFingerprintKey;
extern NSString* const kSecretKey;

#pragma mark - Legal
extern NSString* const kLegalKey;
extern NSString* const kLegalTargetNoneKey;
extern NSString* const kLegalTargetAllKey;
extern NSString* const kClientKey;

#pragma mark - Server errors
extern NSString* const kMDAPIErrorNewLocation;
extern NSString* const kMDAPIErrorUnverifiedLocation;
extern NSString* const kMDAPIErrorInvalidToken;
extern NSString* const kMDAPIErrorAccountAlreadyVerified;
extern NSString* const kMDAPIErrorNotLoggedIn;
extern NSString* const kMDAPIErrorSessionExpired;
extern NSString* const kMDAPIErrorLoggedInElsewhere;
extern NSString* const kMDAPIErrorRegistrationInvitationRequired;
extern NSString* const kMDAPIErrorLocationClientMismatch;
extern NSString* const kMDAPIErrorAccessDenied;
extern NSString* const kMDAPIErrorInvalidCredentials;
extern NSString* const kMDAPIErrorCallbackNotFound;
extern NSString* const kMDAPIErrorInvalidFingerprint;

#pragma mark - Local Faults
extern NSString* const kLocalFaultName;

extern NSString* const kLocalFaultCodeIllegalParameter;
extern NSString* const kLocalFaultCodeUnhandledError;
extern NSString* const kLocalFaultCodeCantParseNSErrorOrFault;

extern NSString* const kLocalFaultMessageParameterCantBeNil;
extern NSString* const kLocalFaultMessageFailureCallbackWithNoFault;
extern NSString* const kLocalFaultMessageCantParseNSErrorOrFault;
extern NSString* const kLocalFaultMessageInvalidParameter;

extern NSString* const kCallback;
extern NSString* const kParameters;

#pragma mark - Multiple uses
extern NSString* const kIDKey;
extern NSString* const kNameKey;
extern NSString* const kPluralNameKey;
extern NSString* const kFullKey;
extern NSString* const kCodeKey;
extern NSString* const kTextKey;
extern NSString* const kMessageKey;
extern NSString* const kEmailKey;
extern NSString* const kEmptyString;
extern NSString* const kPreferencesKey;
extern NSString* const kDescriptionKey;
extern NSString* const kObjectKey;
extern NSString* const kObjectsKey;
extern NSString* const kSchemasKey;
extern NSString* const kTimestampKey;
extern NSString* const kContextKey;
extern NSString* const kContextsKey;
extern NSString* const kContextIdKey;
extern NSString* const kTypeKey;
extern NSString* const kAccessKey;
extern NSString* const kConnectionsKey;
extern NSString* const kFeedKey;
extern NSString* const kFeedDefinitionKey;
extern NSString* const kInvitationsKey;
extern NSString* const kAccountsKey;
extern NSString* const kUpdatesKey;
extern NSString* const kImageKey;
extern NSString* const kGeoKey;
extern NSString* const kReasonKey;
extern NSString* const kPostKey;
extern NSString* const kPostsKey;
extern NSString* const kPostSeqKey;
extern NSString* const kValueKey;
extern NSString* const kFromKey;
extern NSString* const kToKey;
extern NSString* const kConnectionsKey;
extern NSString* const kInvitationKey;
extern NSString* const kRevokeKey;
extern NSString* const kTestKey;
extern NSString* const kTeamIdKey;
extern NSString* const kAccountKey;
extern NSString* const kAccountIdKey;
extern NSString* const kPostIdsKey;
extern NSString* const kPostTypesKey;
extern NSString* const kStreamKey;
extern NSString* const kSegmentIdKey;
extern NSString* const kBase64Key;
extern NSString* const kLabelKey;
extern NSString* const kDefaultKey;
extern NSString* const kCommaKey;
extern NSString* const kDotCharacterKey;
extern NSString* const kExclamationKey;
extern NSString* const kUnderscoreKey;
extern NSString* const kIPhoneKey;
extern NSString* const kPlaceholder;
extern NSString* const kNPIHealthUSPreffix;
extern NSString* const kMobileUrlKey;
extern NSString* const kUrlKey;
extern NSString* const kVisibilityKey;
extern NSString* const kSearchText;
extern NSUInteger const kFeedPageSize;
extern NSUInteger const kConversationPageSize;
extern NSUInteger const kPatientPageSize;
extern NSUInteger const kFilePageSize;
extern NSUInteger const kTeamPageSize;
extern NSString* const kDiagnosesSegmentKey;
extern NSString* const kInfoKey;
extern NSString* const kSourceKey;
extern NSString* const kUploadsKey;
extern NSString* const kAllowUploadKey;
extern NSString* const kRequiredKey;
extern NSString* const kReadOnlyKey;
extern NSString* const kPassMimesdKey;
extern NSString* const kUploadUrlKey;
extern NSString* const kFilenameKey;
extern NSString* const kUploadKeyKey;
extern NSString* const kUploadMethodKey;
extern NSString* const kFieldsKey;
extern NSString* const kFacetsKey;
extern NSString* const kPrivateKey;
extern NSString* const kUnknownETag;
extern NSString* const kSchemasETagKey;
extern NSString* const kLogoKey;
extern NSString* const kFaviconKey;
extern NSString* const kAutoKey;
extern NSString* const kAppsKey;
extern NSString* const kRegistrationKey;
extern NSString* const kSecurityKey;
extern NSString* const kWebsiteKey;

#pragma mark - Notifications
extern NSString* const kMDNotificationAPIIsNotLoggedIn;
extern NSString* const kMDNotificationAPIFingerprintAndSecretDidChange;
extern NSString* const kMDNotificationNetworkReachabilityNoInternetConnection;
extern NSString* const kMDNotificationNetworkReachabilityInternetConnectionAvailable;
extern NSString* const kMDNotificationAPIServerErrorDidOccur;
extern NSString* const kMDNotificationUserDidLogin;
extern NSString* const kMDNotificationUserDidLogout;
extern NSString* const kMDNotificationHTTPErrorStatusCodeReceived;
extern NSString* const kMDNotificationStartedUploadOperation;
extern NSString* const kMDNotificationLocalFaultNotification;

#pragma mark - MDNotification
extern NSString* const kNotificationContextKey;
extern NSString* const kNotificationObjectKey;
extern NSString* const kNotificationTypeKey;
extern NSString* const kNotificationMetadataKey;
extern NSString* const kMetaKey;

#pragma mark - Patient profile
extern NSString* const kPatientProfileKey;
extern NSString* const kMRNKey;
extern NSString* const kPatientIdKey;
extern NSString* const kPatientAccountIdKey;
extern NSString* const kAccountConnectedKey;
extern NSString* const kConnectionPendingKey;

#pragma mark - Care Conversation
extern NSString* const kArchivalKey;
extern NSString* const kCreatorKey;
extern NSString* const kOwnerKey;
extern NSString* const kPatientAccountKey;
extern NSString* const kPatientFileKey;

#pragma mark - Team
extern NSString* const kMemberCountKey;

#pragma mark - Invitation
extern NSString* const kRecipientKey;
extern NSString* const kSenderKey;

#pragma mark - Post
extern NSString* const kCommentKey;
extern NSString* const kCommentsKey;
extern NSString* const kCommentIdsKey;
extern NSString* const kTagsKey;
extern NSString* const kSequenceKey;
extern NSString* const kVoteKey;
extern NSString* const kVotedKey;
extern NSString* const kVotesKey;
extern NSString* const kVotersKey;
extern NSString* const kPostViewKey;
extern NSString* const kSegmentNamesKey;
extern NSString* const kSegmentTypesKey;

#pragma mark - Media
extern NSString* const kImageAttachmentName;
extern NSString* const kMediaKey;
extern NSString* const kFolderKey;
extern NSString* const kImageDetail;
extern NSString* const kImageFull;
extern NSString* const kNoImageType;
extern NSString* const kImageName;
extern NSString* const kContentKey;
extern NSString* const kProfileImageName;
extern NSString* const kCensoredImageName;
extern NSString* const kThumbnailKey;
extern NSString* const kCountKey;
extern NSUInteger const kAlbumMediaPageSize;
extern NSString* const kMediaIdKey;
extern NSString* const kMimeKey;
extern NSString* const kMimesKey;
extern NSString* const kSizeKey;
extern NSString* const kImagePngFilename;
extern NSString* const kImageJpgFilename;
extern NSString* const kCensorPngFilename;
extern NSString* const kAllMimeTypesAllowed;
extern NSString* const kJpgKey;
extern NSString* const kPngKey;

#pragma mark - HTTP (some) response codes
extern NSInteger const kHTTPStatusCodeOK;
extern NSInteger const kHTTPStatusCodeCreated;
extern NSInteger const kHTTPStatusCodeAccepted;
extern NSInteger const kHTTPStatusCodeFound;
extern NSInteger const kHTTPStatusCodeBadRequest;
extern NSInteger const kHTTPStatusCodeUnauthorized;
extern NSInteger const kHTTPStatusCodeForbidden;
extern NSInteger const kHTTPStatusCodeNotFound;
extern NSInteger const kHTTPStatusCodeInternalServerError;
extern NSInteger const kHTTPStatusCodeNotImplemented;
extern NSInteger const kHTTPStatusCodeBadGateway;
extern NSInteger const kHTTPStatusCodeServiceUnavailable;
extern NSInteger const kHTTPStatusCodeGatewayTimeout;
