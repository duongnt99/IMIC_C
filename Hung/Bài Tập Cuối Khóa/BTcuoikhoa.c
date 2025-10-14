#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#define SLEEP_MS(ms) Sleep(ms)




void printBoard(char board[9]) 
{
    printf("\n");
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("-----------\n");
    printf(" %c | %c | %c \n\n", board[6], board[7], board[8]);
}

char checkWinner(char board[9]) {
    int wins[8][3] = 
    {
        {0,1,2}, {3,4,5}, {6,7,8}, // dong
        {0,3,6}, {1,4,7}, {2,5,8}, // cot
        {0,4,8}, {2,4,6}           // duong cheo
    };
    for (int i = 0; i < 8; i++) 
    {
        int a = wins[i][0], b = wins[i][1], c = wins[i][2];
        if (board[a] != ' ' && board[a] == board[b] && board[b] == board[c]) 
        {
            return board[a]; // 'X' or 'O'
        }
    } 
    int empty = 0;
    for (int i = 0; i < 9; i++) 
        {
            if (board[i] == ' ') 
            {
                empty++;
            }
        }
    if (!empty) 
    {
        return 'H';
    } 
    return ' '; 
}


int minimax(char board[9], int depth, int isMaximizing) 
{
    char result = checkWinner(board);
    if (result == 'O') 
    {
        return 10 - depth;
    }
    if (result == 'X') 
    {
        return -10 + depth;
    }
    if (result == 'H') 
    {
        return 0;
    }

    if (isMaximizing) 
    {
        int bestScore = -1000;
        for (int i = 0; i < 9; i++) 
        {
            if (board[i] == ' ') 
            {
                board[i] = 'O';
                int score = minimax(board, depth + 1, 0);
                board[i] = ' ';
                if (score > bestScore) 
                {
                    bestScore = score;
                }
            }
        }
        return bestScore;
    } 
    else 
    {
        int bestScore = 1000;
        for (int i = 0; i < 9; i++) 
        {
            if (board[i] == ' ') 
            {
                board[i] = 'X';
                int score = minimax(board, depth + 1, 1);
                board[i] = ' ';
                if (score < bestScore) 
                {
                    bestScore = score;
                }
            }
        }
        return bestScore;
    }
}


int getBestMove(char board[9]) {
    int bestMove = -1;
    int bestScore = -1000;
    for (int i = 0; i < 9; i++) 
    {
        if (board[i] == ' ') 
        {
            board[i] = 'O';
            int score = minimax(board, 0, 0);
            board[i] = ' ';
            if (score > bestScore) 
            {
                bestScore = score;
                bestMove = i;
            }
        }
    }
    return bestMove; 
}

// che do nguoi voi nguoi
void playerVsPlayer() 
{
    char board[9];
    for (int i = 0; i < 9; i++) 
    {
        board[i] = ' ';
    }
    char current = 'X';
    while (1) {
        printBoard(board);
        printf("Luot cua %c. chon o (1-9): ", current);
        int choice;
        if (scanf("%d", &choice) != 1) 
        {
            while (getchar() != '\n'); 
            printf("Loi nhap, nhap lai\n");
            continue;
        }
        if (choice < 1 || choice > 9) 
        {
            printf("O khong hop le, vui long chon lai (0-9)\n");
            continue;
        }
        int idx = choice - 1;
        if (board[idx] != ' ') 
        {
            printf("O da duoc chon, chon o khac\n");
            continue;
        }
        else
        {
        board[idx] = current;
        }
        char winner = checkWinner(board);
        if (winner == 'X' || winner == 'O') {
            printBoard(board);
            printf("Nguoi choi %c thang!\n", winner);
            break;
        } else if (winner == 'H') {
            printBoard(board);
            printf("Hoa!\n");
            break;
        }
        if (current == 'X')
        {
            current = 'O';
        }
        else
        {
            current = 'X';
        }
        
    }
}

// nguoi voi may
void playerVsAI() 
{
    char board[9];
    for (int i = 0; i < 9; i++) 
    {
        board[i] = ' ';
    }
    while (1) 
    {
        
        printBoard(board);
        printf("Ban (X) di. Chon o (1-9): ");
        int choice;
        if (scanf("%d", &choice) != 1) 
        {
            while (getchar() != '\n');
            printf("Loi nhap, nhap lai\n");
            continue;
        }
        if (choice < 1 || choice > 9) 
        {
            printf("O khong hop le, chon o khac\n");
            continue;
        }
        int idx = choice - 1;
        if (board[idx] != ' ') 
        {
            printf("o da duoc chon, chon o khac\n");
            continue;
        }
        board[idx] = 'X';
        char winner = checkWinner(board);
        if (winner == 'X') 
        {
            printBoard(board);
            printf("Ban thang, chuc mung!\n");
            break;
        } 
        else if (winner == 'H') 
        {
            printBoard(board);
            printf("Hoa!\n");
            break;
        }

        printf("May dang suy nghi...\n");
        fflush(stdout);
        SLEEP_MS(800);
        int best = getBestMove(board);
        if (best == -1) 
        {
            printBoard(board);
            printf("Hoa\n");
            break;
        } else {
            board[best] = 'O';
            printf(" May danh o %d.\n", best + 1);
        }

        winner = checkWinner(board);
        if (winner == 'O') {
            printBoard(board);
            printf("May thang\n");
            break;
        } else if (winner == 'H') {
            printBoard(board);
            printf("Hoa\n");
            break;
        }
    }
}


int main() 
{
    
    srand((unsigned int)time(NULL));
    int opt;
    int mode;
    // giao dien ban dau
    while (1) {
        printf("----- TIC-TAC-TOE -----\n");
        printf("1. Nguoi vs Nguoi\n");
        printf("2. Nguoi vs May (AI)\n");
        printf("0. Thoat\n");
        printf("Chon che do (0-2): ");
        if (scanf("%d", &mode) != 1) {
            while (getchar() != '\n');
            printf("Loi nhap, vui long nhap so\n");
            continue;
        }
        if (mode == 0) {
            printf("Tam biet\n");
            break;
        } else if (mode == 1) 
        {
            playerVsPlayer();
        } else if (mode == 2) 
        {
            playerVsAI();
        } else {
            printf("Lua chon khong hop le, thu lai\n");
            continue;
        }
    }

        // giao dien sau khi chơi xong
        while (1) {
            printf("\nBan muon\n");
            printf("1. choi lai che do nay\n");
            printf("2. Ve menu chinh\n");
            printf("0. thoat\n");
            printf("chon (0-2): ");
            if (scanf("%d", &opt) != 1) {
                while (getchar() != '\n');
                printf("Loi nhap.\n");
                continue;
            }
            if (opt == 1) 
            {
                if (mode == 1) 
                {
                    playerVsPlayer();
                }
                else if (mode == 2) 
                {
                    playerVsAI();
                } 
                else if (opt == 2) 
                {
                    break; 
                } 
                else if (opt == 0) 
                {
                    printf("Tam Biet!\n");
                    return 0;
                } 
                else 
                {
                    printf("Lua chon kh hop le\n");
                    continue;
            }
        }
    }
    
    return 0;
}

