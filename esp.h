#import <vector>
#import <UIKit/UIKit.h>
struct player_t {
    CGRect box;
    CGRect healthbar;
    CGPoint topofbox;
    CGPoint bottomofbox;
    float health;
    float distance;
    bool enemy;
};
@interface esp : UIView
@property bool espboxes;
@property bool esplines;
@property bool healthbarr;
@property bool distanceesp;
@property std::vector<player_t *> *players;
- (void)drawRect:(CGRect)rect;
- (id)initWithFrame:(UIWindow*)main;
@end

