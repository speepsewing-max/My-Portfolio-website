#include <stdio.h>

int main() {
    char name[50];
    float temperature;

    // Get student name
    printf("กรุณากรอกชื่อนักเรียน: ");
    scanf("%s", name);

    // Get body temperature
    printf("กรอกอุณหภูมิร่างกาย (°C): ");
    scanf("%f", &temperature);

    // Display results
    printf("\nผลการตรวจ:\n");
    printf("ชื่อนักเรียน: %s\n", name);
    printf("อุณหภูมิ: %.1f°C\n", temperature);
    printf("สถานะ: ");

    // Check temperature status
    if (temperature < 35.0) {
        printf("อุณหภูมิต่ำกว่าปกติ");
    } else if (temperature >= 35.0 && temperature <= 37.5) {
        printf("อุณหภูมิปกติ");
    } else {
        printf("เป็นไข้");
    }

    return 0;
}
// ณัฐภัทร แสงศรี งานที่1