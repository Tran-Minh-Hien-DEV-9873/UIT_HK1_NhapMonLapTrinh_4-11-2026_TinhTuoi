#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("------------------------------------------------------------ \n");
	int tuoi, namSinh, namHienTai;
	// Nhap nam sinh
    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &namSinh);


	printf("Nhap nam hien tai: ");
    scanf("%d", &namHienTai);

    // Tinh tuoi
    tuoi = namHienTai - namSinh;

    printf("Tuoi cua ban la: %d\n", tuoi);
    
    printf("------------------------------------------------------------ \n");
    
	return 0;
	
}
