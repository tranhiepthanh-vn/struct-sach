#include <stdio.h>
void nhap();void nhapn();void xuat();void xuatn();void ghin();void docn();
typedef struct sach
	{
		char Ma_sach[11],Tieu_de[100],Tac_gia[50],NXB[100],Loai_sach[50];
		int namxb,So_trang;
		long long Gia_ban;
	} sach;
int main()
{
	FILE *fp;
	int n,i,a;
	char tusach[100];
	sach s,ds[100];
	printf("0 nhap 1 quyen 1 nhap n quyen 2 ghi n quyen 3 doc n quyen\n");
	printf("hay nhap che do ban muon chon:");
	scanf("%d",&a);
	switch (a)
	{
		case 0:
			nhap(&s);
			xuat(s);
			break;
		case 1:
			printf("ban muon nhap may quyen sach:");
			scanf("%d",&n);
			nhapn(ds,i,n);
			xuatn(ds,n,i);
			break;
		case 2:
			printf("ban muon nhap may quyen sach:");
			scanf("%d",&n);
			nhapn(ds,i,n);
			fp=fopen("sach.out","wt");
			if (fp==NULL) {
				printf("error");
				break;
			}
			ghin(fp,ds,i,n);
			break;
		case 3:
			break;
	}
	return 0;
}
void nhap(sach *s)
{
	printf("hay nhap ma sach:");
	scanf("%s",s->Ma_sach);
	getchar();
	printf("hay nhap tieu de cua sach:");
	gets(s->Tieu_de);
	fflush(stdin);
	printf("hay nhap tac gia:");
	gets(s->Tac_gia);
	fflush(stdin);
	printf("hay nhap nam sach xuat ban:");
	scanf("%d",&s->namxb);
	printf("hay nhap gia ban:");
	scanf("%lld",&s->Gia_ban);
	printf("hay nhap so trang cua sach:");
	scanf("%d",&s->So_trang);
	printf("hay nhap NXB:");
	scanf("%s",s->NXB);
	getchar();
	printf("hay nhap loai sach:");
	scanf("%s",s->Loai_sach);
}
void nhapn(sach ds[],int i,int n)
{
	for (i=0;i<=n-1;i++)
	{
		nhap(&ds[i]);
	}
}
void xuat(sach s)
{
	printf("%s\t%s\t%s\t%d\t%lld\t%d\t%s\t%s\t",s.Ma_sach,s.Tieu_de,s.Tac_gia,s.namxb,s.Gia_ban,s.So_trang,s.NXB,s.Loai_sach);
}
void xuatn(sach ds[],int n,int i)
{
	for (i=0;i<n;i++)
	{
		xuat(ds[i]);
	}
}
void ghin(FILE *fp,sach ds[],int i,int n)
{
	for (i=0;i<n;i++)
	{
		fprintf(fp,"%s\t%s\t%s\t%d\t%lld\t%d\t%s\t%s\n",ds[i].Ma_sach,ds[i].Tieu_de,ds[i].Tac_gia,ds[i].namxb,ds[i].Gia_ban,ds[i].So_trang,ds[i].NXB,ds[i].Loai_sach);
	}
}
void docn()
{
}
