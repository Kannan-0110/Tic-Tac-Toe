
int checkwin(int s[])
{
	extern char gt;
	int flag=1;
	if(gt=='1')
	{
		
		for(int i=1;i<=7;i+=3)
		{
 		   if (s[i] == s[i+1] && s[i+1] == s[i+2])
			return 1;
		}

		for(int i=1;i<=3;i++)
		{
 		   if (s[i] == s[i+3] && s[i+3] == s[i+6])
			return 1;
		}

		if (s[1] == s[5] && s[5] == s[9])
		return 1;

		else if (s[3] == s[5] && s[5] == s[7])
		return 1;

		for(int l=1;l<=9;l++)
		{
			if(s[l]=='X'||s[l]=='O')
				 flag++;
		}
		if(flag==25)
			return 0;
	
		return  -1;
	}
	else
	{
		for(int j=1;j<3;j++)
			for(int i=j;i<=20+j;i+=5)
			{
 			   if (s[i] == s[i+1] && s[i+1] == s[i+2]&& s[i+2] == s[i+3])
				return 1;
			}


		for(int j=1;j<7;j+=5)
			for(int i=j;i<=5+j;i++)
			{
 			   if (s[i] == s[i+5] && s[i+5] == s[i+10]&& s[i+10] == s[i+15])
				return 1;
			}

		for(int i=2;i<7;i+=4)
		{
 			if (s[i] == s[i+6] && s[i+6] == s[i+12]&& s[i+12] == s[i+18])
			return 1;
		}
		for(int i=4;i<=10;i+=6)
		{
 			if (s[i] == s[i+4] && s[i+4] == s[i+8]&& s[i+8] == s[i+12])
			return 1;
		}
		for(int i=1;i<=7;i+=6)
		{
 			if (s[i] == s[i+6] && s[i+6] == s[i+12]&& s[i+12] == s[i+18])
			return 1;
		}
		for(int i=5;i<10;i+=4)
		{
 			if (s[i] == s[i+4] && s[i+4] == s[i+8]&& s[i+8] == s[i+12])
			return 1;
		}
		for(int l=1;l<=25;l++)
		{
			if(s[l]=='X'||s[l]=='O')
				 flag++;
		}
		if(flag==25)
			return 0;
		return -1;
	}
}
