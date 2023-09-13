
#import <UIKit/UIKit.h>

// forward declarations
@class RecentlyAddedManager, LibraryRecentlyAddedViewController;

// overall tweak manager class
@interface MeloManager : NSObject
@property(strong, nonatomic) NSDictionary *prefs;
@property(strong, nonatomic) NSMutableDictionary *defaultPrefs;
@property(strong, nonatomic) NSUserDefaults *defaults;
@property(strong, nonatomic) NSMutableArray *recentlyAddedManagers;
@property(strong, atomic) NSIndexPath *indexPathForContextMenuOverride;
@property(strong, atomic) NSIndexPath *indexPathForContextActions;
@property(assign, atomic) BOOL shouldAddCustomContextActions;
@property(strong, nonatomic) LibraryRecentlyAddedViewController *currentLRAVC;

+ (void)load;
+ (instancetype)sharedInstance;
- (instancetype)init;

- (void)loadPrefs;
- (BOOL)prefsBoolForKey:(NSString *)arg1;
- (id)prefsObjectForKey:(NSString *)arg1;

- (CGFloat)collectionViewCellSpacing;
- (CGSize)collectionViewItemSize;
- (void)checkClearPins;
- (void)dataChangeOccurred:(RecentlyAddedManager *)sender;
- (void)addRecentlyAddedManager:(RecentlyAddedManager *)arg1;

// -(int)test;

@end