#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <windows.h>

#define PLAYER 'X'
#define AI 'O'
#define EMPTY ' '

void initBoard(char board[3][3]) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = EMPTY;
}

void clearScreen() {
    system("cls");
}

void printBoard(char board[3][3]) {
    clearScreen();
    printf("\n     1   2   3\n");
    for (int i = 0; i < 3; ++i) {
        printf("   -------------\n");
        printf(" %d ", i + 1);
        for (int j = 0; j < 3; ++j) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
    }
    printf("   -------------\n\n");
}

int isMovesLeft(char board[3][3]) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == EMPTY)
                return 1;
    return 0;
}

int evaluate(char b[3][3]) {
    for (int row = 0; row < 3; ++row)
        if (b[row][0] == b[row][1] && b[row][1] == b[row][2]) {
            if (b[row][0] == AI) return +10;
            if (b[row][0] == PLAYER) return -10;
        }
    for (int col = 0; col < 3; ++col)
        if (b[0][col] == b[1][col] && b[1][col] == b[2][col]) {
            if (b[0][col] == AI) return +10;
            if (b[0][col] == PLAYER) return -10;
        }
    if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
        if (b[0][0] == AI) return +10;
        if (b[0][0] == PLAYER) return -10;
    }
    if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
        if (b[0][2] == AI) return +10;
        if (b[0][2] == PLAYER) return -10;
    }
    return 0;
}

int minimax(char board[3][3], int depth, int isMax) {
    int score = evaluate(board);
    if (score == 10) return score - depth;
    if (score == -10) return score + depth;
    if (!isMovesLeft(board)) return 0;

    if (isMax) {
        int best = INT_MIN;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                if (board[i][j] == EMPTY) {
                    board[i][j] = AI;
                    int val = minimax(board, depth + 1, 0);
                    board[i][j] = EMPTY;
                    if (val > best) best = val;
                }
        return best;
    } else {
        int best = INT_MAX;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                if (board[i][j] == EMPTY) {
                    board[i][j] = PLAYER;
                    int val = minimax(board, depth + 1, 1);
                    board[i][j] = EMPTY;
                    if (val < best) best = val;
                }
        return best;
    }
}

void findBestMove(char board[3][3], int *bestRow, int *bestCol) {
    int bestVal = INT_MIN;
    *bestRow = -1; *bestCol = -1;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == EMPTY) {
                board[i][j] = AI;
                int moveVal = minimax(board, 0, 0);
                board[i][j] = EMPTY;
                if (moveVal > bestVal) {
                    *bestRow = i;
                    *bestCol = j;
                    bestVal = moveVal;
                }
            }
}

int checkWinner(char board[3][3]) {
    int score = evaluate(board);
    if (score == 10) return 2;
    if (score == -10) return 1;
    if (!isMovesLeft(board)) return 0;
    return -1;
}

void playerMove(char board[3][3]) {
    int r, c;
    while (1) {
        printf("Luot nguoi choi (X). Nhap hang cot (vd: 1 3): ");
        if (scanf("%d %d", &r, &c) != 2) {
            while (getchar() != '\n');
            printf("Nhap khong hop le. Thu lai.\n");
            continue;
        }
        if (r >= 1 && r <= 3 && c >= 1 && c <= 3 && board[r-1][c-1] == EMPTY) {
            board[r-1][c-1] = PLAYER;
            break;
        } else {
            printf("O da duoc danh hoac toa do ngoai pham vi. Thu lai.\n");
        }
    }
}

void aiMove(char board[3][3]) {
    printf("May dang suy nghi...\n");
    Sleep(700);
    int row, col;
    if (board[1][1] == EMPTY) {
        row = 1; col = 1;
    } else {
        findBestMove(board, &row, &col);
        if (row == -1) {
            for (int i = 0; i < 3 && row == -1; ++i)
                for (int j = 0; j < 3 && row == -1; ++j)
                    if (board[i][j] == EMPTY) { row = i; col = j; }
        }
    }
    board[row][col] = AI;
}

void twoPlayersMode() {
    char board[3][3];
    initBoard(board);
    int turn = 0;
    while (1) {
        printBoard(board);
        if (turn == 0) {
            printf("Nguoi choi 1 (X)\n");
            playerMove(board);
        } else {
            int r, c;
            while (1) {
                printf("Nguoi choi 2 (O). Nhap hang cot (vd: 1 3): ");
                if (scanf("%d %d", &r, &c) != 2) {
                    while (getchar() != '\n');
                    printf("Nhap khong hop le. Thu lai.\n");
                    continue;
                }
                if (r >= 1 && r <= 3 && c >= 1 && c <= 3 && board[r-1][c-1] == EMPTY) {
                    board[r-1][c-1] = AI;
                    break;
                } else {
                    printf("O da duoc danh hoac toa do ngoai pham vi. Thu lai.\n");
                }
            }
        }
        int res = checkWinner(board);
        if (res != -1) {
            printBoard(board);
            if (res == 2) printf("Nguoi choi O thang!\n");
            else if (res == 1) printf("Nguoi choi X thang!\n");
            else printf("Hoa!\n");
            break;
        }
        turn = 1 - turn;
    }
}

void playerVsAiMode() {
    char board[3][3];
    initBoard(board);
    while (1) {
        printBoard(board);
        playerMove(board);
        int res = checkWinner(board);
        if (res != -1) {
            printBoard(board);
            if (res == 1) printf("Nguoi choi thang!\n");
            else if (res == 2) printf("May thang!\n");
            else printf("Hoa!\n");
            break;
        }
        printBoard(board);
        aiMove(board);
        res = checkWinner(board);
        if (res != -1) {
            printBoard(board);
            if (res == 1) printf("Nguoi choi thang!\n");
            else if (res == 2) printf("May thang!\n");
            else printf("Hoa!\n");
            break;
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n=== TIC-TAC-TOE ===\n");
        printf("1. Nguoi choi vs Nguoi choi\n");
        printf("2. Nguoi choi vs May (AI)\n");
        printf("0. Thoat\n");
        printf("Chon che do: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Nhap khong hop le. Thu lai.\n");
            continue;
        }
        if (choice == 0) {
            printf("Tam biet!\n");
            break;
        } else if (choice == 1) {
            twoPlayersMode();
        } else if (choice == 2) {
            playerVsAiMode();
        } else {
            printf("Lua chon khong hop le. Thu lai.\n");
            continue;
        }
        int again;
        while (1) {
            printf("Ban muon choi lai? (1: Co, 0: Khong): ");
            if (scanf("%d", &again) != 1) {
                while (getchar() != '\n');
                printf("Nhap khong hop le. Thu lai.\n");
                continue;
            }
            break;
        }
        if (!again) {
            printf("Cam on da choi. Tam biet!\n");
            break;
        }
    }
    return 0;
}
