# include<stdio.h>
# include<stdlib.h>

int main(){
	int people,i,name[100],num,start,p2,c13,paym;
	float doll[100],money;
	printf("請輸入人數:");
	scanf("%d",&people);	
	
	for(i=1;i<=people;i++)
	{	
		printf("請輸入第%d位人的名稱:",i);
		scanf("%s",&name[i]);
		doll[i]=0;
	}
	
	
	while(true)
	{	
		for(i=1;i<=people;i++)      // print 對應人物號 
	{	
		printf("%d ",i);
		printf("%c ",name[i]);
		printf("%f \n",doll[i]);
	}
	
		printf("進入記帳環節\n");	
		printf("________________\n");
		printf("1. 付款人記帳\n");
		printf("2. 顯示所有人餘額\n");
		printf("3. 顯示結帳指示\n");
		printf("________________\n");		
		printf("請選擇項目: ");
		scanf("%d",&start);
		
		
		switch (start) 
			{
			
			    case 1:
			    	printf("請輸入付款號碼 : ");
			    	scanf("%d",&paym);		    	
			    	printf("請輸入金額 : ");
			    	scanf("%f",&money);
					doll[paym]= money*-1 +doll[paym];	    	
			    	printf("目前付款%f錢\n________\n",doll[paym]);
			    	printf("請輸入收益人人數 : ");
			    	scanf("%d",&p2);
			    	for(i=1;i<=p2;i++){
			    		printf("請輸入收益人人號碼 : ");
			    		scanf("%d",&c13);						    		
						doll[c13]= (money/p2)+doll[c13];
						printf("%f\n",doll[c13]);	    		
					}		
			        
			        break;
			        
			    case 2:
			    	for(i=1;i<=people;i++)
			    	{
			    		printf("%c的餘額  ",name[i]);
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
							printf("錯誤，無法計算\n");
						}	
						else
						{
						
						//------------------------------------------------
							for(j=1;j<=people;j++) {	  //從小到大 
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
							for(i=1;i<=people;i++)   //print 人數 
							{	printf("%c  ",name[i]);
								printf("%f \n",doll[i]);
									
							}
							
							
							
							printf(" \n\n");
							
						//------------------------------------------------
							printf("請依以下指示進行\n");
							for(i=1;i<=people;i++)   //print 人數 
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
