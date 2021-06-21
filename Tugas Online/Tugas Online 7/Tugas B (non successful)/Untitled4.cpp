if(stack[j]<=stack[j+1]&& stack[j]<=stack[j-1])
{
	perimeter+=4;
	luas+=stack[j]*4;
}




	if(j=baris-1)
			{
			
				if(stack[j]>stack[j-1])
				{
						sisa=0;
					sisa=stack[j]-stack[j-1];
					sisa*=2;
					perimeter+=(stack[j]*2)+4 + sisa;
					luas+=stack[j]*4;
				}
				else
				{
					perimeter+=(stack[j]*2)+4;
					luas+=stack[j]*4;	
				}
			}
			else if(j!=0 &&stack[j]<=stack[j+1]&& stack[j]<=stack[j-1])
			{		
				perimeter+=4;
				luas+=stack[j]*4;
			}
			
			 else if(stack[j]>stack[j+1])
			{
				sisa=0;		
				sisa=stack[j]-stack[j+1];
				sisa=sisa*2;
				perimeter+=(stack[j]*2)+4 + sisa;
				luas+=stack[j]*4;
			}
			
			else if(stack[j]<=stack[j+1])
			{
				perimeter+=(stack[j]*2)+4;
				luas+=stack[j]*4;
			}
			
