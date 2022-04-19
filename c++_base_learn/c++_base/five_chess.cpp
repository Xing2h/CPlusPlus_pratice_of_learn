//
// Created by Xing on 2022/3/31.
//
#include<iostream>

using namespace std;
#define N 10 //棋盘规格
static int chessboard[N][N];//棋盘
struct chess {
    int x, y;
    int color;//0为无子，1为白子，-1为黑子
};

/**
 * 初始化棋盘函数
 */
void init_chessboard() {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            chessboard[i][j] = 0;
        }
    }
}

/**
 * 判断胜负
 * @param che
 * @return true 未分出胜负可以继续下棋，false分出胜负
 */
bool is_win(struct chess che) {
    int x, y, num;
    int xmin, xmax, ymin, ymax, min, max;
    //判断左右方向
    num = 0;
    xmin = (che.y - 4 > 0) ? che.y - 4 : 0;//左边界
    xmax = (che.y + 4 < N - 1) ? che.y + 4 : N - 1;//右边界
    for (y = xmin; y <= xmax; y++) {
        if (chessboard[che.x][y] == che.color && num < 5) {
            num++;
            if (num == 5) {
                return false;
            }
        } else {
            num = 0;
        }
    }
    //判断上下方向
    num = 0;
    ymin = (che.x - 4 >= 0) ? che.x - 4 : 0;
    ymax = (che.x + 4 < N - 1) ? che.x + 4 : N - 1;
    for (x = ymin; x <= ymax; x++) {
        if (chessboard[x][che.y] == che.color && num < 5) {
            num++;
            if (num == 5) {
                return false;
            }
        } else {
            num = 0;
        }
    }
    //判断135度方向 左上-右下
    num = 0;
    xmin = (che.y < 4) ? che.y : 4;//左边界到点的距离
    xmax = (N - 1 - che.y < 4) ? N - 1 - che.y : 4;//右边界到点的距离
    ymin = (che.x < 4) ? che.x : 4;//上边界到点的距离
    ymax = (N - 1 - che.x < 4) ? N - 1 - che.x : 4;//下边界到点的距离
    min = xmin < ymin ? xmin : ymin;//左上方边界到点的距离
    max = xmax < ymax ? xmax : ymax;//右上方边界到点的距离
    //左上到右下遍历
    for (x = che.x - min, y = che.y - min; x <= che.x + max; x++, y++) {
        if (chessboard[x][y] == che.color && num < 5) {
            num++;
            if (num == 5) {
                return false;
            }
        } else {
            return true;
        }
    }
    //判断45度方向 右上-左下
    num = 0;
    min = ymin < xmax ? ymin : xmax;//右上距离
    max = xmin < ymax ? xmin : ymax;//左下距离
    for (x = che.x - min, y = che.y + min; x <= che.x + max; x++, y++) {
        if (chessboard[x][y] == che.color && num < 5) {
            num++;
            if (num == 5) {
                return false;
            }
        } else {
            return true;
        }
    }
}

/**
 * 判断棋子是否合法
 * @param che
 * @return
 */
bool is_right_chess(struct chess che) {
    if (che.x >= 0 && che.x < N && che.y >= 0 && che.y < N && chessboard[che.x][che.y] == 0) {
        chessboard[che.x][che.y] = che.color;
        return true;
    } else {
        cout << "落子不合法，重新下子！" << endl;
        return false;
    }
}

/**
 * 展示棋盘
 */
void show_chessboard() {
    int i, j;
    cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
    for (int i = 0; i < N; i++) {
        cout << i << " ";
        for (int j = 0; j < N; j++) {
            if (chessboard[i][j] == -1) {
                cout << "x" << " ";
            } else if (chessboard[i][j] == 1) {
                cout << "o" << " ";
            } else {
                cout << "-" << " ";
            }
        }
        cout << endl;
    }
}

struct chess put_chess(int color) {
    if (color == 1) {
        cout << "白方落子" << endl;
    } else if (color == -1) {
        cout << "黑方落子" << endl;
    }
    struct chess che;
    cin >> che.x;
    cin >> che.y;
    che.color = color;
    return che;
}

int renrenModle() {
    init_chessboard();
    struct chess pre;
    while (1) {
        show_chessboard();
        do {//黑方落子
            pre = put_chess(-1);
        } while (!is_right_chess(pre));
        show_chessboard();
        if (!is_win(pre)) {
            cout << "黑方胜" << endl;
            return -1;
        }
        do {
            pre = put_chess(1);
        } while (!is_right_chess(pre));
        show_chessboard();
        if (!is_win(pre)) {
            cout << "白方胜" << endl;
            return 1;
        }
    }
}

int main() {
    renrenModle();
    return 0;
}