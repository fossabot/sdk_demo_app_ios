/*
 *
 *  ZDKSupport.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 29/10/2014.  
 *
 *  Copyright (c) 2014 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <Foundation/Foundation.h>

@class ZDKSdkStorage, ZDKTheme, ZDKCustomField, Zendesk;

/*
 * ZDKSupport is responsible for initialization of
 * the SDK and manages the backend configuration.
 *
 *  @since 0.9.3.1
 */
@interface ZDKSupport : NSObject

/**
 *  Override the default locale specified via the SDK admin.
 *  A request is made to check the language is supported. If it is not supported, or the request fails, the default
 *  language remains in place. Should be an IETF language tag.
 *
 *  @since 1.1.0.1
 */
@property (nonatomic, copy) NSString *userLocale;


// TODO: Delete or discuss this when implementing story https://zendesk.atlassian.net/browse/MSDK-2536 to respect serverside story
@property (nonatomic, assign) BOOL articleVotingEnabled;


/**
 *  TODO Remove it later
 *  Ask for the user email when creating a ticket
 *  The email wont be asked
 *
 *  @since 2.x.x.x
 */
@property (nonatomic, assign) BOOL askUserEmailOnTicketCreation;


/**
 *  Get the API instance (singleton).
 *
 *  @since 0.9.3.1
 *
 *  @return the API instance
 */
+ (instancetype) instance;


- (void)initializeWithZendesk:(Zendesk*)zendesk;


@end
