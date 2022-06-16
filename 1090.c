#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Código feito por: Gabriel Dias, Gustavo Kanji, Nícolas Henriques.

#define ONE "um"
#define TWO "dois"
#define THREE "tres"
#define LENGTH 3

int map_card_number_to_index(char* card_number);
int map_card_form_to_index(char* card_form);
int get_total_sets(int card_deck[LENGTH][LENGTH]);
bool does_card_deck_has_all_cards(int card_deck[LENGTH][LENGTH]);
void count_sets_on_rows(int card_deck[LENGTH][LENGTH], int* total_sets);
void count_sets_on_cols(int card_deck[LENGTH][LENGTH], int* total_sets);
void count_sets_on_main_diagonal(int card_deck[LENGTH][LENGTH], int* total_sets);
void count_sets_on_secondary_diagonal(int card_deck[LENGTH][LENGTH], int* total_sets);
void count_sets_on_same_index(int card_deck[LENGTH][LENGTH], int* total_sets);
void count_sets_on_different_indexes(int card_deck[LENGTH][LENGTH], int* total_sets);
void count_sets_on_remainders(int card_deck[LENGTH][LENGTH], int* total_sets);

int main() {
    int total_of_cards = 0;
    bool is_first_iteration = true;
    int results[100000];
    int counter = 0;

    while (true) {
        scanf("%d", &total_of_cards);

        if (total_of_cards <= 0 || total_of_cards < 3 || total_of_cards > 3 * 10 * 10 * 10 * 10) {
            break;
        }

        int card_deck[LENGTH][LENGTH] = { 
            { 0, 0, 0 },  // circles
            { 0, 0, 0 }, // triangles
            { 0, 0, 0 } // squares
        };

        char card_number[10];
        char card_form[15];

        for (int i = 0; i < total_of_cards; i++) {
            scanf("%s %s", card_number, card_form);
            int card_number_index = map_card_number_to_index(card_number);
            int card_form_index = map_card_form_to_index(card_form);
            card_deck[card_form_index][card_number_index]++;
        }

        int total_sets = get_total_sets(card_deck);
        results[counter] = total_sets;
        counter++;
    }

    for (int i = 0; i < counter; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}

int get_total_sets(int card_deck[LENGTH][LENGTH]) {
    int total_sets = 0;
    bool card_deck_has_all_cards = does_card_deck_has_all_cards(card_deck);

    count_sets_on_rows(card_deck, &total_sets);
    count_sets_on_cols(card_deck, &total_sets);
    count_sets_on_main_diagonal(card_deck, &total_sets);
    count_sets_on_secondary_diagonal(card_deck, &total_sets);
    count_sets_on_same_index(card_deck, &total_sets);
    count_sets_on_different_indexes(card_deck, &total_sets);


    if (card_deck_has_all_cards) {
        count_sets_on_remainders(card_deck, &total_sets);
    }

    return total_sets;
}

void count_sets_on_rows(int card_deck[LENGTH][LENGTH], int* total_sets) {
    for (int shape = 0; shape < LENGTH; shape++) {
        while (card_deck[shape][0] > 0 && card_deck[shape][1] > 0 && card_deck[shape][2] > 0) {
            *total_sets += 1;
            card_deck[shape][0]--;
            card_deck[shape][1]--;
            card_deck[shape][2]--;
        }
    }
}

void count_sets_on_cols(int card_deck[LENGTH][LENGTH], int* total_sets) {
    for (int number = 0; number < LENGTH; number++) {
        while (card_deck[0][number] > 0 && card_deck[1][number] > 0 && card_deck[2][number] > 0) {
            *total_sets += 1;
            card_deck[0][number]--;
            card_deck[1][number]--;
            card_deck[2][number]--;
        }
    }
}

void count_sets_on_main_diagonal(int card_deck[LENGTH][LENGTH], int* total_sets) {
    while (card_deck[0][0] > 0 && card_deck[1][1] > 0 && card_deck[2][2]) {
        *total_sets += 1;
        card_deck[0][0]--;
        card_deck[1][1]--;
        card_deck[2][2]--;
    }
}

void count_sets_on_secondary_diagonal(int card_deck[LENGTH][LENGTH], int* total_sets) {
    while (card_deck[0][2] > 0 && card_deck[1][1] > 0 && card_deck[2][0] > 0) {
        *total_sets += 1;
        card_deck[0][2]--;
        card_deck[1][1]--;
        card_deck[2][0]--;
    }
}

void count_sets_on_same_index(int card_deck[LENGTH][LENGTH], int* total_sets) {
    for (int i = 0; i < LENGTH; i++) {
        for (int j = 0; j < LENGTH; j++) {
            if (card_deck[i][j] >= 3) {
                *total_sets += card_deck[i][j] / 3;
                card_deck[i][j] %= 3;
            }
        }
    }
}

void count_sets_on_different_indexes(int card_deck[LENGTH][LENGTH], int* total_sets) {
    while (card_deck[0][0] > 0 && card_deck[1][2] > 0 && card_deck[2][1] > 0) {
        *total_sets += 1;
        card_deck[0][0]--;
        card_deck[1][2]--;
        card_deck[2][1]--;
    }

    while (card_deck[0][2] > 0 && card_deck[1][0] > 0 && card_deck[2][1] > 0) {
        *total_sets += 1;
        card_deck[0][2]--;
        card_deck[1][0]--;
        card_deck[2][1]--;
    }

    while (card_deck[0][1] > 0 && card_deck[1][0] > 0 && card_deck[2][2] > 0) {
        *total_sets += 1;
        card_deck[0][1]--;
        card_deck[1][0]--;
        card_deck[2][2]--;
    }

    while (card_deck[0][1] > 0 && card_deck[1][2] > 0 && card_deck[2][0] > 0) {
        *total_sets += 1;
        card_deck[0][1]--;
        card_deck[1][2]--;
        card_deck[2][0]--;
    }
}

void count_sets_on_remainders(int card_deck[LENGTH][LENGTH], int* total_sets) {
    int remainder = 0;

    for (int i = 0; i < LENGTH; i++) {
        for (int j = 0; j < LENGTH; j++) {
            if (card_deck[i][j] == 1 || card_deck[i][j] == 2) {
                remainder += card_deck[i][j];
            }
        }
    }

    if (remainder > 3 && remainder < 6) {
        *total_sets += 1;
    } else if (remainder == 6){
        /*
            0 0 2
            1 1 0
            0 0 2
        */
        if (card_deck[0][2] > 0 && card_deck[1][0] > 0 && card_deck[1][1] > 0 && card_deck[2][2] > 0) {
            *total_sets += 2;
        } else if (card_deck[0][0] > 0 && card_deck[1][1] > 0 && card_deck[1][2] > 0 && card_deck[2][0] > 0) {
            *total_sets += 2;
        } else if (card_deck[0][1] > 0 && card_deck[1][0] > 0 && card_deck[1][2] > 0 && card_deck[2][1] > 0) {
            *total_sets += 2;
        } 
        /*
            0 0 2
            0 2 0
            0 0 2
        */
        else {
            *total_sets += 1;
        }
    } else if (remainder > 6 && remainder < 9) {
        *total_sets += 2;
    }
}

bool does_card_deck_has_all_cards(int card_deck[LENGTH][LENGTH]) {
    for (int i = 0; i < LENGTH; i++) {
        for (int j = 0; j < LENGTH; j++) {
            if (card_deck[i][j] == 0)
                return false;
        }
    }

    return true;
}

int map_card_number_to_index(char* card_number) {
    if (strcmp(card_number, ONE) == 0) {
        return 0;
    }
    if (strcmp(card_number, TWO) == 0) {
        return 1;
    }
    if (strcmp(card_number, THREE) == 0) {
        return 2;
    }
}

int map_card_form_to_index(char* card_form) {
    if (card_form[0] == 'c') {
        return 0;
    }
    if (card_form[0] == 't') {
        return 1;
    }
    if (card_form[0] == 'q') {
        return 2;
    }
}