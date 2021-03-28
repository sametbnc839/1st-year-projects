#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<math.h>
typedef struct{
	double x;
	double y;
	double z;
}Vector;
void print_vector(const Vector V){
	printf("(%.2lf,%.2lf,%.2lf)\n",V.x,V.y,V.z);
	return;
}
Vector sum(const Vector V1, const Vector V2){
	Vector V;
	V.x=(V1.x+V2.x);
	V.y=(V1.y+V2.y);
	V.z=(V1.z+V2.z);
	return V;
}
Vector difference(const Vector V1, const Vector V2){
	Vector V;
	V.x=(V1.x-V2.x);
	V.y=(V1.y-V2.y);
	V.z=(V1.z-V2.z);
	return V;	
}
double dot_product(const Vector V1, const Vector V2){
	return (V1.x*V2.x)+(V1.y*V2.y)+(V1.z*V2.z);
}
Vector cross_product(const Vector V1, const Vector V2){
	Vector cross_V;
	cross_V.x=(V1.y*V2.z)-(V1.z*V2.y);
	cross_V.y=(V1.z*V2.x)-(V1.x*V2.z);
	cross_V.z=(V1.x*V2.y)-(V1.y*V2.x);
	return cross_V;
}
double Norm(const Vector V){
	return sqrt(pow(V.x,2)+pow(V.y,2)+pow(V.z,2));
}
int is_unitvector(const Vector V){
	return Norm(V);
}
Vector unit(const Vector V){
	Vector K;
	K.x=V.x/Norm(V);
	K.y=V.y/Norm(V);
	K.z=V.z/Norm(V);
	return K;
}
Vector multiplyby_scalar(const Vector V1, const double c){
	Vector V;
	V.x=c*(V1.x);
	V.y=c*(V1.y);
	V.z=c*(V1.z);
	return V;
}
double angle(const Vector V1, const Vector V2){
	return acos(dot_product(V1,V2)/(Norm(V1)*Norm(V2)));
}
double distance(const Vector V1, const Vector V2){
	return Norm(difference(V1,V2));
}
int are_linearly_independent(const Vector V1, const Vector V2, const Vector V3){
	return (V1.x*(V2.y*V3.z-V3.y*V2.z)+V2.x*(V3.y*V1.z-V1.y*V3.z)+V3.x*(V1.y*V2.z-V2.y*V1.z));
}
int are_orthogonal(const Vector V1, const Vector V2, const Vector V3){
    if(dot_product(V1,V2)==0 && dot_product(V1,V3)==0 && dot_product(V2,V3)==0){
		return 1;
	}
	return 0;			
}
int are_orthonormal(const Vector V1, const Vector V2, const Vector V3){
	if(are_orthogonal(V1,V2,V3)==1){
		if(Norm(V1)==1 && Norm(V2)==1 && Norm(V3)==1){
			return 1;
		}
	}
	return 0;
}
Vector projection(const Vector V1, const Vector V2){
	Vector V;
	V.x=(dot_product(V1,V2)/pow(Norm(V2),2))*(V2.x);
	V.y=(dot_product(V1,V2)/pow(Norm(V2),2))*(V2.y);
	V.z=(dot_product(V1,V2)/pow(Norm(V2),2))*(V2.z);
	return V;
}
Vector orthogonal_projection(const Vector V1, const Vector V2){
	Vector V;
	V=difference(V1,projection(V1,V2));
	return V;
}
int convert_2_orthogonal_basis(Vector *V1, Vector *V2, Vector *V3){
	Vector d1,d2,d3;
	d1=*V1;
	V1->x=d1.x; V1->y=d1.y; V1->z=d1.z;
	d2=difference(*V2,projection(*V2,d1));
	V2->x=d2.x; V2->y=d2.y; V2->z=d2.z;
	d3=difference(difference(*V3,projection(*V3,d1)),projection(*V3,d2));
	V3->x=d3.x; V3->y=d3.y; V3->z=d3.z;
	if(are_linearly_independent(d1,d2,d3)!=0){
		return 1;
  }
	return 0;
}
char* vector2str(const Vector V){
	char *str;
	str=(char*)malloc(sizeof(char)*20);
	sprintf(str,"(%.2lf,%.2lf,%.2lf)",V.x,V.y,V.z);
	return str;
}
int main()
{
	Vector V1={0,0,1},V2={1,-2,3},V3={5,0,1};	
	double k=2;
	printf("V1=");
	print_vector(V1);
	printf("V2=");
	print_vector(V2);
	printf("V3=");
	print_vector(V3);
	printf("V1+V2=");
	Vector sum1;
	sum1=sum(V1,V2);
	printf("(%.2lf,%.2lf,%.2lf)\n",sum1.x,sum1.y,sum1.z);
	printf("V1-V2=");
	Vector difference1;
	difference1=difference(V1,V2);
	printf("(%.2lf,%.2lf,%.2lf)\n",difference1.x,difference1.y,difference1.z);
	printf("k*V1=");
	Vector multi;
	multi=multiplyby_scalar(V1,k);
	printf("(%.2lf,%.2lf,%.2lf)\n",multi.x,multi.y,multi.z);
	printf("V1.V2=%.2lf\n",dot_product(V1,V2));
    printf("V1xV2=");
    Vector V4;
    V4=cross_product(V1,V2);
    printf("(%.2lf,%.2lf,%.2lf)\n",V4.x,V4.y,V4.z);
    printf("|V1|=%.2lf\n",Norm(V1));
    if(is_unitvector(V1)==1)
    {
    	printf("V1 is an unit vector\n");
	}
	else
	{
		printf("V1 is not an unit vector\n");
	}
	printf("unit(V1)=");
	Vector U;
	U=unit(V1);
	printf("(%.2lf,%.2lf,%.2lf)\n",U.x,U.y,U.z);
	printf("angle(V1,V2)=%.2lf\n",angle(V1,V2));
	printf("distance(V1,V2)=%.2lf\n",distance(V1,V2));
	if(are_orthonormal(V1,V2,V3)==1){
		printf("Vectors are orthonormal\n");
	}
	else{
		printf("Vectors are not orthonormal\n");
	}
	
	if(are_orthogonal(V1,V2,V3)==1){
		printf("Vectors are orthogonal.\n");
	}
	else{
		printf("Vectors are not orthogonal\n");
	}
	if(are_linearly_independent(V1,V2,V3)!=0){
		printf("Vectors are linearly independent\n");
	}
	else{
		printf("Vectors are not linearly independent\n");
	}
	printf("Projection of V1 onto V2 =");
	Vector V5;
	V5=projection(V1,V2);
	printf("(%.2lf,%.2lf,%.2lf)\n",V5.x,V5.y,V5.z);
	printf("Orthogonal projection of V1 onto V2 =");
	Vector V6;
	V6=orthogonal_projection(V1,V2);
	printf("(%.2lf,%.2lf,%.2lf)\n",V6.x,V6.y,V6.z);
	printf("Orthogonalization of V1 and V2=\n");
	convert_2_orthogonal_basis(&V1,&V2,&V3);
	printf("V1=");
	print_vector(V1);
	printf("V2=");
	print_vector(V2);
	printf("V3=");
	print_vector(V3);
	puts(vector2str(V1));
	return 0;
		
}
