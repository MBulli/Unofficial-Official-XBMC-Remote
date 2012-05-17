//
//  ViewControllerIPad.h
//  XBMC Remote
//
//  Created by Giovanni Messina on 29/4/12.
//  Copyright (c) 2012 joethefox inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DSJSONRPC.h"

@class MenuViewController;
@class StackScrollViewController;
@class UIViewExt;
@class NowPlaying;
@class GlobalData;
@class VolumeSliderView;
@class HostManagementViewController;


@interface ViewControllerIPad : UIViewController {
	UIViewExt* rootView;
	UIView* leftMenuView;
	UIView* rightSlideView;
	MenuViewController* menuViewController;
    NowPlaying* nowPlayingController;
	StackScrollViewController* stackScrollViewController;
    GlobalData *obj;
    NSIndexPath *storeServerSelection;
    int YPOS;
    UIButton *xbmcLogo;
    UIButton *xbmcInfo;
    VolumeSliderView *volumeSliderView;
    DSJSONRPC *jsonRPC;
    BOOL firstRun;
    NSDictionary *checkServerParams;
    NSTimer* timer;
    UIPopoverController *_serverPickerPopover;
    HostManagementViewController *_hostPickerViewController;
}

@property (nonatomic, strong) NSMutableArray *mainMenu;
@property (nonatomic, retain) MenuViewController* menuViewController;
@property (nonatomic, retain) NowPlaying* nowPlayingController;
@property (nonatomic, strong) StackScrollViewController* stackScrollViewController;
@property (nonatomic, retain) UIPopoverController *serverPickerPopover;
@property (nonatomic, retain) HostManagementViewController *hostPickerViewController;




@end