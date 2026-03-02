#include <stdio.h>
#include <stdlib.h>

typedef struct PolyNode {
    int coefficient;
    int exponent;
    struct PolyNode* next;
} PolyNode;

PolyNode* read_poly() {
    int n;
    scanf("%d", &n);
    PolyNode dummy = {0, 0, NULL};
    PolyNode* tail = &dummy;
    for (int i = 0; i < n; ++i) {
        int coef;
        scanf("%d", &coef);
        if (coef == 0) continue;
        tail->next = malloc(sizeof(PolyNode));
        tail->next->coefficient = coef;
        tail->next->exponent = 0; // Placeholder, will be set later
        tail = tail->next;
    }
    return dummy.next;
}

void print_poly(PolyNode* head) {
    while (head != NULL) {
        if (head->coefficient != 0) {
            if (head->coefficient > 0 && head->exponent != 0) {
                printf("+ ");
            } else if (head->coefficient < 0) {
                printf("- ");
                head->coefficient = -head->coefficient;
            }
            if (head->exponent == 0) {
                printf("%d ", head->coefficient);
            } else {
                if (head->coefficient == 1) {
                    printf("x^%d ", head->exponent);
                } else if (head->coefficient == -1) {
                    printf("-x^%d ", head->exponent);
                } else {
                    printf("%dx^%d ", head->coefficient, head->exponent);
                }
            }
        }
        head = head->next;
    }
    printf("\n");
}

PolyNode* add_poly(PolyNode* A, PolyNode* B) {
    PolyNode dummy = {0, 0, NULL};
    PolyNode* tail = &dummy;
    while (A != NULL && B != NULL) {
        if (A->exponent > B->exponent) {
            tail->next = malloc(sizeof(PolyNode));
            tail->next->coefficient = A->coefficient;
            tail->next->exponent = A->exponent;
            A = A->next;
        } else if (A->exponent < B->exponent) {
            tail->next = malloc(sizeof(PolyNode));
            tail->next->coefficient = B->coefficient;
            tail->next->exponent = B->exponent;
            B = B->next;
        } else {
            int sum_coef = A->coefficient + B->coefficient;
            if (sum_coef != 0) {
                tail->next = malloc(sizeof(PolyNode));
                tail->next->coefficient = sum_coef;
                tail->next->exponent = A->exponent;
                tail = tail->next;
            }
            A = A->next;
            B = B->next;
        }
    }
    while (A != NULL) {
        tail->next = malloc(sizeof(PolyNode));
        tail->next->coefficient = A->coefficient;
        tail->next->exponent = A->exponent;
        A = A->next;
    }
    while (B != NULL) {
        tail->next = malloc(sizeof(PolyNode));
        tail->next->coefficient = B->coefficient;
        tail->next->exponent = B->exponent;
        B = B->next;
    }
    return dummy.next;
}

int main() {
    int nA, nB;
    scanf("%d %d", &nA, &nB);
    PolyNode* polyA = read_poly();
    PolyNode* polyB = read_poly();

    PolyNode* result = add_poly(polyA, polyB);
    print_poly(result);

    // Free allocated memory
    while (polyA != NULL) {
        PolyNode* temp = polyA;
        polyA = polyA->next;
        free(temp);
    }
    while (polyB != NULL) {
        PolyNode* temp = polyB;
        polyB = polyB->next;
        free(temp);
    }
    while (result != NULL) {
        PolyNode* temp = result;
        result = result->next;
        free(temp);
    }

    return 0;
}
