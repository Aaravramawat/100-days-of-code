#include <stdio.h>

int main() {
    float costprice, sellingprice, profit, loss, percentage;


    printf("Enter Cost Price: ");
    scanf("%f", &costprice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingprice);

    // Calculate profit or loss
    if (sellingprice > costprice) {
        profit = sellingprice - costprice;
        percentage = (profit / costprice) * 100;
        printf("Profit = %f\n", profit);
        printf("Profit Percentage = %f%%", percentage);
    } 
    else if (costprice > sellingprice) {
        loss = costprice - sellingprice;
        percentage = (loss / costprice) * 100;
        printf("Loss = %f", loss);
        printf("Loss Percentage = %f%%", percentage);
    } 
    else {
        printf("No Profit, No Loss.");
    }

    return 0;
}
