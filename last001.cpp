# include<stdio.h>
# include<stdlib.h>

int main(){
	int people,i,name[100],num,start,p2,c13,paym;
	float doll[100],money;
	printf("�п�J�H��:");
	scanf("%d",&people);	
	
	for(i=1;i<=people;i++)
	{	
		printf("�п�J��%d��H���W��:",i);
		scanf("%s",&name[i]);
		doll[i]=0;
	}
	
	
	while(true)
	{	
		for(i=1;i<=people;i++)      // print �����H���� 
	{	
		printf("%d ",i);
		printf("%c ",name[i]);
		printf("%f \n",doll[i]);
	}
	
		printf("�i�J�O�b���`\n");	
		printf("________________\n");
		printf("1. �I�ڤH�O�b\n");
		printf("2. ��ܩҦ��H�l�B\n");
		printf("3. ��ܵ��b����\n");
		printf("________________\n");		
		printf("�п�ܶ���: ");
		scanf("%d",&start);
		
		
		switch (start) 
			{
			
			    case 1:
			    	printf("�п�J�I�ڸ��X : ");
			    	scanf("%d",&paym);		    	
			    	printf("�п�J���B : ");
			    	scanf("%f",&money);
					doll[paym]= money*-1 +doll[paym];	    	
			    	printf("�ثe�I��%f��\n________\n",doll[paym]);
			    	printf("�п�J���q�H�H�� : ");
			    	scanf("%d",&p2);
			    	for(i=1;i<=p2;i++){
			    		printf("�п�J���q�H�H���X : ");
			    		scanf("%d",&c13);						    		
						doll[c13]= (money/p2)+doll[c13];
						printf("%f\n",doll[c13]);	    		
					}		
			        
			        break;
			        
			    case 2:
			    	for(i=1;i<=people;i++)
			    	{
			    		printf("%c���l�B  ",name[i]);
			    		printf("%f \n",doll[i]);
	
					}
					break;
			   	case 3:
				   {
						int a,i,j,temp2=0;
						float zero=0,temp=0;
							for(i=1;i<=people;i++)
							{	
								zero = doll[i]+zero;
	
							}
						if(zero <= -0.1 || zero >= 0.1 )
						{	
							printf("���~�A�L�k�p��\n");
						}	
						else
						{
						
						//------------------------------------------------
							for(j=1;j<=people;j++) {	  //�q�p��j 
								for(i=1;i<=people;i++)    
							{	if(!(i==people)){	
								if(doll[i]>doll[i+1])
								{
								  	temp=doll[i];
								  	doll[i]=doll[i+1];
								  	doll[i+1]=temp;
									
									temp2=name[i];
								  	name[i]=name[i+1];
								  	name[i+1]=temp2;		  	
								}
								}
							}
							}
						//------------------------------------------------
							for(i=1;i<=people;i++)   //print �H�� 
							{	printf("%c  ",name[i]);
								printf("%f \n",doll[i]);
									
							}
							
							
							
							printf(" \n\n");
							
						//------------------------------------------------
							printf("�Ш̥H�U���ܶi��\n");
							for(i=1;i<=people;i++)   //print �H�� 
							{	
								if(doll[people]>doll[i])
								{	float x,y,z;
									x=doll[i];
									y=doll[people];
									z= x+y;
									printf("1.0 z=%f x=%f y=%f \n",z,x,y);
									doll[i]= doll[people]+doll[i];
						//			printf("%d to %d ",a,i);
									printf("%c to %c ",name[people],name[i]);			
									
									
									if(doll[i] != 0){
										i=i-1;			 
									}
									
									if(z>0){	
										doll[people]=z;	
										printf("1.1   ");
										printf("%f\n",z);
										z=0;					
									}
									else 
									{	
										people=people-1;
										printf("1.2  ");
										printf("%f \n",y);	
									} 
								}
								
								
							}
						}    	
									     system("pause");	
										  return 0;
										  						
						
					}
					case 99:
						return 0;
					default:
						{
							printf("default");
							break;
							
						}
			} 
	
	}
	return 0; 
	system("pause");
}
